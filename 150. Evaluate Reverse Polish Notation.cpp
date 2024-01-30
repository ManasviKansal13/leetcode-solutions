class Solution {
public:
    stack<int> st;
    void op(string& s){
        if(st.empty()) return;
        int b=st.top();
        st.pop();
        if(st.empty()) return;
        int a=st.top();
        st.pop();
        int ans;
        switch(s[0]){
            case '+':
                ans=a+b;
                break;
            case '-':
                ans=a-b;
                break;
            case '*':
                ans=a*b;
                break;
            case '/':
                ans=a/b;
                break;
        }
        st.push(ans);
    }
    int evalRPN(vector<string>& tokens) {
        for(int i=0;i<tokens.size();i++){
            string &s=tokens[i];
            if(s.size()>1 || isdigit(s[0])){
                int ans=stoi(s);
                st.push(ans);
            }
            else op(s);
        }
        if(st.empty()) return 0;
        return st.top();
    }
};