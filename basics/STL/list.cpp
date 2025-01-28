#include <iostream>
#include<list>
using namespace std;
int main()
{
    //doubly linkedlist, non contiguous memory allocation, random access not supported
    list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);
    l.push_front(-10);
    l.push_front(-20);
    
    for(int key:l)
    {
        cout<<key<<" ";
    }

    return 0;
}
