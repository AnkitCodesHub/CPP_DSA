#include<iostream>
#include<string>
using namespace std;
class Person{
    public:
    string name;
    int rollno;
    // Person(string name, int age){
    //   this->name = name;
    //   this->age = age;
    // }  
};
// this class inherited public attributes
class Teacher : public Person {
    // public attributes + rollno
    public: 
    string subject;
    string salary;
    
};
// this class inherited student attributes
class Student :public Person{
    //student attributes + degree
    public:
    string degree;
};
int main(){
   Teacher s1;
   s1.name = "raju rastogi";
//    s1.degree = "Applied chemistry";
   cout << s1.name << endl;
//    cout << s1.degree << endl;
    return 0;


}