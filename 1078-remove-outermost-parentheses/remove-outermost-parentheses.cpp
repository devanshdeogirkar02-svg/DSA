class Solution {
public:
    string removeOuterParentheses(string s) {
        string st;
        int depth=0;

        for(int i=0 ; i<s.size() ; i++){
            if(s[i]=='('){
                 depth++;
                 if(depth!=1){
                     st.push_back(s[i]);
                    }
            }    
            else if(s[i]==')'){
                 depth--;
                 if(depth!=0){
                    st.push_back(s[i]);
                 }  
            }     
        }
        return st;
    }
};