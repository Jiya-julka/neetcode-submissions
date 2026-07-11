class Solution {
public:
    int max(int a,int b){
            if(a>=b){
                return a;
            }return b;
        }
    int rob(vector<int>& nums) {
        
        vector<int> m(nums.size());
        m[0]=nums[0];
       if(nums.size()>1) {m[1]=max(m[0],nums[1]);}
       else{
        return m[0];
       }
        for(int i=2;i<nums.size();i++){
            m[i]=max(m[i-2]+nums[i],m[i-1]);

        }return m[nums.size()-1];

    }
};
