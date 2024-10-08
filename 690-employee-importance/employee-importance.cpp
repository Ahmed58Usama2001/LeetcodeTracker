/*
// Definition for Employee.
class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};
*/

class Solution {
public:
    int importance=0;
    int getImportance(vector<Employee*> employees, int id) {
        vector<bool> visited(2001);
        dfs(employees,id,visited);
        return importance;
    }

    void dfs(vector<Employee*> employees,int id ,vector<bool>& visited)
    {   Employee* employee = nullptr;
        for (Employee* emp : employees) {
            if (emp->id == id) {
                employee = emp;
                break;
            }
        }

        importance+=employee->importance;
        visited[id]=true;
        
        for(auto neighbour : employee->subordinates)
            if(!visited[neighbour])
                dfs(employees,neighbour,visited);
        
    }
};