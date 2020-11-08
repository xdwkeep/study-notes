#include <iostream>
#include <forward_list>
using namespace std;

int main() {
    forward_list<int> iflst = {1, 2, 3, 4, 5, 6, 7, 8};

    auto prev = iflst.before_begin();
    auto curr = iflst.begin();

    while (curr != iflst.end()) {
        if (*curr & 1) {
            curr = iflst.erase_after(prev);
        } else {
            prev = curr;
            curr++;
        }
    }

    for (auto iter = iflst.begin(); iter != iflst.end(); ++iter) {
        cout << *iter << " ";
    }
    cout << endl;
    return 0;
}