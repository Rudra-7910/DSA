#include<iostream>
#include<vector>
using namespace std;
bool linear_search(vector<int> &a,int num)
{
    int n=a.size();
    for(int i=0;i<n;i++)
    {
        if(a[i]==num)
        {
            return true;
        }
        }
        return false;
    }
int longest_consequetive_sequence(vector<int>&A)
{
    int longest=0;
    for(int i=0;i<A.size();i++)
    {
        int x=A[i];
        int cnt=1;
        while(linear_search(A,x+1)==true)
        {
            x=x+1;
            cnt++;
        }
        longest=max(longest,cnt);

    }
    return longest;
}
int main()
{
    vector<int> A = {100, 4, 200, 1, 3, 2};

    cout << longest_consequetive_sequence(A) << endl;

    return 0;
}