<<<<<<< HEAD
#include <iostream>
using namespace std; 

int main()
{
    int a = 1;
    cout << a << endl; 
    return 0; 
=======
#include<iostream>
using namespace std;

double multiply(double a, double b){
    double c = a*b;
    return c;
}

double sum(double a, double b)
{
    return a + b; 
}

double substract(double a, double b)
{
    return a - b; 
}

int main(){
    double a = 3.0;
    double b = 4.0;
    double c = multiply(a,b);
    cout << c;

    cout << 'hello' << endl; 
>>>>>>> 466378836affd0f77ac86cd5af8bf39d5aae6688
}