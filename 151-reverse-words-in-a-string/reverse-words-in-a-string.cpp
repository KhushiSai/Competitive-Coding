class Solution {
public:
    string reverseWords(string s) {
        string ans ,k;
        stack<string>st;
        for(auto c :s){
            if(c==' '  && !k.empty()){
                st.push(k);
                k.clear();
            }
             else if(c==' '){
                continue;
            }
            else{
                k+=c;
            }
        }
             if (!k.empty()) {
            st.push(k);
        }

        
        while(!st.empty()){
            string m=st.top();
            st.pop();
            ans+=m;
            if(!st.empty()){
                ans+=' ';
            }
        }
        return ans;
        
    }
};
