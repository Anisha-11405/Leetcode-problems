#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int maxArea = 0;
        int l = 0, r = height.size() - 1;
        
        while (l < r) {
            maxArea = max(maxArea, (r - l) * min(height[l], height[r]));
            if (height[l] < height[r])
                l++;
            else
                r--;
        }
        
        return maxArea;
    }
};

int main() {
    Solution sol;
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};

    int max_area = sol.maxArea(height);
    cout << "Maximum water area: " << max_area << endl;

    return 0;
}
