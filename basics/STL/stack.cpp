#include <iostream>
using namespace std;
#include <stack>

int main()
{
    //push 0(1),emplace,pop 0(1),top 0(1),size,empty,swap; LIFO
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    
    stack<int> s2;
    s2.swap(s); //elements of s2 and s interchanged
    
    cout<<"top of stack s2: "<<s2.top()<<endl; //display top element
    
    while(!s.empty())
    {
        cout<<"top of stack: "<<s.top()<<endl;
        s.pop();
    }
    
    cout<<"size of s: "<<s.size()<<endl;
    cout<<"size of s2: "<<s2.size()<<endl;
    return 0;
}
