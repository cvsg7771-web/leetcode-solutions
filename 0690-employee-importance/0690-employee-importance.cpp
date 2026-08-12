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
  void impo(Employee* e,int &a,unordered_map<int,Employee*>mp )
  {
    
    a=a+e->importance;
    
    for(int subid:e->subordinates)
    {
        impo(mp[subid],a,mp);
    }
  } 
    
    int getImportance(vector<Employee*> employees, int id) {
        unordered_map<int,Employee*> mp;
       
        for(Employee* emp:employees)
        {
            mp[emp->id]=emp;
           
        }
        

        
        
        int a=0;
        impo(mp[id],a,mp);
        return a;


        
    }
};