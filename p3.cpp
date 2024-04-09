#include <iostream>
#include <string.h>
using namespace std;
int x;
class car
{
        string name, tra, air;
        char fule[10];
        float price, capacity, mileage, seat;

public:
        void getdata() // getdata//...............

        {
                fflush(stdin);
                cout << "Enter Modal name     ";
                cin >> name;
                fflush(stdin);
                cout << "Enter fule type     ";
                cin >> fule;
                fflush(stdin);
                cout << "Enter Showroom price (Lakhs)  ";
                cin >> price;
                fflush(stdin);
                cout << "Enter transmission  ";
                cin >> tra;
                fflush(stdin);
                cout << "Enter mileage (Km/L)    ";
                cin >> mileage;
                fflush(stdin);
                cout << "Enter Modal Tank Capacity (Liters)   ";
                cin >> capacity;
                fflush(stdin);
                cout << "Enter seating capacity   ";
                cin >> seat;
                fflush(stdin);
                cout << "Airbags (Yes or No)    ";
                cin >> air;
                fflush(stdin);
        }

        void carname() // NAME ...............
        {
                cout << name;
        }
        void showdata()
        {

                cout << name << "\t" << fule << "\t" << price << "\t" << mileage << "\t" << tra << "\t           " << capacity << "\t        " << seat << "\t\t       " << air;
        }

        void car_fule(char x[10]) // FULE...........
        {
                if (strcmp(x, fule) == 0)
                {
                        showdata();
                }
        }

        void carprice(int p) // PRICE..............
        {
                if (price <= p && p > 0)
                {
                        showdata();
                }
        }
};

int main()
{

        int choise;
        char fule1[10];
        cout << "Enter numbers of car :";
        cin >> x;
        class car c[x];
        for (int i = 0; i < x; i++)
        {
                c[i].getdata();
        }
        system("CLS");
        x:
        cout << "WELCOME TO TATA MOTORS\n\n";
        cout << "GET THE CAR DETAILS AS PER YOUR PREFERENCE\n\n";
        cout << "(1) Model Name (2) Fuel Type (3) Price Range\n\n";

        cout << "ENTER YOUR OPTION : ";
        cin >> choise;
        cout << "-----------------------";
        switch (choise)
        {
        case 1:
                cout << "TATA MOTORS CARS LIST";
                cout << "MODEL\tFule\tprice\tMileage\ttransmission\tTank Capacity\tSeating Capacity\tAirbags" << endl;
                for (int i = 0; i < x; i++)
                {
                        cout << "(" << i + 1 << ")";
                        c[i].carname();
                        cout << "\t";
                }
                int n;
                cout << "\nCHOOSE YOUR CAR TO GET DETAILS :";
                cin >> n;
                c[n - 1].showdata();
                
                break;

        case 2:
                cout << "TATA MOTORS ARE AVAILABLE WITH FULE OPTIONS\n";
                cout << "(1)PETROAL(2)DIGEAL(3)CNG(4)EV";
                cout << "ENTER YOUR PREFERENCE :";
                cin >> fule1;
                cout << "MODEL\tFule\tprice\tMileage\ttransmission\tTank Capacity\tSeating Capacity\tAirbags" << endl;
                for (int i = 0; i < x; i++)
                {
                        c[i].car_fule(fule1);
                }
                

                break;
        case 3:
                cout << "ENTER YOUR  MAXIMUM AFFORDTABLE PRICE RANGR IN LAKHS :";
                cin >> n;
                cout << "MODEL\tFule\tprice\tMileage\ttransmission\tTank Capacity\tSeating Capacity\tAirbags" << endl;
                for (int i = 0; i < x; i++)
                {
                        c[i].carprice(n);
                }
                
                break;
                default :
        {
                cout<<"invalide choice please try again   ";
                goto x;
        }
        }
        
cout<<" \n\n\nCS2 23CS089 ";
        return 0;
}