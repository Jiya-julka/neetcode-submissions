class Solution {
public:
    vector<int> path;
    vector<vector<int>> ans;
    void back(vector<int>& nums,int start){
        ans.push_back(path);
        for(int i=start;i<nums.size();i++){
            if(i>start&&nums[i]==nums[i-1]){
                continue;
            }path.push_back(nums[i]);
            back(nums,i+1);
            path.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        back(nums,0);
        return ans;

    }
};
