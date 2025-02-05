package Problem0;

import java.util.Arrays;
import java.util.Scanner;

public class Problem1 {
    public int[] twoSum(int[] nums, int target) {
        int n = nums.length;
        int[] ans = new int[2];

        for(int i=0; i<n; i++) {
            int f = nums[i];
            for(int j=i+1; j<n; j++) {
                int sum = f+nums[j];
                if (sum==target) {
                    ans[0] = i;
                    ans[1] = j;
                    break;
                }
            }
        }
        return ans;

    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter the number of elements in the array:");
        int n = scanner.nextInt();
        int[] nums = new int[n];

        System.out.println("Enter the elements in the array:");
        for (int i = 0; i < n; i++) {
            nums[i] = scanner.nextInt();
        }

        System.out.println("Enter the target sum:");
        int target = scanner.nextInt();

        // Call the twoSum method
        long startTime = System.nanoTime();
        Problem1 solution = new Problem1();
        int[] result = solution.twoSum(nums, target);
        long endTime = System.nanoTime();

        // Print the result
        System.out.println("Indices of the two numbers: " + Arrays.toString(result) + "\n The time taken is: " + (endTime-startTime));
    }
}

