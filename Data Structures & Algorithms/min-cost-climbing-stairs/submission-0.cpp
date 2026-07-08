class Solution {
public:
    int min(int a,int b){
        if(a>=b)
        return b;
        return a;
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int> m(cost.size());
        m[0]=0;
        m[1]=0;
        for(int i=2;i<cost.size();i++){
            m[i]=min(m[i-1]+cost[i-1],m[i-2]+cost[i-2]);
        }return min(m[n-1]+cost[n-1],m[n-2]+cost[n-2]);
        
    }
};
