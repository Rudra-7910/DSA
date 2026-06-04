#include <bits/stdc++.h>
using namespace std;
class MinStack {
    stack<long long> st;
    long long minVal;

public:
    void push(int val) {
        if (st.empty()) {
            st.push(val);
            minVal = val;
        } 
        else if (val >= minVal) {
            st.push(val);
        } 
        else {
            st.push(2* val - minVal);
            minVal = val;
        }
    }

    void pop() {
        if (st.empty()) return;

        long long top = st.top();
        st.pop();

        if (top < minVal) {
            minVal = 2* minVal - top;
        }
    }

    int top() {
        long long top = st.top();

        if (top >= minVal) return top;
        else return minVal;
    }

    int getMin() {
        return minVal;
    }
};
int main() {
    MinStack st;

    st.push(12);
    st.push(15);
    st.push(10);

    cout << "Current Min: " << st.getMin() << endl;  // 10

    st.pop();

    cout << "Top Element: " << st.top() << endl;     // 15
    cout << "Current Min: " << st.getMin() << endl;  // 12

    st.push(8);

    cout << "Top Element: " << st.top() << endl;     // 8
    cout << "Current Min: " << st.getMin() << endl;  // 8

    return 0;
}