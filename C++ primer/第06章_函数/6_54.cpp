// 练习6.54：编写函数的声明，令其接受两个int形参并且返回类型也是int；然后声明一-个vector对象，令其元素是指向该函数的指针。

#include <iostream>
#include <vector>

using namespace std;

int func(int, int);

vector<decltype(func)*> vF;

int main() {

    return 0;
}