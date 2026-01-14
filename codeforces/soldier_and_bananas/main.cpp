#include <iostream>
using namespace std;

int main() {
    int k, n, w;
    cin >> k >> n >> w;

    int cost = 0;
    int borrow = 0;

    for (int i = 0; i < w; i++) {
        cost += (i + 1) * k;
    }

    cout << max(0, cost - n) << endl;

    return 0;
}
