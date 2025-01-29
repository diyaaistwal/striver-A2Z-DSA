#include <iostream>
using namespace std;
#include <queue>

int main()
{
   queue<int> q;
   //push,pop,front,back,size,empty; FIFO; no random access
   
   q.push(10);
   q.push(20);
   q.push(30);
   q.push(40);
   q.push(50);
   
   //only vector,deque,list use iterators
   
   while(!q.empty())
   {
       cout<<q.front()<<" ";
       q.pop();
   }
   
    return 0;
}
