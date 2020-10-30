// 练习7.9：对于7.1.2节（第233页）练习中的代码，添加读取和打印Person对象的操作。

#include <iostream>
using namespace std;

class Person {
    private:
    string strName;
    string strAddress;
    public:
    string getName() const {
        return strName;
    }
    string getAddress() const {
        return strAddress;
    }
    istream &read(istream &is, Person &per) {
        is >> per.strName >> per.strAddress;
        return is;
    }
    ostream &print(ostream &os, const Person &per) {
        os << per.getName() << per.getAddress();
        return os;
    }
};

int main() {
    return 0;
}