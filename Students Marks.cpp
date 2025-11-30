#include<iostream>
#include<string> 
using namespace std;

int main()
{
    string Name;
    string Department;
    int Roll_No, marks1, marks2, marks3;

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
    return 0;
}


