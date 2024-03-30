#include <iostream>
#include <vector>

using namespace std;

// Function to compute bitwise AND of two numbers
int bitwiseAnd(int a, int b) {
    return a & b;
}

// Function to build the segment tree
void build(vector<int>& segment_tree, vector<int>& arr, int node, int start, int end) {
    if (start == end) {
        segment_tree[node] = arr[start];
    } else {
        int mid = (start + end) / 2;
        build(segment_tree, arr, 2 * node + 1, start, mid);
        build(segment_tree, arr, 2 * node + 2, mid + 1, end);
        segment_tree[node] = bitwiseAnd(segment_tree[2 * node + 1], segment_tree[2 * node + 2]);
    }
}

// Function to query the maximum index 'r' satisfying the condition
int query(vector<int>& segment_tree, vector<int>& arr, int node, int start, int end, int l, int r, int k) {
    if (start > r || end < l) {
        return -1; // No overlap with the query range
    }

    if (start >= l && end <= r) {
        if (segment_tree[node] < k) {
            return -1; // Bitwise AND in this segment is less than 'k'
        }

        // Binary search for maximum 'r' satisfying the condition
        while (start != end) {
            int mid = (start + end) / 2;
            if (bitwiseAnd(segment_tree[2 * node + 2], k) >= k) {
                // If AND with right child is greater or equal to 'k', move right
                node = 2 * node + 2;
                start = mid + 1;
            } else {
                // Otherwise, move left
                node = 2 * node + 1;
                end = mid;
            }
        }
        return start;
    }

    int mid = (start + end) / 2;
    int left_result = query(segment_tree, arr, 2 * node + 1, start, mid, l, r, k);
    int right_result = query(segment_tree, arr, 2 * node + 2, mid + 1, end, l, r, k);

    // Return the maximum result from both subtrees
    return max(left_result, right_result);
}

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n, q;
        cin >> n >> q; // Input size of array and number of queries

        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i]; // Input array elements
        }

        // Build the segment tree
        vector<int> segment_tree(4 * n); // Assuming a maximum of 4*n nodes
        build(segment_tree, arr, 0, 0, n - 1);

        while (q--) {
            int l, k;
            cin >> l >> k; // Input query parameters

            // Query for the maximum 'r' satisfying the condition
            int r = query(segment_tree, arr, 0, 0, n - 1, l - 1, n - 1, k);

            cout << r << endl; // Output the result
        }
    }
}
