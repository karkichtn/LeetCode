class Solution {
public:
    double average(vector<int>& salary) {
        int minSalary = INT_MAX;
        int maxSalary = INT_MIN;
        double sum = 0;
        
     
        for (int s : salary) {
            minSalary = min(minSalary, s);
            maxSalary = max(maxSalary, s);
            sum += s;
        }
        
        
        return (sum - minSalary - maxSalary) / (salary.size() - 2);
        
    }
};