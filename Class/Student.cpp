#include <iostream>
#include <string>

using namespace std;

//设计一个学生类，属性有姓名和学号，可以给姓名和学号赋值，可以显示学生的姓名和学号
class Student
{
    public:
        string _name;
        int _id;
        void setName(string name)
        {
            _name = name;
        }
        void setId(int id)
        {
            _id = id;
        }
        void showInfo()
        {
            cout << "Name: " << _name << endl;
            cout << "ID: " << _id << endl;
        }

};

int main()
{
    Student s1;
    s1.setName("Tom");
    s1.setId(1001);
    s1.showInfo();
    return 0;
}