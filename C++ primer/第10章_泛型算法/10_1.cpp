#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> iv = {2, 3, 4, 5, 6 ,7, 8, 8, 8, 8};
    int val;
    // while(cin >> val) {
    //     iv.push_back(val);
    // }

    cout << "input count num" << endl;
    cin >> val;

    cout << count(iv.begin(), iv.end(), val) << endl;

    return 0;
}