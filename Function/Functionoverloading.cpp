#include <iostream>

using namespace std;

// Function overloading是C++中一项重要的多态特性，允许在同一作用域内定义多个同名函数，但这些函数必须具有不同的参数列表（参数的类型、数量或顺序）。编译器根据函数调用时提供的实参来决定调用哪个函数。Function overloading的目的是为了简化程序的编写，提高代码的可读性和可维护性。可以让同一个函数名表达“同一类操作”

// 规则
// 1，函数列表必须不同，可以体现在参数个数不同，参数类型不同，参数类型顺序不同
// 2，返回类型不能作为区分依据
// 仅仅返回类型不同而参数列表完全相同是不允许的，因为编译器无法仅根据调用的上下文唯一确定调用哪个版本
// 3，参数名称不影响重载，只关心类型和个数
void print()
{
    cout << "Hello, World!" << endl;
}

void print(int a)
{
    cout << "Hello, World " << a << endl;
}

int main()
{
    print();
    print(10);
    return 0;
}