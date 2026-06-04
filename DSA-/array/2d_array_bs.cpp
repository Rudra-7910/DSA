#include<bits/stdc++.h>
using namespace std;
int main () 
{
    int n=3;
    int a[3][3]={ 1,  2,  5, 9, 12, 14, 22,23,30};
    int low=0;
    int high=n*n-1;
    while(high>=low)
    {
        int mid=(high+low)/2;
        int row=mid/n;
        int column=mid%n;
        if(a[row][column]==14)
        {
            cout<<row<<column;
            break;
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


