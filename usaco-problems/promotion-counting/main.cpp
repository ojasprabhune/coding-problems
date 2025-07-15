#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

// if after # changes, promotions
// if before # changes, promotions

int main() {
    // freopen("teleport.in", "r", stdin);
    // sends standard output to problemname.out file 
    // freopen("teleport.out", "w", stdout);

    int bronze_silver, silver_gold, gold_plat = 0;

    vector<int> bronze (2), silver (2), gold (2), plat(2);

    cin >> bronze[0] >> bronze[1] >> silver[0] >> silver[1] >> gold[0] >> gold[1] >> plat[0] >> plat[1];

    cout << bronze_silver << endl;
    cout << silver_gold << endl;
    cout << gold_plat << endl;

    return 0;
}
