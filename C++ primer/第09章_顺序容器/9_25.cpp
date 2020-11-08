#include <iostream>
#include <list>
#include <vector>
using namespace std;

int main() {
    list<int> lst = {0, 1, 2, 3, 5 ,6};

    auto it = lst.begin();
    auto elem1 = lst.erase(it);
    // 两个迭代器相等，什么也不会发生
    auto elem2 = lst.erase(it, it);
    // 若elem2为尾后迭代器，elem1为之前的，那么会删除从elem1到容器末尾的所有元素
    auto elem3 = lst.erase(elem1, elem2);
    return 0;
}