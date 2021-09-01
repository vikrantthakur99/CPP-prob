class Solution{
    public:
    /*Function to count zeros in each column
    * N : Number of rows and columns in array
    M is the matrix that is globally declared
    */
    int columnWithMaxZeros(vector<vector<int>>arr,int N){
        
        // Your code here   // Your code here
     int max = 0,count = 0,store=0;
//int M;
    for (int i = 0; i< N;i++)
    {
        count = 0;
        for (int j =0; j< N ; j++)
        {
            if (arr[j][i] == 0){
                count++;
            }
        }
        if (count >max)
        {
            max = count;
            store = i;
        }
    }
    return store;    
}   
};