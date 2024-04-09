#include <iostream>
#include <math.h>

using namespace std;

class cal
{
private:
    int r = 0, i = 0;

public:
    void getdata()
    {
        cout << "Enter the real part : ";
        cin >> r;
        cout << "Enter the imaginary part : ";
        cin >> i;
    }
    void operator+(cal x)

    {
        cout << r + x.r << " + i" << i + x.i << endl;
    }
    void operator-(cal x)

    {
        cout << r - x.r << " + i" << i - x.i << endl;
    }
    void operator*(cal x)

    {
        cout << ((r * x.r) - (i *x.i)) << " + i" << ((r * x.i) + (i * x.r)) << endl;
    }
    void operator/(cal x)

    {

        if (x.i == 0 || x.r != 0)
            cout << ((r * x.r) + (i * x.i)) / (((x.r) * (x.r)) + ((x.i) * (x.i))) << " + i" << ((r * x.i) - (i * x.r)) / (((x.r) * (x.r)) + ((x.i) * (x.i))) << endl;

        else
            cout << "Error! Division by zero is not allowed." << endl;
    }

    void revers(cal x)

    {
        cout << (-1) * r << "+ i" << (-1) * i << endl;
        cout << (-1) * x.r << "+ i" << (-1) * x.i << endl;
    }

    void display()
    {
        cout << r << "  + i" << i << endl;
    }
};
int main()
{
    cout << "----------COMPLEX NUMBER BASIC CALCULATER ----------" << endl;
    cal o1, o2;
    o1.getdata();
    o2.getdata();
    o1.display();
    o2.display();

    char a;
start:
    cout << "'+'  for addition " << endl;
    cout << "'-'  for sub" << endl;
    cout << "'*'  for  multiplication " << endl;
    cout << "/'   for division" << endl;
    cout << "'!'  for " << endl;
    cin >> a;

    switch (a)
    {
    case '+':
        o1.operator+(o2);
        cout << "FOR RE-USE TYPE 'Y' OR 'y' AND 'N' OR 'n'  FOR EXIT\n";
        char c;
        cout << "ENTER YOUR CHOICE:";
        cin >> c;
        if (c == 'Y' || c == 'y')
        {
            goto start;
        }
        else
            break;

    case '-':
        o1.operator-(o2);
        cout << "FOR RE-USE TYPE 'Y' OR 'y' AND 'N' OR 'n'  FOR EXIT\n";
        char z;
        cout << "ENTER YOUR CHOICE:";
        cin >> z;
        if (z == 'Y' || z == 'y')
        {
            goto start;
        }
        else
            break;
    case '*':
        o1.operator*(o2);
        cout << "FOR RE-USE TYPE 'Y' OR 'y' AND 'N' OR 'n'  FOR EXIT\n";
        char x;
        cout << "ENTER YOUR CHOICE:";
        cin >> x;
        if (x == 'Y' || x == 'y')
        {
            goto start;
        }
        else

            break;
    case '/':
        o1.operator/(o2);
        cout << "FOR RE-USE TYPE 'Y' OR 'y' AND 'N' OR 'n'  FOR EXIT\n";
        char f;
        cout << "ENTER YOUR CHOICE:";
        cin >> c;
        if (f == 'Y' || f == 'y')
        {
            goto start;
        }
        else

            break;
    case '!':
        o1.revers(o2);
        cout << "FOR RE-USE TYPE 'Y' OR 'y' AND 'N' OR 'n'  FOR EXIT\n";
        char g;
        cout << "ENTER YOUR CHOICE:";
        cin >> g;
        if (g == 'Y' || g == 'y')
        {
            goto start;
        }
        else

            break;
    default:
        cout << "Invalid Operator";
        goto start;
    }

    return 0;
}