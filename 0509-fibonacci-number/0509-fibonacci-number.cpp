class Solution {
public:
    int fib(int n) {
        if (n <= 1) {
            return n;
        }
        int a1 = 0, a2 = 1, a3 = 0;
        for (int i = 2; i <= n; i++) {
            a3 = a1 + a2;
            a1 = a2;
            a2 = a3;
        }
        return a3;
    }
};