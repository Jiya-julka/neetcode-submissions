class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int ans=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            int s=1;
            if(i!=0&&nums[i]-nums[i-1]==1){
                continue;
            }while(i!=nums.size()-1&& (-nums[i]+nums[i+1]==1||-nums[i]+nums[i+1]==0)){
                if(-nums[i]+nums[i+1]==1){
                s++;
                i++;
                }else{
                    i++;
                }
            }if(s>ans){
                ans=s;
            }
        }return ans;
    }
};
