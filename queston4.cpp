#include<iostream>
using namespace std ;
int main ()
{
    int n ;
    cout << "enter the table number ";
    cin >> n;
    for (int i=1;i<=10;i++){
        cout << i*n << endl ;
    }
    return 0;
}