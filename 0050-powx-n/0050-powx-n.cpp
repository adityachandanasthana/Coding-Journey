class Solution {
public:
    double myPow(double x, int n) {
        long long num = n;
        double multi = 1;

        if (num < 0) {
            x = 1 / x;
            num = -num;
        }

        while (num > 0) {

            if (num % 2 == 1) {
                multi *= x;
            }

            x *= x;
            num /= 2;
        }

        return multi;
    }
};