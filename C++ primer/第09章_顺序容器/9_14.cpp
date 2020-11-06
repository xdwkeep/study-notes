#include <iostream>
#include <list>
#include <vector>
using namespace std;

int main() {
    // c风格字符串
    list<char *> slist = {"hello", "world", "!"};
    // list<string> slist = {"hello", "world", "!"};
    vector<string> svec;

    svec.assign(slist.begin(), slist.end());
    cout << svec.capacity() << ends << svec.size() << ends << svec[0] << ends << svec[svec.size() - 1] << endl;

    return 0;
}