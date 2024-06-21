class Solution {
public:
    bool isPalindrome(int x) {
        int revNum = 0;
        int dup = x;

        while (x > 0) {
            int last = x % 10;
            if (revNum > INT_MAX / 10 || (revNum == INT_MAX / 10 && last > 7))
                return false;

            revNum = (revNum * 10) + last;
            x = x / 10;
        }

        if (dup == revNum) {
            return true;
        }
        return false;
    }
};