class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>s1;
        for(string s:tokens){
            if(s!="+"&&s!="-"&&s!="*" && s!="/"){
                s1.push(stoi(s));
            }
            else {
                int a=s1.top();
                s1.pop();
                int b=s1.top();
                s1.pop();
                if(s=="+"){
                    s1.push(b+a);
                }
                else if(s=="-"){
                    s1.push(b-a);
                }
                else if(s=="*"){
                    s1.push(b*a);
                }
                else{
                    s1.push(b/a);
                }
            }
        }
        return s1.top();
    }
};