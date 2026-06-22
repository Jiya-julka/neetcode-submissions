class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> results;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
        int l=i+1;
        int r=nums.size()-1;
        if (i > 0 && nums[i] == nums[i-1])
        continue;
        while(l<r){
            if(nums[l]+nums[r] +nums[i]== 0){
                vector<int> result;
                result.push_back(nums[r]);
        result.push_back(nums[l]);
        result.push_back(nums[i]);
        results.push_back(result);
        
        l++;
        r--;
        while (l < r && nums[l] == nums[l - 1]) l++;
while (l < r && nums[r] == nums[r + 1]) r--;

            }
            else if(nums[l]+nums[r]+nums[i]>0){
                r--;
            }else if(nums[l]+nums[r]+nums[i]<0){
                l++;
            }
        }
    }
        
        return results;
    }
};
