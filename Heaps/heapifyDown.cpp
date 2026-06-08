#include <bits/stdc++.h>
using namespace std;
vector<int>heap;
void heapifyDown(vector<int> & arr,int n, int i)
{
    while(true)
    {
        int largest= i; //assume parent
        int left= 2*i+1;
        int right= 2*i+2;
        if(left<n && arr[left]>arr[largest])   //left inbound h , and bada h agr toh largest update kro 
        {
            largest=left;
        }
        if(right<n && arr[right]>arr[largest])  //right inbound and bada h , agr toh , largest update kro 
        {
            largest=right;
        }
        if(largest!=i)      //assumed nhi h agr , toh ,
        {
            swap(arr[i],arr[largest]);
            i=largest;
        }
        else
        {
            break;
        }
    }
};
int extractMax(){
    if(heap.empty())
    {
        return -1;
    }
    int maxVal=heap[0];
    heap[0]=heap.back();
    heap.pop_back();
    if(!heap.empty())
    {
        heapifyDown(heap,heap.size(),0);
    }
    return maxVal;
}

int main(){
    
    return 0;
}