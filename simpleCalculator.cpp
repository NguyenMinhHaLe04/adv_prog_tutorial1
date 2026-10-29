#include<iostream>
using namespace std;

double multiply(double a, double b){
    double c = a*b;
    return c;
}

int main(){
    double a = 3.0;
    double b = 4.0;
    double c = multiply(a,b);
    cout << c;
}