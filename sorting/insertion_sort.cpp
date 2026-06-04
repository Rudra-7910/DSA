#include <bits/stdc++.h>
using namespace std;
void sorting(vector<int> &a)
{
    int n= a.size();
    for(int i=1;i<a.size();i++)
    {
        int key=a[i];
        int j=i-1;
        while(j>=0 && a[j]>key)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
    for(int i = 0; i < n; i++)
    cout << a[i] << " ";
}
int main(){
    vector<int> a={78,5,4,0,8};
    sorting(a);
    return 0;
}