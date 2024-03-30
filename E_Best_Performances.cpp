#include <iostream>
#include <vector>
#include <climits>

using namespace std;

// Node structure for the segment tree
struct Node
{
    int maxSum; // Maximum sum of elements in the range
};

// Function to build the segment tree
void updateSegmentTree(vector<Node> &tree, int node, int start, int end, int index, int value)
{
    if (start == end)
    {
        tree[node].maxSum = value;
        return;
    }

    int mid = (start + end) / 2;

    // Update value in the appropriate subtree
    if (index <= mid)
    {
        updateSegmentTree(tree, 2 * node, start, mid, index, value);
    }
    else
    {
        updateSegmentTree(tree, 2 * node + 1, mid + 1, end, index, value);
    }

    // Update parent node with the new maximum sum
    tree[node].maxSum = max(tree[node].maxSum, tree[2 * node].maxSum, tree[2 * node + 1].maxSum);
}

// Function to update a value in the segment tree
void updateSegmentTree(vector<Node> &tree, int node, int start, int end, int index, int value)
{
    if (start == end)
    {
        tree[node].maxSum = value;
        return;
    }

    int mid = (start + end) / 2;

    // Update value in the appropriate subtree
    if (index <= mid)
    {
        updateSegmentTree(tree, 2 * node, start, mid, index, value);
    }
    else
    {
        updateSegmentTree(tree, 2 * node + 1, mid + 1, end, index, value);
    }

    // Update parent node with the new maximum sum
    tree[node].maxSum = max(tree[2 * node].maxSum, tree[2 * node + 1].maxSum);
}

// Function to query the maximum k-element sum in the segment tree
int querySegmentTree(vector<Node> &tree, int node, int start, int end, int k)
{
    if (start == end || k == 0)
    {
        return 0;
    }

    if (tree[node].maxSum <= 0 || k >= end - start + 1)
    {
        return tree[node].maxSum;
    }

    int mid = (start + end) / 2;

    // Find the maximum k-element sum in the left and right subtrees
    int leftMaxSum = querySegmentTree(tree, 2 * node, start, mid, k);
    int rightMaxSum = querySegmentTree(tree, 2 * node + 1, mid + 1, end, k);

    return max(leftMaxSum, rightMaxSum);
}

int main()
{
    int n, k, q;
    cin >> n >> k >> q;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Build the segment tree
    int treeSize = 4 * n; // Sufficient size for most cases
    vector<Node> tree(treeSize);
    buildSegmentTree(arr, tree, 1, 0, n - 1);

    while (q--)
    {
        int index, value;
        cin >> index >> value;
        updateSegmentTree(tree, 1, 0, n - 1, index - 1, value);

        int maxKSum = querySegmentTree(tree, 1, 0, n - 1, k);
        cout << maxKSum << endl;
    }

    return 0;
}
