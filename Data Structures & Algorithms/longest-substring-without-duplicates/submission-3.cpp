class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans=0;
        int l=0;
        int result=0;
        vector<int> freq(128,0);
        for(int i=0;i<s.size();i++){
            freq[s[i]]++;
            while(freq[s[i]]>1){
                
                freq[s[l]]--;
                l++;
            }int r=i-l+1;
            if(r>result){
                result=r;
            }
        }return result;

        
    }
};
