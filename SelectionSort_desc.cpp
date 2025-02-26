/*
@author Ashish Kar
This is a selection sort , in descending order
using 2 for loops and swaps examples
*/
#include <iostream>
using namespace std;

int main()
{
    int maxindex=0;
    int swapper= 0;
    int size = 6;
   int A[size]= {89, 42, 53 ,5,21,2};
   
   for( int i=0; i< size; i++){
    maxindex = i;
       for (int k = i; k < size-1 ; k++){
       if (A[maxindex]<A[k+1]){
           maxindex = k+1;
       } // end of if loop
    
   }// end of inner loop
       swapper = A[i];
    A[i] = A[maxindex];
    A[maxindex] = swapper;
   }// end of outer loop
   
   

       for( int i=0; i<size; i++){
           cout<< A[i]<<",";
       }
    return 0;
}
