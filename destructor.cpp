#include <iostream>
#include<string>
using namespace std;
class student{
public:
 string name;
 double* cgpaPtr;

 student(string name, double cgpa)
 {
    this->name = name;
    cgpaPtr = new double;
    *cgpaPtr = cgpa;
 }

//  destructor :- has the same name as the class 
~student()

{
    cout<<"Hi! i delete everything\n";
    delete cgpaPtr;//memory leak
}
 void getInfo(){
    cout <<"name: "<<name<<endl;
    cout<<"cgpa: "<<*cgpaPtr<<endl;
 }
};
int main(){
    student s1("Rahul Kumar",8.9);
    student s2(s1);
    s1.getInfo();
    s2.name ="neha";
    *(s2.cgpaPtr) = 9.2;
    s1.getInfo();
    s2.getInfo();
    return 0;
}