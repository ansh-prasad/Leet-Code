class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n);
        if (n == 1) {
            result[0] = nums[0] * nums[0];
            return result;
        }
        int i = 0, j = n - 1, k = n - 1;

        while (i <= j) {
            if (abs(nums[i]) <= abs(nums[j])) {
                result[k--] = nums[j] * nums[j];
                j--;
            } else {
                result[k--] = nums[i] * nums[i];
                i++;
            }
        }
        return result;
    }
};