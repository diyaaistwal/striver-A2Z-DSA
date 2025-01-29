#include <iostream>
using namespace std;
#include <set>

int main()
{
    //unique values, sorted order, no direct access 
    set<int> s;
    
    //insertion, deletion, and lookup are O(log n)
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(1);
    s.insert(2);
    s.insert(6);
    s.insert(7);
    
    s.erase(7);
    
    for(auto ss:s)
    {
        cout<<ss<<" ";
    }
    cout<<endl;
    
    cout<<"size of set: "<<s.size()<<endl;
    cout<<s.count(6)<<endl;
    
    cout<<"is empty: "<<s.empty()<<endl;
    
    if(s.find(5)!=s.end())
    {
        cout<<"element 5 found"<<endl;
    }
    else{
        cout<<"5 not found"<<endl;
    }
    
    cout<<"lower bound: "<<*(s.lower_bound(5))<<endl; //should not be less than key
    cout<<"upper bound: "<<*(s.upper_bound(5)); //should be greater than key
    return 0;
    
    //multiset, unordered set
}
