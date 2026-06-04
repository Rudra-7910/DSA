#include<iostream>
#include<vector>
using namespace std;
int main () 
// {

//     vector<pair<int,string>> studentdetails={{ 1,"hello"},{2,"bye"}};
//     studentdetails.push_back({4,"rudra"});
//     studentdetails.push_back(make_pair(5,"lakshay"));
//     studentdetails.pop_back();
//     studentdetails.erase(studentdetails.end());
//     for(int i=0;i<studentdetails.size();i++)
//     {
//         cout<<studentdetails[i].first<<" "<<studentdetails[i].second<<endl;
//     }
{
    vector<pair<int,int>> v ={{1,2},{3,4},{5,6}};
    int sum=0;
    for(int i=0;i<v.size();i++)
    {
        sum=sum+v[i].second;
    }
    cout<<sum<<endl;
    return 0;
}

