#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> iv = {4, 1, 2, 3, 4, 5};
    cout << iv.at(0) << endl;
    cout << iv[0] << endl;
    cout << iv.front() << endl;
    cout << *iv.begin() << endl;
    return 0;
}