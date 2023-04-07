public class setMatrixZeroOne {

    public void setZeroes(int[][] matrix){

        int col0=1, rows =matrix.length, cols=matrix[0].length;

        //outer Loop for implementing the Nested Loop
        for(int i=0;i<rows; i++){
            if(matrix[i][0]==0) col0=0;
        }


    }
    
}
