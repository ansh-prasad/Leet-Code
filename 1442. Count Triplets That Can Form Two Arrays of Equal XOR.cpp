class Solution {
public:
    int countTriplets(vector<int>& arr) {
        int n = arr.size();
        int res = 0;
        for (int i = 0; i < n; i++) {
            int x = 0;
            for (int j = i; j < n; j++) {
                x ^= arr[j];
                if (x == 0) {
                    res += j - i;
                }
            }
        }
        return res;
    }
};