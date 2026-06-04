// #include<iostream>
// #include<vector>
// using namespace std;
// int main () 
// {
//     vector<int> v={1,2,4,5,6,2,9};
//     v.push_back(19);
//     v.push_back(222);
//     v.pop_back();
//     v.at(1)=11;
//     for(int i=0;i< v.size();i++)
//     {
//         cout<<v.at(i)<<" ";
//     }
//     return 0;
// }
#include<iostream>
#include<vector>
using namespace std;
int main () 
{
    vector<int> v={1,2,3,4,5};
    vector<int> :: reverse_iterator it;
    for (it=v.rbegin();it!=v.rend();it++)
    {
        cout<<*it<<" ";
    }
    return 0;
}