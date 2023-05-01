//given an array of unique integers salary, where salary[i] is the salary of the ith employee.
//to return the average salary of employees excluding the minimum and maximum salary.


import java.util.Scanner;




public class avgSalExcludeMinMax {

    public double average(int[] salary) {
        int minSalary=Integer.MAX_VALUE;
        int maxSalary=Integer.MIN_VALUE;
        int totalSalary =0;
        int numEmployees =0;

        for(int s: salary) {
            if(s<minSalary){
                minSalary=s;
            }
            if(s> maxSalary){
                maxSalary=s;
            }
            totalSalary+=s;
            numEmployees++;

        }

        totalSalary-= minSalary+ maxSalary;
        numEmployees-=2;

        return (double) totalSalary/numEmployees;
    }


    //driver code
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        


        sc.close();

    }
    
}
