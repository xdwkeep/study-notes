#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> svec;

    string word;
    auto iter = svec.begin();

    while(cin >> word) {
        // iter始终在首位，insert返回指向新添加元素的迭代器
        iter = svec.insert(iter, word);
    }
    for (auto iter = svec.cbegin(); iter != svec.cend(); ++iter) {
        cout << *iter << endl;
    }
    return 0;
}