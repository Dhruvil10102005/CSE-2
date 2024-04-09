#include <iostream>
using namespace std;

float area(float x)
{
        return x * x * 3.14;
}
float area(float x, float y)
{
        return x * y;
}
float area(float x, float y, float z)
{
        return 2 * (x * y + y * z + z * x);
}
int main()
{
        float r, w, h, a, b, c;
        cout << "Enter redious :";
        cin >> r;
        cout << "The area of a circle is :";
        cout << area(r) << endl;
        cout << "--------------------------------------------\n";
        cout << "Enter hight of a rectangle :";
        cin >> h;
        cout << "Enter width of a rectangle :";
        cin >> w;
        cout << "The area of a rectangle is :";
        cout << area(h, w) << endl;
        cout << "--------------------------------------------\n";
        cout << "Enter hight of a cuboid :";
        cin >> a;
        cout << "Enter width of a cuboid :";
        cin >> b;
        cout << "Enter depth of a cuboid :";
        cin >> c;
        cout << "The area of a cuboid is :";
        cout << area(a, b, c) << endl;
        cout<<" \n\n\nCS2 23CS089";

        return 0;
}
