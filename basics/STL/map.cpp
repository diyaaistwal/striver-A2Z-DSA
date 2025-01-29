#include <iostream>
using namespace std;
#include <map>

int main()
{
    //key-value pairs, unique keys, sorted keys 
    map<string,int> m;
    
    //m[key]=value to insert or change
    
    m["TV"]=50;
    m["iphone"]=20;
    m["oven"]=32;
    m["AC"]=18;
    m["macbook"]=8;
    m["TV"]=65;
    
    m.insert({"watch",24});
    m.emplace("ipad",4);
    
    m.erase("AC");
    for(auto key:m)
    {
        cout<<key.first<<" "<<key.second<<endl;
        
    }
    
    cout<<"no. of tv keys: "<<m.count("TV")<<endl;
    cout<<"no. of tv values: "<<m["TV"]<<endl;
    
    if(m.find("camera")!=m.end())
    {
        cout<<"camera found"<<endl;
    }
    else
    {
        cout<<"camera not found"<<endl;
    }
    
    cout<<"no. of contents in map: "<<m.size()<<endl;
    cout<<"is empty: "<<m.empty();
    return 0;
}
