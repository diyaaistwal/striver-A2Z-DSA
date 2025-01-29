#include <iostream>
using namespace std;
#include <map>

int main()
{
    //key-value pairs, allows duplicate keys, sorted keys 
    multimap<string,int> m;
    
    //insert/emplace to insert
    
    m.emplace("ipad",4);
    m.emplace("ipad",24);
    m.emplace("camera",16);
    m.emplace("smartphone",37);
    m.emplace("watch",55);
    m.emplace("fan",29);
    
    m.erase("fan");
     
    m.erase(m.find("ipad"));  //to delete one insatnce of ipad, iterator used
    for(auto key:m)
    {
        cout<<key.first<<" "<<key.second<<endl;
        
    }
    
    return 0;
    
    /*insertion, deletion, and access operations are O(log n) due to the underlying balanced binary tree 
    structure (typically a red-black tree)*/
}
