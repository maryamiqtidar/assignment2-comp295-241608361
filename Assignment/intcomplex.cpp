#include "intcomplex.h"
#include <iostream>

using namespace std;

//defining constructor
IntComplex::IntComplex(int r, int i) : real(r), imaginary(i) {}

//defining all operators accordingly
IntComplex IntComplex::operator+(const IntComplex & c) const
    {
    	IntComplex temp;
    	temp.real = real + c.real;
    	temp.imaginary = imaginary + c.imaginary;
    	return temp;
    }
    
IntComplex IntComplex::operator-(const IntComplex & c) const
    {
    	IntComplex temp;
    	temp.real = real - c.real;
    	temp.imaginary = imaginary - c.imaginary;
    	return temp;
    }
    
IntComplex IntComplex::operator*(const IntComplex & c) const
    {
    	IntComplex temp;
    	temp.real = (real*c.real) - (imaginary*c.imaginary);
    	temp.imaginary = (real*c.imaginary) + (imaginary*c.real);
    	return temp;
    }
    
IntComplex IntComplex::operator/(const IntComplex & c) const
    {
    	IntComplex temp;
    	temp.real = ((real*c.real) + (imaginary*c.imaginary)) / ((c.real*c.real) + (c.imaginary*c.imaginary));
    	temp.imaginary = ((imaginary*c.real)-(real*c.imaginary)) / ((c.real*c.real) + (c.imaginary*c.imaginary));
    	return temp;
    }
    
    
//prinitng the output of operators:
void IntComplex::outputsum(){
        cout << "\nSum of complex numbers: " << real << " + " << imaginary <<"i" << endl;
    }
    
void IntComplex::outputsub(){
        cout << "Subtraction of complex numbers: " << real << " + " << imaginary <<"i" << endl;
    }
    
void IntComplex::outputmul(){
        cout << "Multiplication of complex numbers: " << real << " + " << imaginary <<"i" << endl;
    }
    
void IntComplex::outputdiv(){
        cout << "Division of complex numbers: " << real << " + " << imaginary <<"i" << endl;
    }

