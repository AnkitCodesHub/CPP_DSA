#include <iostream>
#include <vector>
using namespace std;
// void changea(int* ptr)//pass by reference using pointers (alias)
void changea(int &b)//alas
{
    // goes to the address and change the value 
    b = 20;
}
int main()
{
    int a = 5;
    changea(a);
    cout << "inside main fnx: " << a << endl;
    // int *p = &a;
    // int **q = &p;
    // cout<<*p<<endl;
    // cout<<**q<<endl;
    // cout<<p<<endl;
    // cout<<*q<<endl;
    // int **ptr = NULL;
    // cout<<ptr<<endl;
    // return 0;
    // float a = 30.29;
    // float *ptr =&a;
    // float **parPtr = &ptr;
    // float **parPtr = &ptr;
    // cout<<&ptr<<endl;
    // cout <<parPtr << endl;
    // a ke address pe jaega fir uske undar jo value store d hai wo lake de dega

    // cout<<*(&a)<<endl;
    return 0;
}