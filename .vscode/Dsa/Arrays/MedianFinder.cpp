#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        vector<int> merged;

        for (int i = 0; i < m; i++) {
            merged.push_back(nums1[i]);
        }
        for (int i = 0; i < n; i++) {
            merged.push_back(nums2[i]);
        }

        sort(merged.begin(), merged.end());
        int x = merged.size();

        if (x % 2 == 1) {
            return static_cast<double>(merged[x / 2]);
        } else {
            return static_cast<double>((merged[x / 2 - 1] + merged[x / 2]) / 2.0);
        }
    }
};

int main() {
    Solution sol;
    vector<int> nums1 = {1, 3};
    vector<int> nums2 = {2};

    double median = sol.findMedianSortedArrays(nums1, nums2);
    cout << "Median: " << median << endl;

    return 0;
}
