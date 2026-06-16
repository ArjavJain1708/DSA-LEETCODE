class Solution {
public:
    int getNext(int n) {
        int totalSum = 0;
        while (n > 0) {
            int digit = n % 10;
            totalSum += digit * digit;
            n /= 10;
        }
        return totalSum;
    }
    bool isHappy(int n) {
        int slow = n;
        int fast = getNext(n);
        
        // Loop until fast reaches 1 (happy) OR slow catches up to fast (cycle)
        while (fast != 1 && slow != fast) {
            slow = getNext(slow);               // Moves 1 step
            fast = getNext(getNext(fast));      // Moves 2 steps
        }
        
        // If the loop broke because fast reached 1, it's a happy number
        return fast == 1;
        
    }
};