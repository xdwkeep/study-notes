// 练习7.8：为什么read函数将其Sales__data参数定义成普通的引用，而print将其参数定义成常量引用？
#include <iostream>
using namespace std;

// read是需要有修改对象的权限，将读取的数据写入到给定的Sales_data对象。
// 而print只负责输出，不做任何更改。

int main() {
    return 0;
}