#include <iostream>
#include <string.h>
using namespace std;
// int x;
class employee
{
private:
    int id;
    char number[10];
    float exp;
    string name, qua;
    static float ave_exp, n;

public:
    static int a, b;

    // CONSTUCTOR GETDATA

    employee()
    {
    l1:
        fflush(stdin);
        cout << n + 1 << ") "
            << "enter emloyee ID :";
        cin >> id;

        if (id < 1000 || id > 9999)
        {
            cout << "ENTER VALID ID .\n";
            goto l1;
        }
        fflush(stdin);
        cout << "enter emloyee Name :";
        getline(cin, name);
        fflush(stdin);
        cout << "enter emloyee qualification :";
        cin >> qua;
        fflush(stdin);
        cout << "enter emloyee expreience :";
        cin >> exp;
        fflush(stdin);
    l2:

        cout << "enter emloyee number :";
        cin >> number;
        int b = strlen(number);
        if (b != 10)
        {
            cout << "invalid contact number .\n";
            goto l2;
        }
        fflush(stdin);
        n++;
    }

    // CHECH ID

    int checkid(int a)
    {
        if (id == a)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    // OUTPUT

    void display()
    {

        cout << "-------------------------------------------------------------" << endl;
        cout << "employee name "
            << "\t:" << name << endl;
        cout << "Qualification "
            << "\t:" << qua << endl;
        cout << "Experience    "
            << "\t:" << exp << "years" << endl;
        cout << "Contact Number"
            << "\t:" << number << endl;
        cout << "-------------------------------------------------------------" << endl;
    }

    // AVRANGE EXPERIENS;

    void sum()
    {
        ave_exp += exp;
    }
    static void defultsum()
    {
        ave_exp = 0;
    }
    static float display1()
    {
        return float(ave_exp / n);
    }

//EXTRA THINGS 
void printid()
{
    cout<<"Employee ID : "<<id<<endl;
}


};

float employee ::ave_exp;
float employee ::n;
int employee ::a;
int employee ::b;

int main()
{
    // employee declear
    int x, check;
    cout << "Enter how many employee data you want to store : ";
    cin >> x;
    employee e[x];

    system("CLS"); // output
output:
for(int i=0;i<x;i++)
{cout<<i+1<<")  ";
    e[i].printid();
}

    int ID; // check ID
    cout << "Enter Employee ID :";
    cin >> ID;
    for (int i = 0; i < x; i++)
    {
        if (e[i].checkid(ID))
        {
            e[i].display();
            check = 1;
            break;
        }
    }

    if (check != 1)
    {
        cout << "**************************************************************" << endl;
        cout << "ERROR" << endl;
        cout << "**************************************************************" << endl;
    }
    char q;

    for (int i = 0; i < x; i++)
    {
        e[i].sum();
    }
    cout << "YOUR COMPNEY AVERANGE EXPERIANCE IS :" << employee::display1() << endl;
    cout << "Press Y to get another employee details,press N to exit :" << endl;
    employee::defultsum();
    cin >> q;
    if (q == 'y' || q == 'Y')
        goto output;
    cout << " \n\n\nCS2 23CS061";
    return 0;
}