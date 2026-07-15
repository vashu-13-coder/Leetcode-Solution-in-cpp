class Solution {
public:
    bool isPerfectSquare(int num) {
        int s = 1 ;
        int e = num-1;
        long long mid = s + (e - s)/2 ;
        bool result;
        if ( num < 2){
            result = true;
        }
        while (s <= e){
            long long b = mid * mid;
            if( b == num){
                result = true;
                break;
            }
            else if (mid * mid > num){
                e = mid - 1;
                }
            else{
                result =false;
                s = mid + 1;
            }
            mid = s + (e - s)/2 ;
        }
        return result;
    }
};