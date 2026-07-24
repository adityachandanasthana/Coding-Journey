class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        long long totalSum = 0;
        int MOD = 1e9 + 7;

        // Previous Smaller Element (PSE) ke indices store karne ke liye
        vector<int> prevSmaller(n);
        // Next Smaller Element (NSE) ke indices store karne ke liye
        vector<int> nextSmaller(n);

        stack<int> st;

        // 1. Previous Smaller Element (or Equal) find karo
        for (int i = 0; i < n; i++) {
            while (!st.empty() && arr[st.top()] > arr[i]) {
                st.pop();
            }
            // Agar stack empty hai toh matlab left me koi chhota element nahi hai (-1)
            prevSmaller[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }

        // Clear the stack for next pass
        while (!st.empty()) st.pop();

        // 2. Next Smaller Element find karo (Strictly Smaller)
        // Duplicate handling ke liye ek side strictly '>' aur doosri side '>=' rakhte hain
        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && arr[st.top()] >= arr[i]) {
                st.pop();
            }
            // Agar stack empty hai toh right me koi chhota element nahi hai (n)
            nextSmaller[i] = st.empty() ? n : st.top();
            st.push(i);
        }

        // 3. Har element ka contribution calculate karo
        for (int i = 0; i < n; i++) {
            long long leftCount = i - prevSmaller[i];
            long long rightCount = nextSmaller[i] - i;

            long long totalSubarrays = (leftCount * rightCount) % MOD;
            long long totalContribution = (totalSubarrays * arr[i]) % MOD;

            totalSum = (totalSum + totalContribution) % MOD;
        }

        return totalSum;
    }
};