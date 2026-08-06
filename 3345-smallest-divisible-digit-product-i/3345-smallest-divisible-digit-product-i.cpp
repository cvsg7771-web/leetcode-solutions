class Solution {
public:
    int smallestNumber(int n, int t) {
       int a=n;
        while(true)
        {
            n=a;
            int prod=1;
            while(n&&prod)
            {
                prod=prod*(n%10);
                n=n/10;
            }
            if(prod%t==0)
            {
                return a;
            }
            a++;
        }
        return 0;


        
    }
};