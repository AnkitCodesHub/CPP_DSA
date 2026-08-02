#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[] = {10,20,30,40,5,6,7,7,8};
    // int a  =10;
    // int* ptr2;
    // int* ptr1 = ptr2+2;
// int* ptr1;
// int* ptr2;
// cout <<ptr1<<endl;
// cout<<ptr2<<endl;
    // int *ptr = &a;
    // cout <<ptr<<endl;
    // ptr = ptr+2;
    // cout<<(ptr1 < ptr2)<<endl;//changes will occur in hexadecimal form  
    int *ptr = arr;
    cout <<*(ptr+1)<<endl;//dereference karne ke bad 2 print kar dega 
    cout<<*(ptr+3)<<endl;//ye dereference krke 4 print karega
    ptr++;
    cout<<*ptr<<endl;
    return 0;
}