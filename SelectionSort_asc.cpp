
#include <iostream>
using namespace std;

int main()
{
    int minindex=0;
    int swapper= 0;
    int size = 7;
   int A[size]= {18, 42, 5 ,38,21,2,3};
   
   for( int i=0; i< size; i++){
    minindex = i;
       for (int k = i; k < size-1 ; k++){
       if (A [minindex]>A[k+1]){
           minindex = k+1;
       } // end of if loop
    
   }// end of inner loop
       swapper = A[i];
    A[i] = A[minindex];
    A[minindex] = swapper;
   }// end of outer loop
   
   

       for( int i=0; i<size; i++){
           cout<< A[i]<<",";
       }
    return 0;
}
