#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> iv1; //默认初始化，vecotr为空
    vector<int> iv2(iv1); // 拷贝初始化，需要双方类型相同
    vector<int> iv3={0, 1, 2}; // 列表初始化，里面元素需要与定义的一样，也可类型转换，如3.0变为3。
    vector<int> iv4(iv3.begin(), iv3.end());
    vector<int> iv5(7); //默认初始化，不过将包含7个元素，默认值为0
    vector<int> iv6(7, 3); //指定值初始化，7个值，值为3
    return 0;
}