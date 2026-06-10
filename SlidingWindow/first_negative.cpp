#include <bits/stdc++.h>
using namespace std;
vector<long long> printFirstNegativeNumber(long long int A[],long long int N,long long int K)
{
    vector<long long> ans;
    queue<long long>q ;
    int index=0;
    vector<long long > result;
    while(index<K)
    {
        if(A[index]<0)
        {
            q.push(A[index]);
        }
        index++;
    }
    result[0] = q.empty() ? 0 : q.front();
   
    for(int i = 1; i < N-K+1; i++){
        if(A[i-1]<0)
        {
            q.pop();
        }
        if(A[i+K-1]<0)
        {
            q.push(A[i+K-1]);
        }
        result[i]=(q.empty())?0:q.front();
    }
    return result;
}
int main(){
    
    return 0;
}