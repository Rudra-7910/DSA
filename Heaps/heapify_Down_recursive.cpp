#include <bits/stdc++.h>
using namespace std;
void maxHeapifyRec(vector<int>& arr, int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
        largest = left;
    if (right < n && arr[right] > arr[largest])
        largest = right;

    if (largest != i) {
        swap(arr[i], arr[largest]);
        maxHeapifyRec(arr, n, largest); // recurse on affected subtree
    }
}
int main(){
    
    return 0;
}