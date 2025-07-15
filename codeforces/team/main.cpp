#include <iostream>
using namespace std;

int main() {
    int problems = 0;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int p, v, t;
        cin >> p >> v >> t;

        if (p + v + t >= 2) {
            problems += 1;
        }
    }

    cout << problems << endl;

    return 0;
}
