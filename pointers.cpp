#include<iostream>
#include<vector>
using namespace std;
int main(){
    float a = 30.29;
    float *ptr =&a;
    float **parPtr = &ptr;
    cout<<&ptr<<endl;
    cout <<parPtr << endl; 
    return 0;




}