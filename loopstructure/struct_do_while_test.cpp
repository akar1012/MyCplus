 #include <iostream>
#include <fstream>
using namespace std;

struct Student {
    char name[8];
    int age;
    double testScore;
};

void sortStudentsByAge(Student students[], int size);
void sortStudentsByName(Student students[], int size);
void display(Student students[], int size);

int main() {
    ifstream inputFile("data.txt");
    
if( inputFile.is_open()==false){
               cerr<<"error in opening data.txt";
        return 1;
    }
    
   int numStudents = 20;

    Student students[20] ;
    int i=0;
    
 //int datacount populate_student_data(ifstream myfile,Student students[] )  
 while(inputFile >> students[i].name >> students[i].age >> students[i].testScore)
   
    {
     //   cout << "Student " << students[i].name << ": Age " << students[i].age
      //           << ", Test Score " << students[i].testScore << endl;
                  i++;
    }
    
    
 //   cout<<i<< endl;
    numStudents = i;
    int size;
    int choice = 0;
    int number =0 ;
  
    
 //   cout<< " enter your choice, 0 ( namesort) or 1 (agesort); ";
 //   cin>> choice;
 /*   if ( choice == 0){
         cout << "Students sorted by Name "<< endl;
        sortStudentsByName( students, size);
       
    }
   if (choice ==1){
         cout << "Students sorted by Age "<< endl;
 sortStudentsByAge(students, numStudents);
}
*/
 do{
      cout<< "number:1 sort by name, 2 sort by age, 3 to exit ";
      cin>>number; 
      if(number==1){
          cout<<"here you go, sorted by name"<<endl;
          sortStudentsByName( students, size);
            display(students, numStudents);
      }
     else if(number==2){
          cout<<"here you go, sorted by age"<<endl;
          sortStudentsByAge(students, numStudents);
            display(students, numStudents);
      }
      else cout<<"thank you , come again";
   }    while(number!=3);

  
    
inputFile.close();
    return 0;
}
void sortStudentsByAge(Student students[], int size){
    Student temp; 
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (students[j].age > students[j + 1].age) {
             
                 temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
    return;
}

 void sortStudentsByName(Student students[], int size){
    Student temp; 
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (students[j].name > students[j + 1].name) {
             
                 temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
    return;
}
void display(Student students[], int numStudents){
    for (int i = 0; i < numStudents; ++i) {
        cout << "Student " << students[i].name << ": Age " << students[i].age
                  << ", Test Score " << students[i].testScore << endl;
    }
    return;
}
