#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    freopen("teleport.in", "r", stdin);
    // sends standard output to problemname.out file 
    freopen("teleport.out", "w", stdout);

	int a, b, x, y = 0;
    cin >> a >> b >> x >> y;

    int min_dist = 0;

    int dist1 = abs(max(a, b) - max(x, y)); // 2
    int dist2 = abs(min(a, b) - min(x, y)); // 1
    int tele = dist1 + dist2; // 3
    int manual = abs(a - b); // 7

    if (tele < manual) {
        min_dist = tele;
    } else {
        min_dist = manual;
    }

    cout << min_dist << endl;
}
