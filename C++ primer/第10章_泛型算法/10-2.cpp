#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    vector<string> sv;
    string word;
    while(cin >> word) {
        sv.push_back(word);
    }

    cout << "count word:" << endl;
    cin >> word;

    cout << count(sv.begin(), sv.end(), word) << endl;

    return 0;
}