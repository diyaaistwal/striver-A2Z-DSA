//#include <iostream>
#include <bits/stdc++.h> //includes all the libraries of c++
using namespace std;

int main()
{
    /*
    ### **Loops in C++**

Loops allow repetitive execution of a block of code until a condition is met.

---

    #### **1. `for` Loop**
- Repeats a block of code a fixed number of times.
- Ideal for scenarios with a known range of iterations.

    #### **2. `while` Loop**
- Repeats a block of code as long as the condition is true.
- Suitable for scenarios where the number of iterations is unknown beforehand.

    #### **3. `do-while` Loop**
- Similar to `while`, but guarantees at least one execution of the code block since the condition is checked after execution.

---

   ### **Key Difference:**
- `for`: Use for fixed iterations.
- `while`/`do-while`: Use for condition-based repetition.
    */ 
    
    for(int i=0;i<5;i++)
    {
        cout<<"coding is fun!"<<endl;
    }
    
    int j=1;
    while(j<=5)
    {
        cout<<"bye"<<endl;
        j=j+1;
    }
    
    int z=5;
    do{
        cout<<"see you later"<<endl;
        z=z-1;
    }while(z>0);
}
