#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main () 
{
    vector<int> a={2,5,6,8,1};
    int n=a.size();
    int target=7;
    int i=0;
    int j=n-1;
    sort(a.begin(),a.end());
    while(i<j)
    {
        if(a[i]+a[j]<target)
        {
            i++;
        }
        else if(a[i]+a[j]>target)
        {
            j--;
        }
        else{

            cout << i << " " << j;  // ✅ print i and j
            break;                  
        }
    }
}