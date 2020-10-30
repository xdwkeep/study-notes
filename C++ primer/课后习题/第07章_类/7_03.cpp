// 练习7.3：修改7.1.1节（第229页）的交易处理程序，令其使用这些成员。
#include <iostream>
using namespace std;


int main() {
  cout << "请输入交易记录（ISBN、销售额、原价、实际售价）：" << endl;
  Sales_data total;
  if (cin >> total) {
    Sales_data trans;
    while (cin >> trans) {
      if (total.isbn() == trans.isbn()) {
        total.combine(trans);
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