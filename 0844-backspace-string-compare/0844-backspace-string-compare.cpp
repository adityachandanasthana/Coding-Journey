class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>s1;
        stack<char>s2;
        for(char ch: s){
            if(ch!='#'){
                s1.push(ch);
            }
            else{
                if(!s1.empty()){
                s1.pop();
                }
            }
        }
        for(char ch: t){
            if(ch!='#'){
                s2.push(ch);
            }
            else{
                if(!s2.empty()){
                s2.pop();
                }
            }
        }
        while(!s1.empty() && !s2.empty()){
             if(s1.top()!=s2.top())
                return false;
            s1.pop();
            s2.pop();    
        
         
           
        }
        return s1.empty() && s2.empty();
    
    }
};