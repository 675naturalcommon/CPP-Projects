#include <iostream>
using namespace std;

// int func(int a = 10,int b) //这是错误的，当一个参数有默认参数时，后面的参数必须也有默认参数
int func(int a = 10, int b = 20) // 正确的，a和b都有默认参数
{
    return a + b;
}

// 如果函数声明有默认参数，函数实现就不能有默认参数
int func2(int a = 10, int b = 20);

int func2(int a, int b)
{
    return a + b;
}
// int func2(int a, int b = 20)//error: default argument given for parameter 2 of 'int func2(int, int)' [-fpermissive]
// {
//     return a + b;
// }
int main()
{
    int ret = func(10, 20);
    cout << "ret = " << ret << endl;

    int ret2 = func2(10,20);
    cout << "ret2 = " << ret2 << endl;
    return 0;
}