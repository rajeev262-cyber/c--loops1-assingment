#include<iostream>
using namespace std ;
int main ()
{
    int n;
    cout << "enter th nth term ";
    cin >> n;
    int a = 3 ;
    for (int i=1;i<=n;i++){
        cout << a << endl ;
        a = a*4 ;
    }
    return 0 ;
}