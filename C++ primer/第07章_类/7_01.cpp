// 练习7.1：使用2.6.1节练习定义的Sales_data类为1.6节（第21页）的交易处理程序编写一个新版本。

#include <iostream>

#include "Sales_data.h"
using namespace std;

int main() {
  cout << "请输入交易记录（ISBN、销售额、原价、实际售价）：" << endl;
  Sales_data total;
  if (cin >> total) {
    Sales_data trans;
    while (cin >> trans) {
      if (total.isbn() == trans.isbn()) {
        total += trans;
      } else {
        cout << total << endl;
        total = trans;
      }
    }
    cout << total << endl;
  } else {
    cerr << "No data?!" << endl;
    return -1;
  }
  return 0;
}