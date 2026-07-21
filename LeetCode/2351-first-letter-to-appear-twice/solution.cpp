class Solution {
public:
    char repeatedCharacter(string s) {
        bool visited[26] = {false};
        
        for (char c : s) {
            int index = c - 'a';
            // If already visited, this is the first character to appear twice
            if (visited[index]) {
                return c;
            }
            visited[index] = true;
        }
        
        return ' ';
    }
};