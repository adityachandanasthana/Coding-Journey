class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>s1;
        
        for(char ch: s){
            if(s1.empty()){
                s1.push(ch);
            }
            
            else if(ch==s1.top()){
                s1.pop();
            }

            else{
                s1.push(ch);
            }
            
        }
        string ans="";
        while(!s1.empty()){
            ans= ans + s1.top();
            s1.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};