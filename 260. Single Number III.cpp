class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int, int> count;

        for (int num : nums)
            count[num]++;

        vector<int> result;
        for (auto pair : count) {
            if (pair.second == 1)
                result.push_back(pair.first);
        }

        return result;
    }
};