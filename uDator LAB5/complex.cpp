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


Complex::Complex () {
    
    cout << "SKICKA MED SIFFROR DIT MEHE" << endl;
    
}


Complex::Complex(double re, double im) {
    
    real = re;
    imag = im;
}

Complex::~Complex(){
    
//    skräp
    
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



int main () {
    
    
    Complex tal(34,1);
    
    
    
    return 0;
}
