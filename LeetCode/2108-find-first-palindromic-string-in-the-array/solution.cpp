class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for (int i = 0; i < words.size(); i++) {

            bool palindrome = true;
            int l = 0;
            int r = words[i].size() - 1;

            while (l < r) {
                if (words[i][l] != words[i][r]) {
                    palindrome = false;
                    break;
                }
                l++;
                r--;
            }

            if (palindrome)
                return words[i];
        }

        return "";
    }
};