class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int a = 0, b = 0, chunks = 0;
        for (int i = 0; i < arr.size(); i++) {
            a += arr[i];
            b += i;
            if (a == b)
                chunks++;
        }
        return chunks;
    }
};