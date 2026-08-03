#include<iostream>
#include<string>
using namespace std;

class Teacher{
private:
 double Salary;

public:
 string name;
 string dept;
 string subject;
// non-parameterised cosntructor 
Teacher(){
    // automatically set ho ja e har bar jaja ke karna na pade 

    dept = "Electrical Engineering";
    // cout <<"Hi I am constructor\n"<<endl;
}
// Parameterised cosntructor
 Teacher(string name,string dept, string subject,double Salary)
 {
    
    this-> name = name;
    this->dept = dept;
    this->subject = subject;
    this->Salary = Salary;

 }
//  copy constructor 
Teacher(Teacher &orgobj)//pass y reference jo v origional constructor me changes hoga wo isme reflect karega 
{
    cout<<"I am a custom copy contructor"<<endl;
    this->name = orgobj.name;
    this->dept = orgobj.dept;
    this->subject = orgobj.subject;
    this->Salary = orgobj.Salary;

}

void getInfo()
{
    cout << "name: "<<name<<endl;
    cout << "subject : "<<subject<<endl;   
} 
//  methods member functions 
void changeDept(string newDept)
{
    dept = newDept;
}
void setSalary(double s)
{
    Salary = s;
}
double getSalary()
{
    return Salary;
}
};

// class Account{
//     private://data hiding concept 
//         double balance;
//     string password;//
//     public:
//     double balance;
//     string password;
//     string accoountId;
//     string username;
// }
int main(){
    Teacher t1("Ankit","ComputerScience","C++",25000);//constructor call 
    // t1.name = "Ankit";
    // // t1.dept = "EE";
    // t1.setSalary (25000),
    // cout <<t1.dept<<endl;
    // cout <<t1.getSalary()<<endl;
    // t1.getInfo();
    Teacher t2(t1);//default constructor invoke ho gya 
    t2.getInfo();
    return 0;
}