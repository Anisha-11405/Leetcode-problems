#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] >= target) {
                return i;
            }
        }
        return nums.size();
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 3, 5, 6}; // Example input
    int target = 5;

    int index = sol.searchInsert(nums, target);
    
    // Print the result
    cout << "Insert position: " << index << endl;

    return 0;
}
