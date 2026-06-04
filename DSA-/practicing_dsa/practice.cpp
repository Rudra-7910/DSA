#include<iostream>
#include<vector>
using namespace std;
int main () 
{
    vector<int> a={1,3,4,5,3,2,3,0};
    int n=a.size();
    int gap=n/2+n%2;
    while(gap>0)
    {
        int left=0;
        int right=left+gap;
        while(right<n)
        {
            if(a[left]>a[right])
            {
                swap(a[left],a[right]);
            }
                left++;
                right++;
        }
            if(gap==1)
            {
                break;
            }
            gap=gap/2+gap%2;
        }
        for(int x : a) cout << x << " ";

}
