#include<iostream>
#include<string>
using namespace std;
class Student{
    public:
    string name;
    Student(){
        cout<<"non-parametrrised\n";
    }
    Student(string name){
        this->name = name;
        cout<<"parametrized\n";
    }

};
int main(){
  Student s1;
  
    return 0;


}