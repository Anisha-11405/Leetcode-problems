#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int c = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                nums[c] = nums[i];
                c++;
            }
        }
        return c;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {3, 2, 2, 3, 4, 5, 3}; // Example input
    int val = 3;

    int newLength = sol.removeElement(nums, val);
    
    // Print the result
    cout << "New length: " << newLength << endl;
    cout << "Modified array: ";
    for (int i = 0; i < newLength; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
