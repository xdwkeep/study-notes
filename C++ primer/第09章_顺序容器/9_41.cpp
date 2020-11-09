#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<char> cv = {'a', 'b', 'c'};
    // vector通过使用data返回内存中首地址。
    string s1(cv.data(), cv.size());
    cout << s1 << endl;
    return 0;
}