#include <iostream>
#include<vector>
using namespace std;

int main ()
{
    int a = 10;
    int *ptr =&a;//assign 1 varaiable to another variable

    cout<<ptr<<endl;// same out put as as &a
    cout<<&a<<endl;
    cout<<&ptr<<endl;

    return 0;
}
