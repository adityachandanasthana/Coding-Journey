class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<pair<int,int>>ans;
        for(int i=0;i<nums.size();i++){
            ans.push_back({nums[i],i});


        }
        sort(ans.begin(),ans.end());
        for(int i=0;i<nums.size();i++){
           int compliment = target - ans[i].first;
           int low=i+1;
           int high= nums.size()-1;
           while(low<=high){
            int mid = low + (high-low)/2;
            if(ans[mid].first==compliment){
               return{ans[i].second,ans[mid].second};
            }else if(ans[mid].first<compliment){
                low=mid+1;
            }else{
                high=mid-1;
            }
           }
        }
        
    
      return{};
    }    
};