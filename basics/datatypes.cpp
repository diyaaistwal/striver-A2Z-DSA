//#include <iostream>
#include <bits/stdc++.h> //includes all the libraries of c++
using namespace std;

int main()
{
    cout<<"Hello World"<<"\n";
    cout<<"learn basics of c++"<<endl;
    /*
    Data types in C++ define the type of data a variable can hold. They are broadly categorized as:
    #### **1. Basic Data Types**
- **Integer (`int`)**: Stores whole numbers (e.g., `-5`, `0`, `100`).  
- **Character (`char`)**: Stores a single character (e.g., `'a'`, `'Z'`).  
- **Floating Point (`float`)**: Stores decimal numbers with single precision (e.g., `3.14`).  
- **Double (`double`)**: Stores decimal numbers with double precision (e.g., `3.141592`).  
- **Boolean (`bool`)**: Stores `true` or `false`.

---

    #### **2. Derived Data Types**
- **Array**: Collection of elements of the same type.
- **Pointer**: Stores the address of another variable.
- **Function**: Refers to blocks of reusable code.

---

    #### **3. Void Type**
- **`void`**: Represents no value or return type (e.g., for functions that don’t return anything).

---

   #### **4. User-defined Data Types**
- **Structure (`struct`)**: Combines variables of different types under one name.
- **Class**: Used in Object-Oriented Programming to define objects.
- **Enumeration (`enum`)**: Defines a set of named integral constants.

---

   #### **5. Modifiers**
- **`short`, `long`, `signed`, `unsigned`**: Modify basic data types to alter size or range (e.g., `unsigned int`, `long double`).

--- 

   ### Example Sizes (May vary based on architecture):
- `int`: 4 bytes  
- `char`: 1 byte  
- `float`: 4 bytes  
- `double`: 8 bytes  
- `bool`: 1 byte
    */
    
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
    
    string s="diya istwal";
    int len=s.size();
    s[len-1]='z';
    cout<<s;
    */
    
    //string getline
    string str;
    getline(cin,str);  //to take the whole sentence as one single string, it might take enter as a string
    cout<<"new string is "<<str; 
    
    //character type
    char ch;
    cin>>ch;
    cout<<"the character is: "<<ch<<endl;


    return 0;
}
