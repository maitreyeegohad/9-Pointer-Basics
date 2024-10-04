#include<iostream>
using namespace std;

int main()
{
    int a=10;
    int *ptr;
    ptr=&a;
    cout<<"Before Increment: "<<ptr<<endl;
    ptr++;
    cout<<"After Increment: "<<ptr<<endl;
    return 0;
}

/*
OUTPUT: 
Before Increment: 0x7ffe5d391874
After Increment: 0x7ffe5d391878
*/
