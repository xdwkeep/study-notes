// 练习7.7：使用这些新函数重写7.1.2节（第233页）练习中的交易处理程序。

#include <iostream>
#include "Sales_data.h"
using namespace std;

int main() {
  cout << "请输入交易记录（ISBN、销售额、原价、实际售价）：" << endl;
  Sales_data total;
  if (read(cin, total)) {
    Sales_data trans;
    while (cin >> trans) {
      if (total.isbn() == trans.isbn()) {
        total.combine(trans);
      } else {
        print(cout, total);
        cout << endl;
        total = trans;
      }
    }
    print(cout, total);
    cout << endl;
  } else {
    cerr << "No data?!" << endl;
    return -1;
  }
  return 0;
}