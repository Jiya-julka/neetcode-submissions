class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> us; 
        vector<vector<string>> ans;
        for(string s:strs){
            string st=s;
            sort(s.begin(),s.end());
            if(us.count(s)==0){
                us[s].push_back(st);
            }else{
                us[s].push_back(st);
            }
        }for(auto it:us){
                ans.push_back(it.second);
            }return ans;
    }
};
