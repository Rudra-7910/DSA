#include <bits/stdc++.h>
using namespace std;
class node {
public:
    int data;
    node* left;
    node* right;

    node(int val) {
        data = val;
        left = right = NULL;
    }
};
void dfs(node* root, string current, vector<string>& result) {
    if (root == NULL) return;

    current += to_string(root->data);

    if (root->left == NULL && root->right == NULL) {
        result.push_back(current);
        return;
    }

    current += "->";

    dfs(root->left, current, result);
    dfs(root->right, current, result);
}

vector<string> binaryTreePaths(node* root) {
    vector<string> result;
    dfs(root, "", result);
    return result;
}