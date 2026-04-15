#include <iostream>
using namespace std;

//设计一个圆类，求圆的周长
#define PI 3.1415926

class Circle 
{
    public:
    //属性：半径
    int _r;
    //行为：求周长
    double perimeter()
    {
        return 2 * PI * _r;
    }

    private:
};

int main()
{
    //通过圆类，创建具体的圆（对象）
    Circle c1;
    //给圆对象的属性赋值
    c1._r = 10;

    cout << "Circle c1 perimeter: " << c1.perimeter() << endl;
    
    return 0;
}