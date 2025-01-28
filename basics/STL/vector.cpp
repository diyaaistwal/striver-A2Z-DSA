#include <iostream>
#include <vector>
using namespace std;

int main()
{
   vector<int> v;     //initial size 0
   v.push_back(1);   //add values to vectors
   v.push_back(2);
   v.push_back(3);
   v.push_back(4);
   v.emplace_back(6);
   
   v.pop_back(); //remove the last element
   
   cout<<"size of vector: "<<v.size()<<endl;  //new size
   cout<<"capacity of vector: "<<v.capacity()<<endl;  //size+1
   
   for(int val: v)
   {
       cout<<val<<" ";  //to print the vector
   }
   
   
   cout<<endl<<"value at second index: "<<v[2]<<endl;
   cout<<"value at third index: "<<v.at(3)<<endl;
   
   cout<<"starting value: "<<*(v.begin())<<endl;
   cout<<"ending value: "<<*(v.end())<<endl;
   
   cout<<"value at front: "<<v.front()<<endl;
   cout<<"value at back: "<<v.back()<<endl;
   
   v.push_back(10);
   v.push_back(20);
   
   v.erase(v.begin()+2);  //to remove any value
   
   v.insert(v.begin()+2,30);  //to insert any value
   
   for(int val: v)
   {
       cout<<val<<" ";  
   }
   
    v.clear();  //removes all elements but vectors' internal capacity stays
    
    cout<<endl<<"size of vector: "<<v.size()<<endl;  
    cout<<"capacity of vector: "<<v.capacity()<<endl;  
    
    cout<<"is empty: "<<v.empty()<<endl; //tells if vector is empty
    
    vector<int> vec(3,-1); //initialize vector of size 3 with values -1
    vec.push_back(4);
    vec.push_back(5);
    
    vector<int>::iterator it;  
    for(it=vec.begin();it!=vec.end();it++)  //forward
    {
        cout<<*(it)<<" ";
    }
    cout<<endl;
    //vector<int>::reverse_iterator it2;
    for(auto it2=vec.rbegin();it2!=vec.rend();it2++) //backward
    {
        cout<<*(it2)<<" ";
    }
    return 0;
}
