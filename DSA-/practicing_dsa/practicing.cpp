//selection sort 
#include<iostream>
#include<vector>
using namespace std;
int main ()
{
    vector <int> a={4,5,2,1,3,35,355,55,2,2,3,5,2,2,1,3,5,6,3,2,3,5};
    int i;
    for(i=0;i<a.size();i++)
    {
        int min=i;
        for(int j=i+1;j<a.size();j++)
        {
            if(a[j]<a[min])
            {
                swap(a[min],a[j]);
            }
        }
    }
    for(i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }
}