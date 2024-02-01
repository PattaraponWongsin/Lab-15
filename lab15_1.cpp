#include <iostream>
using namespace std;

int main(){
    int a = 5;
    char b = 'A';
    char &c = b;
    int *x = &a;
    char *y = &b;
    int **z= &x ;
    cout << a << " " << b << " " << c << " " << x << " " << y << " " << z << " " << endl; //แสดงค่า 
    cout << &a << " " << &b << " " << &c << " " << &x << " " << &y << " " << &z << " " << endl; //แสดง address
    c = 'F';
    cout << a << " " << b << " " << c << " " << x << " " << y << " " << z << " " << endl; //แสดงค่า 
    *y = 'W';
    cout << a << " " << b << " " << c << " " << x << " " << y << " " << z << " " << endl; //แสดงค่า 
    *x = 6 ;
    cout << a << " " << b << " " << c << " " << x << " " << y << " " << z << " " << endl; //แสดงค่า 
    **z = 7 ;
    cout << a << " " << b << " " << c << " " << x << " " << y << " " << z << " " << endl; //แสดงค่า 


	
	
	return 0;
}

