#include <bits/stdc++.h>
using namespace std;
vector<int> heap;
void heapifyUp (int i)
{
    while(i>0)
    {
        int parent= (i-1)/2;
        if(heap[parent]<heap[i])
        {
            swap(heap[parent],heap[i]);
            i=parent;
        }
        else{
            break;
        }
    }
}
int main(){
    
    return 0;
}