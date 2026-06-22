class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> freq(26,0);
          if(s1.size() > s2.size())
            return false;
        for(char c:s1){
            freq[c-'a']++;
        }
        for(int i=0;i<s1.size();i++){
            freq[s2[i]-'a']--;
        }
        for(int i=s1.size();i<s2.size();i++){
            int s=0;
            for(int j=0;j<26;j++){
                if(freq[j]==0){
                    s++;
                }

            }if(s==26){
                return true;
            }freq[s2[i]-'a']--;
            freq[s2[i-s1.size()]-'a']++;
           
        }
        int s=0;
        for(int j=0;j<26;j++){
                if(freq[j]==0){
                    s++;
                }

            }if(s==26){
                return true;
            }
    
    
    
        
        return false;
    }
};
