#include <iostream>
#include <vector>

using namespace std;
void merge(vector<int> &nums, int low, int mid, int high) {
    vector<int> temp;
    int left = low;
    int right = mid + 1;
    while (left <= mid && right <= high) {
        if (nums[left] <= nums[right]) {
            temp.push_back(nums[left]);
            left++;
        } else {
            temp.push_back(nums[right]);
            right++;
        }
    }
    while (left <= mid) {
        temp.push_back(nums[left]);
        left++;
    }

    // If there are remaining elements in the right half
    while (right <= high) {
        temp.push_back(nums[right]);
        right++;
    }

    // Copy the sorted elements back into the original vector
    for (int i = low; i <= high; i++) {
        nums[i] = temp[i - low];
    }
}

// Recursive function to divide the array
void merge_sort(vector<int> &a, int low, int high) {
    // Base Case: if the range has 1 or 0 elements, it is already sorted
    if (low >= high) return;

    int mid = low + (high - low) / 2;

    merge_sort(a, low, mid);          // Sort left half
    merge_sort(a, mid + 1, high);     // Sort right half
    merge(a, low, mid, high);         // Merge the two halves
}

int main() {
    vector<int> a = {3, 2, 4, 1, 3};

    // Initial call: low = 0, high = index of last element
    merge_sort(a, 0, a.size() - 1);

    // Print the sorted result
    for (int x : a) {
        cout << x << " ";
    }
    return 0;
}