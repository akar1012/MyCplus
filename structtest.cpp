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
