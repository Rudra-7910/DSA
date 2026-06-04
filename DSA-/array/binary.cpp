#include<iostream>
#include<math.h>
using namespace std;
int nth_root(int n, int query)
{
    int low=1;
    int high=n;
    while(low<high)
    {
        int mid=(low+high)/2;
        if(pow(mid,query)==n)
        {
            return mid;
        }
        else if ( pow(mid,query)>n)
        {
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
     return -1;
    }
    int main ()
    {

        int answer=nth_root(64,2);
        cout<<answer;
        return 0;
    }