//#include <iostream>
#include <bits/stdc++.h> //includes all the libraries of c++
using namespace std;

int main()
{
    /*
   #### **1. `if-else` Statement**
- Executes a block of code based on a condition.
- If the condition is true, the `if` block runs; otherwise, the `else` block executes.
- Suitable for scenarios with a few conditions to check.

   #### **2. `switch` Statement**
- Used for decision-making with multiple fixed values.
- Evaluates a variable against different `case` values and executes the corresponding block.
- Ideal for clean and efficient handling of multiple constant conditions.
    */
    
    //if-else-else if
    /*
    int grade;
    cout<<"enter student grade"<<endl;
    cin>>grade;
    
    
    if(grade>90 && grade<=100)
    {
    cout<<"A";
    }
    
    else if(grade>80 && grade<=90)
    cout<<"B";
    
    else if(grade>70 && grade<=80)
    cout<<"c";
    
    else if(grade>60 && grade<=70)
    cout<<"D";
    
    else
    cout<<"Fail";
    */
    
    //take the day no. and print corresponding day
    int day;
    cout<<"enter day no.";
    cin>>day;
    switch(day)
    {
        case 1:
          cout<<"Monday";
          break;
          
        case 2:
          cout<<"Tuesday";
          break;
        
        case 3:
          cout<<"Wednesday";
          break;
        
        case 4:
          cout<<"Thursday";
          break;
        
        case 5:
          cout<<"Friday";
          break;
        
        case 6:
          cout<<"Saturday";
          break;
          
        case 7:
          cout<<"Sunday";  
          break;
          cout<<"check inside switch";
          
        default:
           cout<<"invalid choice :0";
    }
    cout<<endl<<"check :)";
}
