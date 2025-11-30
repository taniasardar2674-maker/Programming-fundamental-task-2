#include<iostream>
#include<string.h>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{
    string Name, Department;
    int Roll_No;
    int marks1, marks2, marks3;

    cout<<"Enter Student Name: ";
    getline(cin, Name);

    cout<<"Enter Roll Number: ";
    cin>>Roll_No;
    cin.ignore();

    cout<<"Enter Department: ";
    getline(cin, Department);

    cout<<"Enter marks in English: ";
    cin>>marks1;

    cout<<"Enter marks in Math: ";
    cin>>marks2;

    cout<<"Enter marks in Physics: ";
    cin>>marks3;

    int Total = marks1 + marks2 + marks3;
    float Percentage = (Total / 300.0f) * 100;

    char Grade;
    if (Percentage >= 90)
        Grade = 'A';
    else if (Percentage >= 80)
        Grade = 'B';
    else if (Percentage >= 70)
        Grade = 'C';
    else if (Percentage >= 60)
        Grade = 'D';
    else
        Grade = 'F';

    cout<<"\n================================\n";
    cout<<setw(15)<<"\nSTUDENT RESULT CARD";
    cout<<"\n================================";

    cout<<left<<setw(15)<<"\nName:"<<Name;
    cout<<left<<setw(15)<<"\nRoll No:"<<Roll_No<<endl;
    cout<<left<<setw(15)<<"\nDepartment:"<<Department;
    cout<<"\n--------------------------------";

    cout<<left<<setw(15)<<"\nSubject"<<"Marks";
    cout<<"\n--------------------------------";

    cout<<left<<setw(15)<<"\nEnglish"<<marks1;
    cout<<left<<setw(15)<<"\nMath"<<marks2;
    cout<<left<<setw(15)<<"\nPhysics"<<marks3;
    cout<<"\n--------------------------------";

    cout<<left<<setw(15)<<"\nTotal Marks: "<<Total;
    cout<<left<<setw(15)<<"\nPercentage: ";
	cout<<fixed<<setprecision(2)<<Percentage<< "%" <<endl;
    cout<<"\n================================";

    cout<<left<<setw(15)<<"\nGrade:"<<Grade;
    cout<<"\n================================";

    cout<<"\nCongratulations "<<Name<<"!";
    cout<<"\n================================";

    return 0;
}

