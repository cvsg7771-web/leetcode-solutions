class Solution {
public:
    bool sumGame(string num) {
        int qr=0,sumr=0,rl=0;
        int ql=0,suml=0,ll=0;
        for(int i=0;i<num.size()/2;i++)
        {
            rl++;
            if(num[i]=='?')
            {
                qr++;
            }
            else
            {
                sumr+=num[i]-'0';
            }
        }
            for(int i=num.size()/2;i<num.size();i++)
        {
            ll++;
            if(num[i]=='?')
            {
                ql++;
            }
            else
            {
                suml+=num[i]-'0';
            }
        }
        if((ql+qr)&1)
        {
            return true;
        }
        int dif=suml-sumr;

        return dif!=(qr-ql)*9/2;

       


        


        

        
    }
};