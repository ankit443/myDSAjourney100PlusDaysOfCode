// import java.util.*;


class tinyArray{

    public static void main(String[] args){

        int a[] = new int[5];
        for(int i = 0; i<5; i++){
            a[i] = i;

        }

        for(int i = 0; i<5;i++)
        System.out.println(a[i]);


    }
}

//Advantages of Arrays:
// We can access any element in the array in order of 1
// a[100]
// by making an array, it saves the need of defining mutliple variables
// if we want to sort an array, it's easier than other data structures

// Disadvantages of using Arrays:
// the size of Arrays is fixed
// when we deal with them realtime, we might not know the actual size, it becomes a bit of an issue
// if we have created an array of length 5, and we have stored just 3 elements, the remaining memory locations are wasted



