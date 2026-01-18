#include<iostream>
using namespace std;
int main () {
    int i;
    int marks[5]={22,34,56,78,34};
    
    cout<<marks[0];
    cout<<marks[1];
    cout<<marks[2];
    cout<<marks[3];
    cout<<marks[4];
int *p=marks;
cout<<*p;
cout<<*(p+1);
cout<<*(p+2);
cout<<*(p+3);
cout<<*(p+4);
//using of pointer in array

    return 0;
    

}