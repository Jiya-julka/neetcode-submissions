class Solution {
public:
    int max(int a,int b){
            if(a>=b){
                return a;
            }return b;
        }
    int rob(vector<int>& nums) {
        if(nums.size() == 1)
    return nums[0];
        int a=max(rob2(nums),rob1(nums));
        return a;
    }int rob2(vector<int>& nums){
         vector<int> m(nums.size());
        m[0]=nums[0];
       if(nums.size()>1) {m[1]=max(m[0],nums[1]);}
       else{
        return m[0];
       }
        for(int i=2;i<nums.size()-1;i++){
            m[i]=max(m[i-2]+nums[i],m[i-1]);

        }return m[nums.size()-2];

    }int rob1(vector<int>& nums){
         vector<int> m(nums.size());
        m[1]=nums[1];
       if(nums.size()>2) {m[2]=max(m[1],nums[2]);}
       else{
        return m[1];
       }
        for(int i=3;i<nums.size();i++){
            m[i]=max(m[i-2]+nums[i],m[i-1]);

        }return m[nums.size()-1];

    }
};
