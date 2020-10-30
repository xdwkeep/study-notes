// 练习7.11：在你的Sales_data类中添加构造函数，然后编写一段程序令其用到每个构造函数。
#include <iostream>
#include <string>

class Sales_data {
private:
    string bookNo;
    unsigned units_sold = 0;
    double sellingprice = 0.0;
    double saleprice = 0.0;
    double discount = 0.0;
public:
    Sales_data() = default;
    Sales_data(const std::string &book): bookNo(book) {}
    Sales_data(const std::string &book, const unsigned num, const double sellp, const double salep);
    Sales_data(std::istream &is);
}

Sales_data::Sales_data(const std::string &book, const unsigned num, const double sellp, const double salep) {
    bookNo = book;
    units_sold = num;
    sellingprice = sellp;
    saleprice = salep;
    if (sellingprice != 0) {
        discount = saleprice / sellingprice;
    }
}

Sales_data::Sales_data(std::istream &is) {
    is >> *this;
}

int main() {
    Sales_data data1;
    Sales_data data2("978-7-121-15535-2");
    Sales_data data3("978-7-121-15535-2", 100, 128, 109);
    Sales_data data4(std::cin);

    std::cout << "书籍的销售情况：" << std::endl;
    std::cout << data1 << std::endl;
    std::cout << data2 << std::endl;
    std::cout << data3 << std::endl;
    std::cout << data3 << std::endl;
    return 0;
}