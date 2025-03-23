
#include <iostream>
using namespace std;

int main()
{
    int swapped ;
    int size = 7;
   int Ia[size]= {3,2,9,7,8,4,5};
  
   for (int i=0; i<size; i++){
       for(int j= 0; j<size-i-1; j++){
       if (Ia[j]>Ia[j+1]){
           swapped =Ia[j];
           Ia[j]=Ia[j+1];
           Ia[j+1]= swapped;
           
        }
       }
   }
   for (int i=0; i< size; i++){
       cout<< Ia[i] <<" , " ;
   }
   
   
   
    return 0;
}
