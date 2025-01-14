class Solution {
public:
    int dominantIndex(vector<int>& nums) {

        if (nums.size() == 1) return 0;

        int max1 = INT_MIN, max2 = INT_MIN, index = -1;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > max1) {
                max2 = max1;
                max1 = nums[i];
                index = i;
            } else if (nums[i] > max2) {
                max2 = nums[i];
            }
        }

        return (max1 >= (max2 * 2)) ? index : -1;
    }
};