// 练习7.12：把只接授一个istream作为参数的构造函数定义移到类的内部。

Sales_data(std::istream &is) {
    is >> *this;
}