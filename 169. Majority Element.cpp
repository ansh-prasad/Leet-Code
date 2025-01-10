class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        return nums[n/2];
    }
};




// Boyre Moore Voting Algorithm

// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         int candidate = 0, count = 0;

//         for (int num : nums) {
//             if (count == 0) {
//                 candidate = num;
//             }
//             count += (num == candidate) ? 1 : -1;
//         }

//         return candidate;
//     }
// };