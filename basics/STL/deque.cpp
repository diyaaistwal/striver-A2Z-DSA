#include <iostream>
#include <vector>

using namespace std;
int main()
{
    //double ended queue-dynamic arrays, non contiguous memory, random access
    pair<int, int> p={2,4};
    
    cout<<p.first<<endl;
    cout<<p.second<<endl;
    
    pair<int, pair<char, string>> pp={1,{'d',"diya"}};
    
    cout<<pp.first<<endl;
    cout<<pp.second.second<<endl;
    
    vector<pair<int,int>> v={{1,2},{2,3}};
    
    v.push_back({4,5});
    v.emplace_back(4,5); //creates in place objects
    for(pair<int,int> key:v)
    {
        cout<<key.first<<" "<<key.second<<",";
    }
    
    return 0;
}
