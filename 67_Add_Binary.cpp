class Solution {
public:
    string addBinary(string a, string b) {

        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());

        int min1 = min(a.length(), b.length());
        int carry = 0;
        string r;

        for (int i = 0; i < min1; i++) {

            if (a[i] == '1' && b[i] == '1') {
                if (carry == 0)
                    r += '0';
                else
                    r += '1';

                carry = 1;

            }

            else if (a[i] == '0' && b[i] == '0') {
                if (carry == 0)
                    r += '0';
                else
                    r += '1';
                carry = 0;
            }

            else {
                if (carry == 0)
                    r += '1';
                else {
                    r += '0';
                    carry = 1;
                }
            }
        }

        if (a.length() > b.length()) {
            for (int i = min1; i < a.length(); i++) {
                if (carry == 0)
                    r += a[i];
                else {
                    if (a[i] == '1') {
                        r += '0';
                        carry = 1;
                    } else {
                        r += '1';
                        carry = 0;
                    }
                }
            }

        } else if (a.length() < b.length()) {
            for (int i = min1; i < b.length(); i++) {
                if (carry == 0)
                    r += b[i];
                else {
                    if (b[i] == '1') {
                        r += '0';
                        carry = 1;
                    } else {
                        r += '1';
                        carry = 0;
                    }
                }
            }
        }

        if (carry)
            r += '1';

        reverse(r.begin(), r.end());

        return r;
    }
};