// 练习7.5：在你的Person类中提供一些操作使其能够返回姓名和住址。这些函数是否应该是const的呢？解释原因。
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
};

int main() {

    return 0;
}