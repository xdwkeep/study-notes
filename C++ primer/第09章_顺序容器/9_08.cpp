#include <iostream>
#include <vector>
#include <list>
#include <string>
using namespace std;

int main() {
    // 读取数据，value_value表示元素类型
    list<string>::value_type t1;
    // 写入数据，需要引用类型
    list<string>::reference t2 = t1;
    return 0;
}