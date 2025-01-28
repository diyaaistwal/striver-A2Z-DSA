//#include <iostream>
#include <bits/stdc++.h> //includes all the libraries of c++
using namespace std;

void print()
{
    cout<<"hey welcome!"<<endl;
}

void sum(int num1,int num2)
{
    int s=num1+num2;
    cout<<"sum:"<<s<<endl;
}

int product(int num_a,int num_b)
{
    int result=num_a*num_b;
    return result;
}
int main()
{
    /*
    functions are set of code which performs something for you.
    they are used to increase readability
    they are used to use same code multiple times
    void->which does not return anything
    return
    parameterised
    non-parameterised
    */
    print();
    int a,b;
    cout<<"enter two numbers";
    cin>>a>>b;
    sum(a,b);
    int res=product(a,b);
    cout<<"product:"<<res;
}    
  
  
