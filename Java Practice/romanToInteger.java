import java.util.Scanner;

public class romanToInteger {

    public int romanToInt(String s) {
        int nums[] = new int[s.length()];

        for (int i = 0; i < s.length(); i++) {
            switch (s.charAt(i)) {
                case 'M':
                    nums[i] = 1000;
                    break;
                case 'D':
                    nums[i] = 500;
                    break;
                case 'C':
                    nums[i] = 100;
                    break;
                case 'L':
                    nums[i] = 50;
                    break;
                case 'X':
                    nums[i] = 10;
                    break;
                case 'V':
                    nums[i] = 5;
                case 'I':
                    nums[i] = 1;
                    break;

            }
        }

        int sum=0;
        for(int i=0; i<nums.length-1; i++){
            if(nums[i] < nums[i+1]){
                sum -= nums[i];
            }
            else{
                sum += nums[i];
            }

        }

        return sum + nums[nums.length-1];



    }

    public static void main(String[] args) {

        // given an roman numeral, convert it to an integer

        //enter user input string
        System.out.println("Please enter the Roman Numerical value here: ");
        


        Scanner sc = new Scanner(System.in);

        String input = sc.next();


        sc.close();
    }

}
