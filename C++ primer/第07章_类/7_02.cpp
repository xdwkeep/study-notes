// 练习7.2：曾在2.6.2节的练习（第67页）中编写了一个Sales_data类，请向这个类添加combine和isbn成员。

#include <iostream>
using namespace std;

class Sales_data {
 private:
  string bookNo;
  unsigned units_sold = 0;
  double sellingprice = 0.0;
  double saleprice = 0.0;
  double discount = 0.0;

 public:
  string isbn() const { return bookNo; }
  Sales_data& combine(const Sales_data& rhs) {
    units_sold += rhs.units_sold;
    saleprice = (rhs.saleprice * rhs.units_sold + saleprice * units_sold);
    if (sellingprice != 0) {
      discount = saleprice / sellingprice;
    }
    return *this;
  }
}

int main() {
  return 0;
}