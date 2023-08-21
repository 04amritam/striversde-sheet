class Solution {
public:
    double myPow(double x, int n) {
        if(n==0)return 1;
        if(n==1)return x;
        double ans=1;
        if(n>1){
            for(long int i=1;i<=n;i++){
                ans*=x;
            }
        }
        else{
            for(long int i=-1;i>=n;i--){
                ans*=1/x;
            }
        }
        return ans;
    }
};