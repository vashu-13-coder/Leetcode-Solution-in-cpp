class Solution {
public:
    int mySqrt(int x) {
        int s = 1 ;
        int e = x-1;
        long long mid = s + (e - s)/2 ;
        long long result;
        if ( x < 2){
            result = x;
        }
        while (s <= e){
            long long b = mid * mid;
            if( b == x){
                result =mid;
                break;
            }
            else if (mid * mid > x){
                e = mid - 1;
                }
            else{
                result =mid;
                s = mid + 1;
            }
            mid = s + (e - s)/2 ;
        }
        return result;
    }
};