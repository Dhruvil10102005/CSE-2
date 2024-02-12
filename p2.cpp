#include<iostream>
using namespace std;
int x;
struct employee 
{
    int id;
    float exp;
    string name,qua,number;
};
int main ()
{
    int x;
    cout<<"Enter how many employee data you want to store : ";
    cin>>x;
    struct employee e[x];
    for (int i=0;i<x;i++)                            //INPUT........
    {
        cout<<"EMPLOYEE "<<i+1<<endl;
        fflush(stdin);
    cout<<"enter emloyee ID :";
    cin>>e[i].id;
    cout<<"enter emloyee Name :";
    cin>>e[i].name;
    fflush(stdin);
    cout<<"enter emloyee qualification :";
    cin>>e[i].qua;
    fflush(stdin);
    cout<<"enter emloyee expreience :";
    cin>>e[i].exp;
    fflush(stdin);
    cout<<"enter emloyee number :";
    cin>>e[i].number;
    fflush(stdin);
    }
    system("CLS");
    output :
    int ID;
    cout<< "Enter Employee ID :";
    cin>>ID;
    int ans=0,j;
    for (auto i=0;i<x;i++){                // CONDITION..........
        if(ID == e[i].id)
        { ans=1;
        j=i;
            break;
        }
    }
    if(ans==1)                            // OUTPUT.................
    {
        cout<<"-------------------------------------------------------------"<<endl;
        cout<<"employee name "<<"\t:"<< e[j].name<<endl;
        cout<<"Qualification "<<"\t:"<< e[j].qua<<endl;
        cout<<"Experience    "<<"\t:"<< e[j].exp<<"years"<<endl;
        cout<<"Contact Number"<<"\t:"<< e[j].number<<endl;
        cout<<"-------------------------------------------------------------"<<endl;
    }
    else 
    {
        cout<<"**************************************************************"<<endl;
        cout<<"ERROR"<<endl;
        cout<<"**************************************************************"<<endl;

    }
    char q;
    cout<<"Press Y to get another employee details,press N to exit :"<<endl;
    cin>>q;
    if(q=='y'||q=='Y')
    goto output;
    return 0;
}