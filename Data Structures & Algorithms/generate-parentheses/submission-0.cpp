class Solution {
public:
    vector<char> s{'(',')'};
    string path;
    vector<string> ans;
    int o=0,c=0;
    void back(int n){
        if(path.size()==2*n){
            ans.push_back(path);
        }for(char st:s){
            if(st=='('){
                o++;
            }else{
                c++;
            }if(o>n||c>o){
                if(st=='('){
                o--;
            }else{
                c--;
            }
                continue;
            }path.push_back(st);
            back( n);
            char t=path.back();
            if(t=='('){
                o--;
            }else{
                c--;
            }path.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
           back(n);
           return ans;
    }
        
};
