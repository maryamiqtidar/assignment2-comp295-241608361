#ifndef FLOATCOMPLEX_H
#define FLOATCOMPLEX_H

#include "intcomplex.h"

//floatcomplex class inheriting intcomplex class
class FloatComplex : public IntComplex
{
    //private float variables
    private:
        float real,imaginary;
        
    //constructors:
    public:
    FloatComplex(float r=0, float i=0);
    
    //operators overloading
    FloatComplex operator+(const FloatComplex& c) const;
    FloatComplex operator-(const FloatComplex& c) const;
    FloatComplex operator*(const FloatComplex& c) const;
    FloatComplex operator/(const FloatComplex& c) const;
    
    //methods
    void outputsum();
    void outputsub();
    void outputmul();
    void outputdiv();
    
};

#endif
