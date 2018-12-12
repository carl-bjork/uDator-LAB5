
#include"complex.h"
#include<iostream>
#include<iomanip> 

using namespace std;


int main () {
    
    Complex a(7,5);
    Complex b(3,6);
    
    Complex d;
    Complex f;
    Complex g;
    Complex h;
    
    d = a+b;
    f = a-b;
    g = a*b;
    h = a/b;
    
    cout << endl << endl;
    cout << "Addition. " << d.getReal() << "+" << d.getImaginary() << "i" << endl;
    cout << "Subtraktion: " <<  f.getReal() << "+" << f.getImaginary() << "i" << endl;
    cout << "Multiplikation: " << g.getReal() << "+" << g.getImaginary() << "i" << endl;
    cout << "Division: " << h.getReal() << "+" << h.getImaginary() << "i" << endl;
    
    return 0;
}
