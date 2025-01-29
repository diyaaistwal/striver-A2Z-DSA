#include <iostream>
using namespace std;
#include <queue>

int main()
{
   //highest priority element-top, default max-heap, no iterators
   priority_queue<int> pq;
  //push,emplace,pop,top,size,empty
  
  pq.push(3);
  pq.push(10);
  pq.push(4);
  pq.push(5);
  
  //default order
  while(!pq.empty())
  {
      cout<<pq.top()<<" ";
      pq.pop();
  }
  cout<<endl;
  
  //reverse order
  priority_queue<int,vector<int>,greater<int>> pq2;  //greater<int> functor-function object
  
  pq2.push(3);
  pq2.push(10);
  pq2.push(4);
  pq2.push(5);
  
  while(!pq2.empty())
  {
      cout<<pq2.top()<<" ";
      pq2.pop();
  }
    return 0;
}
