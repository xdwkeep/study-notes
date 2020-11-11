#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main() {
    vector<int> vi = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    cout << "sum of vi: " << accumulate(vi.begin(), vi.end(), 0) << endl;

    return 0;
}