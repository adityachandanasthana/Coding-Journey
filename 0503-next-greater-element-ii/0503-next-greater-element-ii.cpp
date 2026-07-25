class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int>s1;
        int n=nums.size();
        vector<int>ans(n);
        
        for(int i=2*n-1;i>=0;i--){
            while(!s1.empty() && s1.top()<=nums[i%n]){
                s1.pop();
            }
            if(s1.empty()){
                ans[i%n]=-1;
            }
            else{
                ans[i%n]=s1.top();
            }
            s1.push(nums[i%n]);
        }
     return ans;   
    }
};