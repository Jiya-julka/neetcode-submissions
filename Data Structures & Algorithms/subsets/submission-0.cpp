class Solution {
public:
    vector<vector<int>> result;
    vector<int> path;
    void backtracking(int s,vector<int>& nums){
        result.push_back(path);
        for(int i=s;i<nums.size();i++){
            path.push_back(nums[i]);
            backtracking(i+1,nums);
            path.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
         backtracking(0,nums);
         return result;
    }
    
};
