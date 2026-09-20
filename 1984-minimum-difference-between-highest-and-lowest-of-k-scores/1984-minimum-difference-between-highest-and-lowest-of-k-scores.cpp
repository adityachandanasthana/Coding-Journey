class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {

        sort(nums.begin(), nums.end());

        int left = 0;
        int ans = INT_MAX;

        for(int right = 0; right < nums.size(); right++) {

            if(right - left + 1 == k) {

                ans = min(ans, nums[right] - nums[left]);

                left++;
            }
        }

        return ans;
    }
};