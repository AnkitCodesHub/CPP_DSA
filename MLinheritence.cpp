#include<iostream>
#include<string>
using namespace std;
class Person{
    public:
    string name;
    int age;
    // Person(string name, int age){
    //   this->name = name;
    //   this->age = age;
    // }  
};
// this class inherited public attributes
class Student : public Person{
    // public attributes + rollno
    public: 
    int rollno;
 
    void getInfo(){
        cout <<"name: "<<name<<endl;
        cout<<"age: "<<age<<endl;
        cout<<"rollno: "<<rollno<<endl;
    }
};
// this class inherited student attributes
class GradStudent :public Student {
    //student attributes + degree
    public:
    string degree;
};
int main(){
   GradStudent s1;
   s1.name = "raju rastogi";
   s1.degree = "Applied chemistry";
   cout << s1.name << endl;
   cout << s1.degree << endl;
    return 0;


}