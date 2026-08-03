#include<iostream>
#include<string>
using namespace std;
class Student{
    public:
    string name;
    int rollno;
    // Person(string name, int age){
    //   this->name = name;
    //   this->age = age;
    // }  
};
// this class inherited public attributes
class Teacher {
    // public attributes + rollno
    public: 
    string subject;
    string salary;
    
};
// this class inherited student attributes
class TA :public Student, public Teacher {
    //student attributes + degree
    public:
    string degree;
};
int main(){
   TA s1;
   s1.name = "raju rastogi";
   s1.degree = "Applied chemistry";
   cout << s1.name << endl;
   cout << s1.degree << endl;
    return 0;


}