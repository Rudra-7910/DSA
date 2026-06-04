#include<bits/stdc++.h>
using namespace std;
int main () 
{
    int n=3;
    int a[n][n]={1,2,9,5,23,22,14,12,12};
    int low=0;
    int high=n*n-1;
    while(high>low)
    {
        int mid=(high+low)/2;
        int row=mid/n;
        int column=mid%n;
        if(a[row][column]==14)
        {
            cout<<row<<column;
        }
        else if(a[row][column]<14)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    return 0;
}


