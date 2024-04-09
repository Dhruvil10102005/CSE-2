#include <iostream>
#include <string.h>
using namespace std;
// int x;
class employee
{
private:
    char id[4], number[10];
    float exp;
    string name, qua;
    static float ave_exp, n;

public:
    employee()
    {
        fflush(stdin);
        cout << "enter emloyee ID :";
        cin >> id;
        int a = strlen(id);
        if (a == 4)
        {
        }
        else
        {
            cout << "ENTER VALID ID ";
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
        cout << "enter emloyee number :";
        cin >> number;
        fflush(stdin);
        n++;
    }
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
    int CHECK(char a[])
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
    void sum()
    {
        ave_exp += exp;
    }
    static void changesum()
    {
        ave_exp = 0;
    }

    static float display1()

    {
        cout << "  " << n << endl;
        return float(ave_exp / n);
    }
};

float employee ::ave_exp;
float employee ::n;

int main()
{
    int x;
    cout << "Enter how many employee data you want to store : ";
    cin >> x;
    employee e[x];

    system("CLS");
output:
    char ID[4];
    cout << "Enter Employee ID :";
    cin >> ID;
    int ans = 0, j;
    for (int i = 0; i < x; i++)
    { // CONDITION..........
        if (e[i].CHECK(ID))
        {
            ans = 1;
            j = i;
            break;
        }
    }
    if (ans == 1) // OUTPUT.................
    {
        e[j].display();
    }
    else
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

    employee::changesum();
    cin >> q;
    if (q == 'y' || q == 'Y')
        goto output;
    cout << " \n\n\nCS2 23CS061";
    return 0;
}