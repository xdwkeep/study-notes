#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> vi = {1, 2, 3, 4, 5};
    fill_n(vi.begin(), vi.size(), 0);
    for (auto iter = vi.begin(); iter != vi.end(); iter++) {
        cout << *iter << " ";
    }
    cout << endl;
    return 0;
}