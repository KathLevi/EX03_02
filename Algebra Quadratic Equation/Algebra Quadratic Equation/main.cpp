//////////////////////////
//Name: Kathleen Levi
//
//Project: EX03_02 (9.6)
//
//Date: May 26, 2015
//////////////////////////

#include <iostream>
#include <cmath>
using namespace std;

class QuadraticEquation{
private:
    double a;
    double b;
    double c;
    
public:
    QuadraticEquation(double a, double b, double c)
    : a(a), b(b), c(c){}
    
    double getA(){
        return a;
    }
    double getB(){
        return b;
    }
    double getC(){
        return c;
    }
    
    double getDiscriminant(){
        double discriminant;
        discriminant = ((b*b) - (4*a*c));
        return discriminant;
    }
    double getRoot1(){
        double root1;
        if (getDiscriminant() < 0)
            return 0;
        else{
            root1 = (-b + sqrt(getDiscriminant()))/(2*a);
            
            return root1;
        }
    }
    double getRoot2(){
        double root2;
        if (getDiscriminant() < 0)
            return 0;
        else{
            root2 = (-b - sqrt(getDiscriminant()))/(2*a);
            
            return root2;
        }
    }
    
};

int main() {
    
    double a, b, c, discr;
    
    cout << "Enter values for a, b, and c." << endl;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;
    
    QuadraticEquation equation(a,b,c);
    discr = equation.getDiscriminant();
    
    if (discr < 0)
        cout << "The equation has no real roots." << endl;
    else if (discr == 0)
        cout << "The equation has one real root which is: " << equation.getRoot1() << endl;
    else if (discr > 0)
        cout << "The euqation has both roots which are: " << equation.getRoot1() << " and " << equation.getRoot2() << endl;
    
    
    
}