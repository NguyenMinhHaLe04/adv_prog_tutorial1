<<<<<<< HEAD
#include <iostream>
using namespace std; 


=======
#include<iostream>
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

int main(){
    double a = 3.0;
    double b = 4.0;
    double c = multiply(a,b);
    double d = divide (a,b);
    cout << c;
    cout << d;

    // cout << 'hello' << endl; 
>>>>>>> 466378836affd0f77ac86cd5af8bf39d5aae6688
}