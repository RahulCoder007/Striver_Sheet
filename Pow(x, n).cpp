class Solution {
public:
    double myPow(double x, int n) {
        double val=1.0;
        /**********o(n)**********/
//         if(n>=0){
//             for(long long i=1;i<=n;i++){
//                 val *= x;

//             }
//         }else{
//             n *=-1;
//             for(long long j=1;j<=n;j++)
//                 val /=x;
//         }
//         return val;
        /*******o(logn)********/
        if(n<0){
            long long nn =n*1LL*-1;
            x=1/x;
            while(nn){
            if(nn & 1)
                val = val*x;
            x=x*x;
            nn>>=1;
        }
        }else{
        while(n){
            if(n & 1)
                val *=x;
            x=x*x;
            n>>=1;
        }
        }
        return val;
    }
};