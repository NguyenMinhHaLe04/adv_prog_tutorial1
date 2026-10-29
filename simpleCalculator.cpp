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
    double a ;
    double b ;
    double res;
    string op;
    cout << "The value of a is: ";
    cin >> a;
    cout << "The value of b is: ";
    cin >> b;
    cout << "The operator is: ";
    cin >> op;
    if (op=="+"){
        res = sum(a,b);
    }
    else if (op=="-"){
        res = substract(a,b);
    }
    else if (op=="*"){
        res = multiply(a,b);
    }
    else if (op=="/"){
        res = divide(a,b);
    }
    else{
        cout << "Invalid Operator";
    }
    
    cout << res;

    // cout << 'hello' << endl; 
>>>>>>> 466378836affd0f77ac86cd5af8bf39d5aae6688
}