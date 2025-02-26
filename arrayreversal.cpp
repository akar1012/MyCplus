/*
@author Ashish Kar
This is a array reversal
*/
#include <iostream>
using namespace std;

int main()
{
    int swapper =0;
    int size = 10;
   int A[size]= {102, 33, 4,89, 42 ,5,21,2,9,8};
   for( int i=0; i< size/2; i++){
       swapper = A[i];
    A[i]= A[size-i-1];
    A[size-i-1] = swapper;
    
   }// end of outer loop
   
   

       for( int i=0; i<size; i++){
           cout<< A[i]<<",";
       }
    return 0;
}
