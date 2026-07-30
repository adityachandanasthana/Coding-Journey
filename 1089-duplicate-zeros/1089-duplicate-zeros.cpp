class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        stack<int> st;
        int n = arr.size();
        for (int i = n - 1; i >= 0; i--) {
            st.push(arr[i]);

            if (arr[i] == 0) {
                st.push(0);   
            }
        }
        for (int i = 0; i < n; i++) {
            arr[i] = st.top();
            st.pop();
        }
    }
};