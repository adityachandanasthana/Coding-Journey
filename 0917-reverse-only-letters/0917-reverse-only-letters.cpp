class Solution {
public:
    string reverseOnlyLetters(string s) {
        int slow = 0;
        int fast = s.size() - 1;

        while (slow < fast) {
            if (!isalpha(s[slow])) {
                slow++;
            }
            else if (!isalpha(s[fast])) {
                fast--;
            }
            else {
                swap(s[slow], s[fast]);
                slow++;
                fast--;
            }
        }

        return s;
    }
};