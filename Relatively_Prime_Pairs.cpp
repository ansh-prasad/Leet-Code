#include <iostream>
using namespace std;

int main() {
    long long l, r;
    cin >> l >> r;

    // Check if the range is valid
    if ((r - l + 1) % 2 != 0) {
        cout << "NO" << endl;
        return 0;
    }

    cout << "YES" << endl;

    // Generate pairs
    for (long long i = l; i <= r; i += 2) {
        cout << i << " " << i + 1 << endl;
    }

    return 0;
}
