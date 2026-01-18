#include<iostream>
using namespace std;
struct employee
{
    int eid;
    char name;
    float salary;
};
int main (){
    struct employee fairy;
    fairy.eid=1;
    fairy.name ='p';
    fairy.salary=5600000000;
    cout<<fairy.eid<<endl;
    cout<<fairy.name<<endl;
    cout<<fairy.salary<<endl;
    return 0;
}