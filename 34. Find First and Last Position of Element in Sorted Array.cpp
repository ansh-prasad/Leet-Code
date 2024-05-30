C++


class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int check = 0, first = -1, last = -1;
        for(int i = 0; i < nums.size(); i++)
        {
            if( nums[i] == target && check == 1)
            {
                last = i;
            }
            else if( nums[i] == target)
            {
                first = i;
                last = i;
                check = 1;
            }
        }

        vector <int> result {first, last};

        return result;
    }
};