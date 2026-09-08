class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> st;
        for(string op : ops){
            if(op == "+"){
                int top = st.top();
                st.pop();

                int newtop = st.top()+top;
                st.push(top);
                st.push(newtop);
            }
            else if(op == "C"){
                st.pop();
            }
            else if(op == "D"){
                st.push(2*st.top());
            }
            else{
                st.push(stoi(op));
            }
        }
        int ans = 0;
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        return ans;
    }
};