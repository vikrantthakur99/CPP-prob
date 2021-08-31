class Solution{
  public:
    void swapElements(int arr[], int sizeof_array){
        
        // Your code here
        int i,temp;
        for(i=0;i<sizeof_array-2;i++)
        {
       temp=arr[i];
       arr[i]=arr[i+2];
       arr[i+2]=temp;
        }
        
       // return arr[i];
    }
};