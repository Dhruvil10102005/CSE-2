#include <iostream>
#define pi 3.141
using namespace std;
class area
{
    int r;
    static int n;

public:
    ~area()
    {
        cout << "one object is deleted \n";
        n--;
        cout << "total object are : " << n << endl;
    }
    area()
    {
        r = 1;
        cout << "circle with radius " << r << " has area :" << pi * r * r << endl;
        n++;
    }
    area(int a) // parameterized constructor
    {
        r = a;
        cout << "circle  with radius " << a << " has area :" << pi * a * a << endl;
        n++;
    }
    area(area &obj) // copy constructor
    {
        cout << "circle with radius " << obj.r << " has area :" << pi * obj.r * obj.r << endl;
        n++;
    }
};
int area ::n;
int main()
{
    int a;
l1:
    cout << "[1] stetic memory [2] dynemic memory\n";
    cout << "Enter your choice :";

    cin >> a;

    switch (a)
    {
    case 1:
    {
        area obj1;
        area obj2(20);
        area obj3(obj1);
        break;
    }
    case 2:
    {
        area *c = new area;
        area *c1 = new area(10);

        delete c1;

        area c2(*c);
        delete c;
        break;
    }
    default:
    {
        cout << "Please enter the correct value";
        break;
    }
    cout<<" \n\n\nCS2 23CS089 ";
    }
}