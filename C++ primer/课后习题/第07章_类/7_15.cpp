#include <iostream>
#include <string>
using namespace std;

class Person {
    private:
    string strName;
    string strAddress;
    public:
    Person() = default;
    Person(const string &strName, const string &strAddress) {
        this->strName = strName;
        this->strAddress = strAddress;
    }

    public:
    string getName() const {
        return strName;
    }
    string getAddress() const {
        return strAddress;
    }
};

int main() {
    Person per1;
    cout << per1.getAddress() << ' ' << per1.getName() << endl;
    Person per2("myname", "myaddress");
    cout << per2.getAddress() << ' ' << per2.getName() << endl;
    return 0;
}