import java.util.Scanner;

public class minOppsMakeArrayIncreasing {

    public int minOperations(int[] nums){
        int minimum_operations=0;
        for(int i=0; i<nums.length; i++){
            minimum_operations += Math.max(nums[i-1]+1, nums[i] - nums[i]);
            nums[i] = Math.max(nums[i-1]+1, nums[i]);

        }

        return minimum_operations;
    }

    //driver code
    public static void main(String[] args){

        Scanner sc = new Scanner(System.in);

        //enter the size of nums
        int s = sc.nextInt();

        int[] arr1 = new int[s];

        //loop for getting elements in array
        for (int i=0; i<arr1.length; i++){
            arr1[i] = sc.nextInt();
        }





        sc.close();

    }
    
}
