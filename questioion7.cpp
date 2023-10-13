#include<iostream>
using namespace std ;
int main ()
{
    int a;
    a= 65 ;
    while (a<=90){
        cout << (char)a << "-" << a << endl;
        a = a+1 ;
    }
    return 0 ;
}