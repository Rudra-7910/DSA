# include <iostream>
# include<climits>
using namespace std;

int mini(int bloom[], int n)
{
    int mini=INT_MAX;
    for(int i=0; i<n; i++)
    {
        if(bloom[i]<mini)
        mini= bloom[i];
    }
    return mini;
}

int maxi(int bloom[], int n)
{
    int maxi=INT_MIN;
    for(int i=0; i<n; i++)
    {
        if(bloom[i]>maxi)
        maxi= bloom[i];
    }
    return maxi;

}

bool possible(int bloom[], int n, int day)
{
    int count=0;
    int boquets=0;
    for( int i=0;i<=n;i++)
    {
        if(bloom[i]<=day)
        count++;
        else
        {
            boquets+=count/3;
            count=0;
        }
    }
    boquets+=count/3;

    if(boquets>=2)
    return true;
    else
    return false;
}

int minDaysTO_bloom(int bloom[],int n)
{
    int low= mini(bloom,n);
    int high= maxi(bloom,n);
    int ans;
    while(high>=low)
    {
        int mid=(high+low)/2;
        if(possible(bloom,n,mid) ==true)
        {
            ans=mid;
            low=mid=1;
        }
        else
        high=mid-1;

    }
    return ans;
}

int main(){

    int bloom[]={7, 7, 7, 7, 13, 11, 12, 7};
    int n=8;
    int final= minDaysTO_bloom(bloom,n);
    cout<<final;
    return 0;
}