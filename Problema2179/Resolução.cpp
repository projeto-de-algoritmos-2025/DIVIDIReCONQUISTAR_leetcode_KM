#include <vector>

using namespace std;

class BIT {
    vector<int> tree;
    int n;

public:
    BIT(int size) {
        n = size;
        tree.resize(n + 1, 0);
    }

    void update(int index, int delta) {
        index++; 
        while (index <= n) {
            tree[index] += delta;
            index += index & (-index);
        }
    }

    int query(int index) {
        index++; 
        int sum = 0;
        while (index > 0) {
            sum += tree[index];
            index -= index & (-index);
        }
        return sum;
    }
};

class Solution {
public:
    long long goodTriplets(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        
        vector<int> pos2(n);
        for (int i = 0; i < n; ++i) {
            pos2[nums2[i]] = i;
        }

        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            arr[i] = pos2[nums1[i]];
        }

        vector<long long> left_smaller(n);
        BIT bit_left(n);
        for (int i = 0; i < n; ++i) {
            left_smaller[i] = bit_left.query(arr[i] - 1);
            bit_left.update(arr[i], 1);
        }

        vector<long long> right_larger(n);
        BIT bit_right(n);
        for (int i = n - 1; i >= 0; --i) {
            right_larger[i] = bit_right.query(n - 1) - bit_right.query(arr[i]);
            bit_right.update(arr[i], 1);
        }

        long long total_triplets = 0;
        for (int i = 0; i < n; ++i) {
            total_triplets += left_smaller[i] * right_larger[i];
        }

        return total_triplets;
    }
};
