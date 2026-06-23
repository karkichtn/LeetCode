class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {

        int end=arr.size()-1, sum=0;

        for(int i=0; i<=end; i++)
        {
            for(int j=i+1; j<=end; j++)
            {
                if (arr[i]+arr[j]==target)
                {
                    return{i,j};     
                }
                
            }
        }
        return{};
    }
    
};