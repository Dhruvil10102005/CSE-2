#include<iostream>
using namespace std;


int main ()
{
    int th_marks[3],sem,pr_marks[3],th_gp[3],pr_gp[3],sum;
    string id,name,sub[3],th_lg[3],pr_lg[3];
    
    cout <<"Enter student ID :";      

    cin>>id;
    fflush(stdin);
    cout <<"Enter student name :";
    cin>>name;
    fflush(stdin);
    cout <<"Enter sem :";
    cin>>sem;
    for(int i=0;i<3;i++)
    {
    cout <<"Enter "<<i+1<<" subject :";               //subjects........    
    cin>>sub[i];
    fflush(stdin);
    }
    cout<<"Enter Theory marks-->\n";                  //theory marks.......
    for(int i=0;i<3;i++)
    {
    
    cout<<sub[i]<<" :";
    cin>>th_marks[i];
    fflush(stdin);
    }
    cout<<"Enter Prectical marks-->\n";               //prectical marks.......
    for(int i=0;i<3;i++)
    {
    
    cout<<sub[i]<<" :";
    cin>>pr_marks[i];
    fflush(stdin);
    }
    for (int i=0;i<3;i++)                            // PRECTICAL GREAD........
    {
        if(th_marks[i]>=80)
        {
            th_lg[i]="AA";
            th_gp[i]=10;
        }
        else if(th_marks[i]<80&&th_marks[i]>=73)
        {
            th_lg[i]="AB";
            th_gp[i]=9;
        }
        else if(th_marks[i]<73&&th_marks[i]>=66)
        {
            th_lg[i]="BB";
            th_gp[i]=8;
        }
        else if(th_marks[i]<66&&th_marks[i]>=60)
        {
            th_lg[i]="BC";
            th_gp[i]=7;
        }
        else if(th_marks[i]<60&&th_marks[i]>=55)
        {
            th_lg[i]="CC";
            th_gp[i]=6;
        }
        else if(th_marks[i]<55&&th_marks[i]>=50)
        {
            th_lg[i]="CD";
            th_gp[i]=5;
        }
        else if(th_marks[i]<50&&th_marks[i]>=45)
        {
            th_lg[i]="DD";
            th_gp[i]=4;
        }
        else if(th_marks[i]<45)
        {
            th_lg[i]="FF";
            th_gp[i]=0;
        }
    }

    for (int i=0;i<3;i++)                              // PRECTICAL GREAD.....
    {
        if(th_marks[i]>=80)
        {
            pr_lg[i]="AA";
            pr_gp[i]=10;
        }
        else if(th_marks[i]<80&&th_marks[i]>=73)
        {
            pr_lg[i]="AB";
            pr_gp[i]=9;
        }
        else if(th_marks[i]<73&&th_marks[i]>=66)
        {
            pr_lg[i]="BB";
            pr_gp[i]=8;
        }
        else if(th_marks[i]<66&&th_marks[i]>=60)
        {
            pr_lg[i]="BC";
            pr_gp[i]=7;
        }
        else if(th_marks[i]<60&&th_marks[i]>=55)
        {
            pr_lg[i]="CC";
            pr_gp[i]=6;
        }
        else if(th_marks[i]<55&&th_marks[i]>=50)
        {
            pr_lg[i]="CD";
            pr_gp[i]=5;
        }
        else if(th_marks[i]<50&&th_marks[i]>=45)
        {
            pr_lg[i]="DD";
            pr_gp[i]=4;
        }
        else if(th_marks[i]<45)
        {
            pr_lg[i]="FF";
            pr_gp[i]=0;
        }
    }

for (int i=0;i<3;i++)                //SGPA COUNT......
{
    int a;
    a = th_gp[i]+pr_gp[i];
    sum += a;
}
int sgpa = sum/6;


system("CLS");

cout<<"Student Id: "<<id<<endl<<"Student Name: "<<name<<endl<<"Semester: "<<sem<<endl;     //PRINTING DATA.....
    cout<<"\t"<<"\t"<<"theory"<<"\t"<<"\t"<<"Practical"<<endl;
    cout<<sub[0]<<"\t"<<"\t"<<th_lg[0]<<"\t"<<"\t"<<pr_lg[0]<<endl;
    cout<<sub[1]<<"\t"<<"\t"<<th_lg[1]<<"\t"<<"\t"<<pr_lg[1]<<endl;
    cout<<sub[2]<<"\t"<<"\t"<<th_lg[2]<<"\t"<<"\t"<<pr_lg[2]<<endl;
    cout<<"SGPA: " <<sgpa<< endl;



    return 0;
}
