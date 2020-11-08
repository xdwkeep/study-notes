#include <iostream>
#include <forward_list>
using namespace std;

void test_and_insert(forward_list<string> &sflst, const string &s1, const string &s2) {
    auto prev = sflst.before_begin();
    auto curr = sflst.begin();
    bool inserted = false;

    while (curr != sflst.end()) {
        if (*curr == s1) {
            curr = sflst.insert_after(curr, s2);
            inserted = true;
        }
        prev = curr;
        curr++;
        if (!inserted) {
            // 插入末尾还是需要使用到prev，因为curr现在是指向尾后了，用不了了。
            sflst.insert_after(prev, s2);
        }
    }
}

int main() {
    forward_list<string> sflst = {"hello", "!", "world", "!"};

    test_and_insert(sflst, "hello", "nihao");
    for (auto iter = sflst.cbegin(); iter != sflst.cend(); ++iter) {
        cout << *iter << " ";
    }
    cout << endl;

    test_and_insert(sflst, "world", "shijie");
    for (auto iter = sflst.cbegin(); iter != sflst.cend(); ++iter) {
        cout << *iter << " ";
    }
    cout << endl;
    return 0;
}