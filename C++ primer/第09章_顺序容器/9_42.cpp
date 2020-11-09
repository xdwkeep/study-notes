#include <iostream>
#include <list>
#include <vector>
using namespace std;

int main() {
    // 通过先分配好内存，然后超出100的让它自动分配。
    string s;

    s.reserve(100);
    char c;
    while (cin >> c) {
        s.push_back(c);
    }
    
    cout << s <<endl;
    return 0;
}