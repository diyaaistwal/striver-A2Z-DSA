//#include <iostream>
#include <bits/stdc++.h> //includes all the libraries of c++
using namespace std;


void append(int num)
{
    num=num+50;
    cout<<"updated number using function:"<<num<<endl;
}

void append_ref(int &num)
{
    num=num+50;
    cout<<"updated number using function:"<<num<<endl;
}

int main()
{
    /*
    Value: Changes local to the function.
    Reference: Changes persist outside the function.
    */    
    int a;
    cout<<"enter the number";
    cin>>a;
    append(a); //pass by value
    cout<<"number in main,ie,original:"<<a<<endl; 
    append_ref(a); //pass by reference
    cout<<"number in main,ie,by reference:"<<a<<endl; 
}    
  
  
