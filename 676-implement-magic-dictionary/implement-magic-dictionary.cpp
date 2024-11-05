class trie {
private:
	unordered_map<int, trie*> child;	

	bool isLeaf { };

public:
	trie() {
	}

	void insert(string str) {
		trie* cur = this;

		for (int idx = 0; idx < (int) str.size(); ++idx) {
			int ch = str[idx] - 'a';
			if (!cur->child.count(ch))
				cur->child[ch] = new trie();
			cur = cur->child[ch];
		}
		cur->isLeaf = true;
	}

	bool word_exist(string str) {
		trie* cur = this;

		for (int idx = 0; idx < (int) str.size(); ++idx) {
			int ch = str[idx] - 'a';
			if (!cur->child.count(ch))
				return false;	
			cur = cur->child[ch];
		}
		return cur->isLeaf;
	}

    bool word_exist_with_1change(string word)
    {
        for (int i =0;i<word.length() ; i++)
        {   char cpy = word[i];
            for(char ch='a' ;ch<='z' ; ch++)
            {
                if(cpy == ch)
                continue;

                word[i]=ch;
                if(word_exist(word))
                return true;
            }
            word[i]=cpy;
        }

        return false;
    }
};


class MagicDictionary {
public:

    trie* root;


    MagicDictionary() {
        root=new trie();
    }
    
    void buildDict(vector<string> dictionary) {
        for(int i=0;i<dictionary.size();i++)
        root->insert(dictionary[i]);
    }
    
    bool search(string searchWord) {
        return root->word_exist_with_1change(searchWord);
    }
};

/**
 * Your MagicDictionary object will be instantiated and called as such:
 * MagicDictionary* obj = new MagicDictionary();
 * obj->buildDict(dictionary);
 * bool param_2 = obj->search(searchWord);
 */