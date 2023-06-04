#include "floatcomplex.h"
#include <iostream>
#include <iomanip>

using namespace std;
//definig constructor
FloatComplex::FloatComplex(float r, float i) : real(r), imaginary(i) {}

//float operators 
FloatComplex FloatComplex::operator+(const FloatComplex & c) const
    {
    	FloatComplex temp;
    	temp.real = real + c.real;
    	temp.imaginary = imaginary + c.imaginary;
    	return temp;
    }
    
FloatComplex FloatComplex::operator-(const FloatComplex & c) const
    {
    	FloatComplex temp;
    	temp.real = real - c.real;
    	temp.imaginary = imaginary - c.imaginary;
    	return temp;
    }
    
FloatComplex FloatComplex::operator*(const FloatComplex & c) const
    {
    	FloatComplex temp;
    	temp.real = (real*c.real) - (imaginary*c.imaginary);
    	temp.imaginary = (real*c.imaginary) + (imaginary*c.real);
    	return temp;
    }
    
FloatComplex FloatComplex::operator/(const FloatComplex & c) const
    {
    	FloatComplex temp;
    	temp.real = ((real*c.real) + (imaginary*c.imaginary)) / ((c.real*c.real) + (c.imaginary*c.imaginary));
    	temp.imaginary = ((imaginary*c.real)-(real*c.imaginary)) / ((c.real*c.real) + (c.imaginary*c.imaginary));
    	return temp;
    }
    
//printing operators' output with 2 decimal places
void FloatComplex::outputsum(){
	cout << setiosflags(ios::fixed) << setprecision(2);
        cout << "\nSum of complex numbers: " << real << " + " << imaginary <<"i" << endl;
    }
    
void FloatComplex::outputsub(){
	cout << setiosflags(ios::fixed) << setprecision(2);
        cout << "Subtraction of complex numbers: " << real << " + " << imaginary <<"i" << endl;
    }
    
void FloatComplex::outputmul(){
	cout << setiosflags(ios::fixed) << setprecision(2);
        cout << "Multiplication of complex numbers: " << real << " + " << imaginary <<"i" << endl;
    }
    
void FloatComplex::outputdiv(){
	cout << setiosflags(ios::fixed) << setprecision(2);
        cout << "Division of complex numbers: " << real << " + " << imaginary <<"i" << endl;
    }
