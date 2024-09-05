class Solution {
public:
    double myPow(double x, int n) {
        if(n==0)
        return 1;

    // Calculate the power for positive exponent
    double ans = myPow(x,n/2);
    if(n%2==0){
        return ans * ans;
    }
    else{
        if(n>0)
        return x*ans*ans;
        else{
            return(ans*ans)/x; // Handle negative exponent
        }
    }
    }
};