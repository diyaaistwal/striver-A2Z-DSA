//#include <iostream>
#include <bits/stdc++.h> //includes all the libraries of c++
using namespace std;

int main()
{
    cout<<"Hello World"<<"\n";
    cout<<"learn basics of c++"<<endl;
    
    //basic i/o
   /* 
    int x;
    cin>>x;
    cout<<"the no. inputted by user is: "<<x<<endl;
    */
    
    //basic string
    /*
    string s1,s2;
    cin>>s1>>s2;     //if i input two words with a space in between, they will be denoted to both s1 & s2
    cout<<"string one is "<<s1<<" & string two is "<<s2<<endl;
    */
    
    //string getline
    string str;
    getline(cin,str);  //to take the whole sentence as one single string, it might take enter as a string
    cout<<"new string is "<<str; 
    
    //character typede
    char ch;
    cin>>ch;
    cout<<"the character is: "<<ch<<endl;


    return 0;
}
