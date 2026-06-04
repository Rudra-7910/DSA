#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int sum(vector<int> &a) {
        int sum = 0;
        for(int i = 0; i < a.size(); i++) {
            sum = sum + a[i];
        }
        return sum;
    }
    
    int maxii(vector<int> &a) {
        int maxi = a[0];
        for(int i = 0; i < a.size(); i++) {
            if(a[i] > maxi) {
                maxi = a[i];
            }
        }
        return maxi;
    }
    
    int checker(vector<int> &a, int assumption) {
        int day = 1;
        int load = 0;
        for(int i = 0; i < a.size(); i++) {
            if(load + a[i] > assumption) {
                day = day + 1;
                load = a[i];
            }
            else {
                load = load + a[i];
            }
        }
        return day;
    }
    
    int binary_search(vector<int> &a, int required) {
        int low = maxii(a);
        int high = sum(a);
        int ans = 0;
        while(low <= high) {
            int mid = (low + high) / 2;
            int days = checker(a, mid);
            if(days > required) {
                low = mid + 1;
            }
            else {
                ans = mid;
                high = mid - 1;
            }
        }
        return ans;
    }
    
    int shipWithinDays(vector<int>& weights, int days) {
        return binary_search(weights, days);
    }
};

int main() {
    Solution sol;
    
    // Test Case 1
    vector<int> weights1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int days1 = 5;
    cout << "Test Case 1:" << endl;
    cout << "Weights: [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]" << endl;
    cout << "Days: " << days1 << endl;
    cout << "Minimum capacity: " << sol.shipWithinDays(weights1, days1) << endl;
    cout << endl;
    
    // Test Case 2
    vector<int> weights2 = {3, 2, 2, 4, 1, 4};
    int days2 = 3;
    cout << "Test Case 2:" << endl;
    cout << "Weights: [3, 2, 2, 4, 1, 4]" << endl;
    cout << "Days: " << days2 << endl;
    cout << "Minimum capacity: " << sol.shipWithinDays(weights2, days2) << endl;
    cout << endl;
    
    // Test Case 3
    vector<int> weights3 = {1, 2, 3, 1, 1};
    int days3 = 4;
    cout << "Test Case 3:" << endl;
    cout << "Weights: [1, 2, 3, 1, 1]" << endl;
    cout << "Days: " << days3 << endl;
    cout << "Minimum capacity: " << sol.shipWithinDays(weights3, days3) << endl;
    
    return 0;
}