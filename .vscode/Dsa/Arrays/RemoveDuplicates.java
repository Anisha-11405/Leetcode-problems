

class Solution {
    public int removeDuplicates(int[] nums) {
        int c = 1;
        int n = nums.length;
        for (int i = 1; i < n; i++) {
            if (nums[i] != nums[i - 1]) {
                nums[c] = nums[i];
                c++;
            }
        }
        return c;
    }
}

public class RemoveDuplicates {
    public static void main(String[] args) {
        Solution sol = new Solution();
        int[] nums = {1, 1, 2, 2, 3, 4, 4, 5}; // Example input

        int newLength = sol.removeDuplicates(nums);
        
        // Print the result
        System.out.println("New length: " + newLength);
        System.out.print("Modified array: ");
        for (int i = 0; i < newLength; i++) {
            System.out.print(nums[i] + " ");
        }
        System.out.println();
    }
}
