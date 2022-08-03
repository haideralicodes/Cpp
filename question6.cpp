#include <iostream>
using namespace std;

struct Student{
    string name;        
    int regNo;       //The student structure
    char grade;
    int age;
    string gender;
};

int main(){
    Student s1, s2;     //making objects for student structure/class
    cout<< "Enter name of student 1: ";
    cin>> s1.name;
    
    string s1;
    cout<<"Do you want to change the name of student 1 (Y/N)";
    cin>>s1;
    if(s1.equals('Y')){
    cin>> s1.name;
    }

    cout<< "Enter registration Number of student 1: ";
    cin>> s1.regNo;

    cout<< "Enter grade of student 1: ";
    cin>> s1.grade;

    cout<< "Enter age of student 1: ";
    cin>> s1.age;
    
    cout<< "Enter gender of student 1: ";
    cin>> s1.gender;

    cout<< "Enter name of student 2: ";
    cin>> s2.name;

    cout<< "Enter registration Number of student 2: ";
    cin>> s2.regNo;

    cout<< "Enter grade of student 2: ";
    cin>> s2.grade;

    cout<< "Enter age of student 2: ";
    cin>> s2.age;
    
    cout<< "Enter gender of student 2: ";
    cin>> s2.gender;
    
    //printing the details

    cout<< "The name of student 1 is: " << s1.name << endl;
    cout<< "The registration Number of student 1 is: " << s1.regNo << endl;;
    cout<< "The age of student 1 is: " << s1.age << endl;
    cout<< "The grade of student 1 is: " << s1.grade << endl;
    cout<< "The gender of student 1 is: "<< s1.gender << endl;

    cout<< "The name of student 2 is: " << s2.name << endl;
    cout<< "The registration Number of student 2 is: " << s2.regNo << endl;
    cout<< "The age of student 2 is: " << s2.age << endl;
    cout<< "The grade of student 2 is: " << s2.grade << endl;
    cout<< "The gender of student 2 is: "<< s2.gender << endl;

    return 0;
}
