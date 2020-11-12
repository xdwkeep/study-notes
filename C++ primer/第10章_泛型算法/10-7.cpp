#include <iostream>
#include <list>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;

int main() {
    vector<int> vi;
    list<int> lst = {1, 2, 3, 4, 5};
    copy(lst.begin(), lst.end(), back_inserter(vi));
    for (auto iter = vi.begin(); iter != vi.end(); iter++) {
        cout << *iter << " ";
    }
    cout << endl;
    return 0;
}