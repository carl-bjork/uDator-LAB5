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
int meme = 0;

Complex::Complex () {
    
    if (meme==0) {
        cout << "I wanna be Tracer" << endl;
        meme++;
    }
    else if (meme == 1) {
        cout << "Im already Tracer" << endl;
        meme++;
    }
    else if (meme == 2) {
        cout << "What about Widowmaker?" << endl;
        meme++;
    }
    else if (meme == 3) {
        cout << "Im already Widowmaker..." << endl;
        meme++;
    }
    else if (meme == 4) {
        cout << "Ill be Bastion?" << endl;
        meme++;
    }
    else if (meme == 5) {
        cout << "Nerf Bastion >:C" << endl;
        meme++;
    }
    else if (meme == 6) {
        cout << "You're right, so Winston." << endl;
        meme++;
    }
    else if (meme == 7) {
        cout << "I wanna be Winston" << endl;
        meme++;
    }
    else{
        cout << "dö" << endl;
    }
        
    
    
    
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
    
    temp.real = real * theComplex.real;
    temp.imag = imag * theComplex.imag;
    
    return temp;
    
}
Complex Complex::operator/(Complex& theComplex) {
    
    Complex temp;
    
    temp.real = real / theComplex.real;
    temp.imag = imag / theComplex.imag;
    
    return temp;
    
}

int main () {
    
    
    Complex a(5,5);
    Complex b(2,2);
    
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
