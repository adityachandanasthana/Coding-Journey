class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int h=0;
       
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=val){
            nums[h]=nums[i];
            h++;}
        }
        
        
     return h;
    }    
};      
  