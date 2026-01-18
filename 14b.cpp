#include<iostream>
using namespace std;
//helps for memory management and gives higest value of memory out of three
union money
{
    int rice;
    char car;
    float pounds;
};
int main (){
    union money m1;
    m1.rice=2;
    cout<<m1.rice<<endl;
    

    return 0;
}