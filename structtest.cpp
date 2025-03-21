#include <iostream>
using namespace std;

struct Student {
    char name;
    int age;
    double testScore;
};

void sortStudentsByAge(Student students[], int size);

int main() {
    int numStudents = 5;

    Student students[numStudents] = {
        {'Ashish', 20, 85.5},
        {'Biranchi', 22, 78.0},
        {'Cathy', 69, 92.0},
        {'Dumbo', 21, 81.8},
        {'Exash12', 10, 88.5}
    };
    sortStudentsByAge(students, numStudents);

  cout << "Students sorted by age:";
    for (int i = 0; i < numStudents; ++i) {
        cout << "Student " << students[i].name << ": Age " << students[i].age
                  << ", Test Score " << students[i].testScore << endl;
    }

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
}
/* #include <iostream>
#include <fstream>
using namespace std;

struct Student {
    char name[8];
    int age;
    double testScore;
};

void sortStudentsByAge(Student students[], int size);

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
       // cout << "Student " << students[i].name << ": Age " << students[i].age
            //     << ", Test Score " << students[i].testScore << endl;
                  i++;
    }
    
    
    cout<<i;
    numStudents = i;
    
 sortStudentsByAge(students, numStudents);

  cout << "Students sorted by age:";
    for (int i = 0; i < numStudents; ++i) {
        cout << "Student " << students[i].name << ": Age " << students[i].age
                  << ", Test Score " << students[i].testScore << endl;
    }
    
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
}

/* void sortStudentsByName(Student students[], int size){
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
}*/
*/
