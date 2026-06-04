#include<iostream>
#include<vector>
using namespace std;
int main () 
{
    vector<int>a={1,1,1,1,1,1,1,1,12,2,2,2,-3,-3,-5,-6,-9};
    vector<int> pos, neg;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]>0)
        {
            pos.push_back(a[i]);
        }
        else if(a[i]<0)
        {
            neg.push_back(a[i]);
        }
    }
        if(pos.size()>neg.size())
        {
            for(int i=0;i<neg.size();i++)
            {
                a[2*i]=pos[i];
                a[2*i+1]=neg[i];
            }
            int index=neg.size()*2;
            for(int i=neg.size();i<pos.size();i++)
            {
                a[index]=pos[i];
                index++;
            }
        }
    else
    {
        for(int i=0;i<pos.size();i++)
            {
                a[2*i]=neg[i];
                a[2*i+1]=pos[i];
            }
            int index=pos.size()*2;
            for(int i=pos.size();i<neg.size();i++)
            {
                a[index]=neg[i];
                index++;
            }
    }
    for ( int i=0;i<a.size();i++)
    {
        cout << a[i] << " ";
    }
    

    }