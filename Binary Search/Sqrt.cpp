class Solution {
public:
    int mySqrt(int x) {
        if(x==0) return 0;
        int left=0,right=x;
        while(left<=right){
            int mid = left+(right-left)/2;
            long long sqrt = (long long )mid*mid;
            if(sqrt==x){
                 return mid;
            }
            else if(sqrt>x){
                 right = mid-1;
            }
            else{
                  left = mid+1;
            }
        }
        return right;
    }
};