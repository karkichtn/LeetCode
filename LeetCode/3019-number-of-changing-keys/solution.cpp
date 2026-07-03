class Solution {
public:
    int countKeyChanges(string s) {
        if (s.empty()) return 0;
        
        int keyChanges = 0;
        
        // Loop and compare each character with the previous one case-insensitively
        for (int i = 1; i < s.length(); i++) {
            if (tolower(s[i]) != tolower(s[i - 1])) {
                keyChanges++;
            }
        }
        
        return keyChanges;
    
    }
};