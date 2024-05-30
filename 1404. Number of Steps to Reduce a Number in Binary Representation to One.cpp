class Solution {
public:
    int numSteps(string s) {
        int steps = 0;

        while (s != "1") {
            int n = s.size();

            if (s.back() == '0') {
                s.pop_back();
            } else {
                int i = n - 1;

                while (i >= 0 && s[i] == '1') {
                    s[i] = '0';
                    i--;
                }

                if (i < 0) {
                    s.insert(s.begin(), '1');
                } else {
                    s[i] = '1';
                }
            }

            steps++;
        }

        return steps;
    }
};

