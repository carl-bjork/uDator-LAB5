//
//  complex.h
//  uDator LAB5
//
//  Created by Carl Björk on 2018-12-10.
//  Copyright © 2018 Carl Björk. All rights reserved.
//

#ifndef _COMPLEXH
#define _COMPLEXH
#include<iostream>
class Complex {
public:
    Complex(); //Prototype. You should define this constructor.
    Complex(double re, double im); //Prototype. You should define this constructor.
    ~Complex(); //Prototype. You should define this destructor.
    double getReal(void); //get the real part of the complex number
    double getImaginary(void); //get the Imaginary part of the complex number
    void setReal(double re);//set the real part of the complex number
    void setImaginary(double im); //set the Imaginary part of the complex number
    //overwrite the operators for complex numbers
    Complex operator+(Complex& theComplex);
    Complex operator-(Complex& theComplex);
    Complex operator*(Complex& theComplex);
    Complex operator/(Complex& theComplex);
private:
    double real;
    double imag;
};
#endif
