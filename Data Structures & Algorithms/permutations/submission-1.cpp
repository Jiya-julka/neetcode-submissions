class Solution {
public:
        vector<int> used = vector<int>(6, 0);//normally karne se cpp thinks ur trying to declare function
        vector<int> path;
        vector<vector<int>> ans;
        void back(vector<int>& nums){
            if(path.size()==nums.size()){
            ans.push_back(path);
            return;
        }for(int i=0;i<nums.size();i++){
            if(used[i]==0){
            path.push_back(nums[i]);
            used[i]=1;
            back(nums);
            path.pop_back();
            used[i]=0;}
        }
        }
    vector<vector<int>> permute(vector<int>& nums) {
         back(nums);
         return ans;
    }
};
