class Solution {
public:
    stack<char>stk;

    bool isValid(string s) {
        for(auto c : s){
            if(c=='(' || c=='{' || c=='['){stk.push(c);}
            else{
                if(!stk.empty() && ((c==')' && stk.top()=='(') || (c=='}' && stk.top()=='{') || (c==']' && stk.top()=='['))){stk.pop();}
                else{return false;}
            }
        }return stk.empty();
    }
};