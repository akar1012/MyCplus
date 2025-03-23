#include <iostream>
using namespace std; 
int comparestr ( char str1[], char str2[]);
int main()
{
    int size =6;
    int flag =0;
    char str1[size]= " name";
    char str2[size]= " name";
   flag = comparestr( str1,  str2);
cout<< flag ;
    return 0;
}
int comparestr ( char str1[], char str2[]){
int flag =0;
    int i= 0;
    while ( str1[i] || str2[i]){
    if( str1[i] == str2[i]){
       i++; 
    }
    else if ( str1[i]> str2[i]){
        flag =1;
        break;
    }
    else if ( str1[i] <str2[i] ){
        flag = -1;
        break;
    }
    }

    return flag;
}
