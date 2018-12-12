//
//  complex.cpp
//  uDator LAB5
//
//  Created by Carl Björk on 2018-12-10.
//  Copyright © 2018 Carl Björk. All rights reserved.
//

#include "complex.h"
#include<stdio.h>
#include<iostream>

using namespace std;


Complex::Complex () : real{0}, imag{0} {}


Complex::Complex(double re, double im) {
    
    real = re;
    imag = im;
}

double Complex::getReal(void) { //get the real part of the complex number

    return real;
}

double Complex::getImaginary(void) { //get the Imaginary part of the complex number

    return imag;
}

void Complex::setReal(double re) { //set the real part of the complex number
    
    real = re;
}

void Complex::setImaginary(double im) { //set the Imaginary part of the
    
    imag = im;
}

Complex Complex::operator+ (Complex& theComplex) {
    
    Complex temp;
    
    temp.real = real + theComplex.real;
    temp.imag = imag + theComplex.imag;
    
    return temp;
}
Complex Complex::operator-(Complex& theComplex) {
    
    Complex temp;
    
    temp.real = real - theComplex.real;
    temp.imag = imag - theComplex.imag;
    
    return temp;
    
}
Complex Complex::operator*(Complex& theComplex) {
    
    Complex temp;
    
    temp.real = real * theComplex.real - imag * theComplex.imag;
    temp.imag = imag * theComplex.imag + real * theComplex.real;
    
    return temp;
    
}
Complex Complex::operator/(Complex& theComplex) {
    
    Complex temp;
    
    temp.real = ((real * theComplex.real) + (imag * theComplex.imag)) * 1/((theComplex.real*theComplex.real)+(theComplex.imag*theComplex.imag));
    
    temp.imag = ((real * theComplex.imag) - (imag * theComplex.real)) * 1/((theComplex.real*theComplex.real)+(theComplex.imag*theComplex.imag));

    //    temp.real = real / theComplex.real;
//    temp.imag = imag / theComplex.imag;
    
    return temp;
    
}

