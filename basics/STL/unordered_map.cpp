#include <iostream>
using namespace std;
#include <unordered_map>

int main()
{
    //key-value pairs, unique keys, unsorted keys 
    unordered_map<string,int> m;
    
    m["printer"]=42;
    
    m.emplace("ipad",4);
    m.emplace("ipad",24);
    m.emplace("camera",16);
    m.emplace("fridge",37);
    m.emplace("watch",55);
    m.emplace("fan",29);
    
    for(auto key:m)
    {
        cout<<key.first<<" "<<key.second<<endl;
        
    }
    
    return 0;
    
    /*lookup, insertion, and deletion have an average time complexity of O(1) 
    due to the underlying hash table*/
}
