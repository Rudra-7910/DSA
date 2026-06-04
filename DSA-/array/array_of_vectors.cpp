#include<iostream>
#include<vector>
using namespace std;
int main ()
{
    vector<int> v[3];
    for(int i=0;i<3;i++)
    {
        int n;
        cout<<"enter the elements in vector "<<i+1;
        cin>>n;
        for(int j=0;j<n;j++)
        {
            int a;
            cin>> a;
            v[i].push_back(a);
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<v[i].size();j++)
        {
            cout<<v[i][j];
        }
        cout<<endl;
    }
}