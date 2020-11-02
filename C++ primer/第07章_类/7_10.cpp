// 练习7.10：在下面这条if语句中，条件部分的作用是什么？
// if（read（read（cin，datal），data2））

// read(cin, datal)返回的是引用类型，也就是cin，继续可被外层调用，再read(cin, data2)也是返回cin，if判断cin是否正确读入。

#include <iostream>
using namespace std;

int main() {
    return 0;
}