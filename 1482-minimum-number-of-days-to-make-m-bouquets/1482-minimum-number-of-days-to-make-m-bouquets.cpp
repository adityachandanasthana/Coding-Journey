class Solution {
public:
    bool check(vector<int>& bloomDay, int day, int m, int k) {

        int cnt = 0;
        int bouquets = 0;

        for (int x : bloomDay) {

            if (x <= day) {
                cnt++;

                if (cnt == k) {
                    bouquets++;
                    cnt = 0; // ye flowers use ho chuke
                }
            }
            else {
                cnt = 0; // consecutive toot gaye
            }
        }

        return bouquets >= m;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {

        int n = bloomDay.size();

        // Agar total flowers hi kam hain
        if ((long long)m * k > n)
            return -1;

        int low = *min_element(bloomDay.begin(), bloomDay.end());
        int high = *max_element(bloomDay.begin(), bloomDay.end());

        while (low <= high) {

            int mid = low + (high - low) / 2;

            if (check(bloomDay, mid, m, k)) {
                high = mid - 1;   // aur chhota answer dhoondo
            }
            else {
                low = mid + 1;    // aur zyada din wait karo
            }
        }

        return low;
    }
};