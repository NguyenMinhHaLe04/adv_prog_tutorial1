
#include <iostream>
using namespace std; 


double multiply(double a, double b){
    double c = a*b;
    return c;
}

double divide(double a, double b){
    if (b!=0){
        double c = a/b;
        return c;
    }
    else{
        // double c=0;
    }
    
}

double sum(double a, double b)
{
    return a + b; 
}

double substract(double a, double b)
{
    return a - b; 
}

double mean(double a, double b)
{
    return (a + b)/2; 
}

int main(){
    double a = 3.0;
    double b = 4.0;
    double c = multiply(a,b);
    double d = divide (a,b);
    cout << c;
    cout << d;

    // cout << 'hello' << endl; 
}