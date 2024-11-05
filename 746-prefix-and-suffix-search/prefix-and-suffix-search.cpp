class Trie{
private:
Trie * child [26];
vector<int>indecies;

public:
Trie()
{
    memset(child , 0 , sizeof(child));
}

void insert(string& str , int str_idx)
{
    Trie * cur = this;

    for(int i =0;i<str.size();i++)
    {
        int ch = str[i]-'a';
        if(!cur->child[ch])
            cur->child[ch]=new Trie();
        cur->child[ch]->indecies.push_back(str_idx);
        cur = cur->child[ch];
    }
}

vector<int> get_positions(string& str)
{
    vector<int> positions;
    Trie* cur=this;

    for(int i =0;i<str.size();i++)
    {
        int ch = str[i]-'a';
        if(!cur->child[ch])
            return vector<int>();
        cur = cur->child[ch];
    }

    return cur->indecies;
}
};

class WordFilter {
public:
Trie prefix_tree;
vector<string> words_original;

WordFilter(vector<string>& words) {
	words_original = words;
	set<string> words_set;


	for (int i = (int) words.size() - 1; i >= 0; --i) {
		if (words_set.insert(words[i]).second) {
			prefix_tree.insert(words[i], i);
		}
	}
}

bool is_suffix(string str, string suf) {
	if (suf.size() > str.size())
		return false;

	for (int i = (int) suf.size() - 1, str_i = (int) str.size() - 1; i >= 0; --i, --str_i) {
		if (str[str_i] != suf[i])
			return false;
	}
	return true;
}
    
    int f(string pref, string suff) {
        vector<int>pre_list = prefix_tree.get_positions(pref);

        for(int i=0;i<pre_list.size();i++)
        {   
            int pos = pre_list[i];
            if(is_suffix(words_original[pos],suff))
            return pos;
        }

        return -1;
    }
};

/**
 * Your WordFilter object will be instantiated and called as such:
 * WordFilter* obj = new WordFilter(words);
 * int param_1 = obj->f(pref,suff);
 */