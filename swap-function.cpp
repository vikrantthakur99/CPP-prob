// Function to swap A and B
// using pointers
void swap(int *A, int *B){
   int temp = *A;
    *A = *B;
     *B = temp;
    // Your code here
    
}

// Function to swap A and B
// using reference
void swap(int &A, int &B){
  
    // Your code here
          int temp = A;
    A = B;
    B = temp;
  
}
