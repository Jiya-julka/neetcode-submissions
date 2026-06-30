class Solution {
public:
    vector<int> path;
    vector<vector<int>> ans;
    int s=0;
    void back(vector<int> &nums,int target,int start){
        if(s==target){
            ans.push_back(path);
            return ;
        }
        for(int i=start;i<nums.size();i++){
            if(s+nums[i]>target){
                continue;
            }if(i>start&&nums[i]==nums[i-1]){
                continue;
            }s=s+nums[i];
            path.push_back(nums[i]);
            back(nums,target,i+1);
            path.pop_back();
            s=s-nums[i];
        }

    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        back(candidates,target,0);
        return ans;
    }
};
