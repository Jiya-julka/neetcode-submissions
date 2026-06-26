class Solution {
public:
    vector<vector<int>> result;
    vector<int> path;
    int s=0;
    void back(vector<int>& nums, int target,int s,vector<int> &path,int start ){
        if (s==target){
            result.push_back(path);
            return ;
        }for(int i=start;i<nums.size();i++){
            s=s+nums[i];
            path.push_back(nums[i]);
            if(s>target){
                path.pop_back();
            s=s-nums[i];
                continue ;}
            
            back(nums,target,s,path,i);
            path.pop_back();
            s=s-nums[i];
            
        }
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        back(nums,target,s,path,0);
        return result;
    }
};
