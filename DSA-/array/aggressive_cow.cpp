#include<bits/stdc++.h>
using namespace std;
bool ispossible(vector<int> a,int check)
{
    int last=a[0];
    for(int i=0;i<a.size();i++)
    {
        if(a[i]-last>=check)
        {
            last=a[i];
            return true;
        }
        else{
            return (i-1);
        }
    }
}