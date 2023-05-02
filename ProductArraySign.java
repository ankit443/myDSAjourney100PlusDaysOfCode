import java.util.*;

class Solution {
    public int arraySign(int[] nums) {
      var sign = 1;
  
      for (var n : nums) {
        if (n == 0) return 0;
        sign *= n > 0 ? 1 : -1;
      }
      return sign;
    }
  }


public class ProductArraySign {

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        //function sign function is to be made
        // 1 if x is positive, -1 if x is negative, 0 if x is equal to 0

        //given an integer array nums, let product be the product of all the values in the array nums
        //return signFunc(product)

        Solution solOne = new Solution();

        int n = sc.nextInt();
        int[] arr = new int[n];

        for(int i=0; i<n; i++){
            arr[i] = sc.nextInt();

        }

        solOne.arraySign(arr);



        sc.close();
    }





    
}
