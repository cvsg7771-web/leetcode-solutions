class Solution {
public:
    string intToRoman(int num) {
        unordered_map<int,char> mp;
      
        mp[1]='I';
        mp[5]='V';
        mp[10]='X';
        mp[50]='L';
        mp[100]='C';
        mp[500]='D';
        mp[1000]='M';
        string s;
        int p=1000;
        while(num)
        {
            if(num/p==0)
            {
                p/=10;
                continue;
            }

            int a=num/p;
            num=num-a*p;
            if(a>=1&&a<4)
            {
                for(int i=0;i<a;i++)
                {
                    s.push_back(mp[p]);
                }
            }
            else if(a==4)
            {
                s.push_back(mp[p]);
                s.push_back(mp[p*5]);
            }
            else if(a==5)
            {
                s.push_back(mp[p*5]);
            }
            else if(a>=6&&a<9)
            {
                s.push_back(mp[p*5]);
                for (int i=6;i<=a;i++)
                {
                s.push_back(mp[p]);
                
                }
            }
            else if(a==9)
            {
                s.push_back(mp[p]);
                s.push_back(mp[p*10]);
            }
            p=p/10;



        }
        return s;
        
        
    }
};