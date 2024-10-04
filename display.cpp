#include<iostream>
using namespace std;

int main()
{
    int a=10;
    int *ptr;
    ptr=&a;
    cout<<&a<<endl;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    return 0;
}

/*
OUTPUT: 
0x7ffec80f2884
0x7ffec80f2884
10
*/
