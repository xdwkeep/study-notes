#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

inline void output_words(vector<string> &words) {
    for (auto iter = words.begin(); iter != words.end(); iter++) {
        cout << *iter << " ";
    }
    cout << endl;
}

void elimDups(vector<string> &words) {
    output_words(words);

    sort(words.begin(), words.end());
    output_words(words);

    auto end_unique = unique(words.begin(), words.end());
    output_words(words);
    
    words.erase(end_unique, words.end());
    output_words(words);
}


int main() {
    vector<string> words = {"test1", "test2", "test3", "test1", "test4", "test2"};
    elimDups(words);
    return 0;
}