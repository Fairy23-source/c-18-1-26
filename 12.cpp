#include<iostream>
using namespace std;
//using concept of pointers in this program
int main () {
    int a=3;
    int *b=&a;
    cout<<b<<endl;//for finding add & is used
    cout<<"the value at b is"<<*b<<endl;//to find value * is used
    return 0;
}