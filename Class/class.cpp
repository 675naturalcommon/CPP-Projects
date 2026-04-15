#include <iostream>
#include <cstring>
using namespace std;

class Computer
{
    //默认访问权限是私有的
public:
    void setBrand(const char *brand)
    {
        strcpy(_brand, brand);
    }

    void setPrice(int price)
    {
        _price = price;
    }
    void display()
    {
        cout << "Brand: " << _brand << endl;
        cout << "Price: " << _price << endl;
    }

private:
    //私有成员变量，私有成员不能在类之外访问
    //类中的数据成员以_开头
    char _brand[100];
    int _price;
};

void test0()
{
    Computer c1;
    c1.setBrand("Dell");
    c1.setPrice(1000);
    c1.display();
}

int main()
{
    test0();
    return 0;
}