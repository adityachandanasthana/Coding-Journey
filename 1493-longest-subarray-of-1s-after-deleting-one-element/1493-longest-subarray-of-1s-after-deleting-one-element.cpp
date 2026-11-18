class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int left=0;
        int zeros=0;
        int len=0;
        for(int right=0; right<nums.size();right++){
            if(nums[right]==0){
                zeros++;
            }
            while(zeros>1){
                if(nums[left]==0){
                    zeros--;
                }
                left++;

         
            }
          len=max(len,right-left+1);
          

        }
      return len-1;  
    }
};