class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int, vector<int>>> pq;//pq stores only one typee
        for(vector<int> v:points){
            int a=v[0]*v[0]+v[1]*v[1];
            pq.push({a,v});
            if(pq.size()>k){
                pq.pop();
            }
        }
        vector<vector<int>> v;
        while(!pq.empty()){
            auto p=pq.top();
            pq.pop();
            v.push_back(p.second);
        }return v;
    }
};
