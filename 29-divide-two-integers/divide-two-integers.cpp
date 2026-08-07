class Solution {
public:
    int divide(int dividend, int divisor) {
        // Handle the special edge case for integer overflow
        if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX;
        }

        long long temp, answer = 0, multiple = 1, toggle = 1;
        
        // Determine if the result should be negative
        if ((dividend < 0 && divisor > 0) || (dividend > 0 && divisor < 0)) {
            toggle = 0;
        }

        // Convert to absolute values using long long
        long long dvd = llabs(dividend);
        long long dvs = llabs(divisor);

        // Bitwise division logic (exponential search)
        while (dvd >= dvs) {
            temp = dvs;
            multiple = 1;
            
            while ((temp << 1) <= dvd) {
                temp <<= 1;
                multiple <<= 1;
            }
            
            dvd -= temp;
            answer += multiple;
        }

        // Apply sign and boundary safety checks
        if (toggle == 1) {
            return (answer < INT_MAX ? answer : INT_MAX);
        }
        
        return (-answer > INT_MIN ? -answer : INT_MIN);
    }
};