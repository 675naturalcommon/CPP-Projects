#include <iostream>
#include <cstring>
using namespace std;

class Computer
{
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