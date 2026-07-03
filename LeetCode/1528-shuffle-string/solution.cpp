class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int n = s.length();
        string shuffled = s; // Pre-allocate with same length
        
        // Place each character at its target index
        for (int i = 0; i < n; i++) {
            shuffled[indices[i]] = s[i];
        }
        
        return shuffled;
    }
};