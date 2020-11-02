// 练习6.55：编写4个函数，分别对两个int值执行加、减、乘、除运算；在上-题创建的vector对象中保存指向这些值的指针。

#include <iostream>
#include <vector>
using namespace std;

int func1(int a, int b) {
    return a + b;
}

int func2(int a, int b) {
    return a - b;
}

int func3(int a, int b) {
    return a * b;
}

int func4(int a, int b) {
    return a / b;
}

int main() {
    decltype(func1) *p1 = func1, *p2 = func2, *p3 = func3, *p4 = func4;
    vector<decltype(func1)*> vF = {p1, p2, p3, p4};
    
    return 0;
}