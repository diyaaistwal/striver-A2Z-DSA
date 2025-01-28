#include <iostream>
#include<deque>
using namespace std;
int main()
{
    //double ended queue-dynamic arrays, non contiguous memory, random access
    deque<int> dq;
    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);
    dq.push_back(40);
    dq.push_front(-10);
    dq.push_front(-20);
    for(int val:dq)
    {
        cout<<val<<" ";
    }
    
    cout<<endl<<"value at index 3: "<<dq[3];
    return 0;
}
