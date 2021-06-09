#include <iostream>
using namespace std ;

void swapnum(int a , int b)
{
    int c ;
    cout << "before swapping \na=" << a << "\nb=" << b ;
        
        c = a ;
        a = b ;
        b = c ;
    
    cout << "\nafter swapping \na=" << a << "\nb=" << b ;
}

int main ()
{
    int a , b ;
    cout << "enter two num:" ;
    cin >> a >> b ;
    swapnum(a,b) ;

}