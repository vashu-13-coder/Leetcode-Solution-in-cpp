class Solution {
public:
    int subtractProductAndSum(int n) {
        int product=1;
        int sum=0;
        while (n!=0){
            int digit ;
            digit = n%10;
            n = n/10;
            product = product * digit;
            sum = sum + digit;
        }
        int difference = product - sum;
        return difference;
    }
};