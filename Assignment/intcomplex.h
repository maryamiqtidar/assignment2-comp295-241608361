#ifndef INTCOMPLEX_H
#define INTCOMPLEX_H

class IntComplex{
    private:			//private variables
        int real,imaginary;
        
    //constructors:
    public:
    IntComplex(int r = 0, int i = 0);
    
    //operator overloading
    IntComplex operator+(const IntComplex& c) const;
    IntComplex operator-(const IntComplex& c) const;
    IntComplex operator*(const IntComplex& c) const;
    IntComplex operator/(const IntComplex& c) const;
    
    //methods
    void outputsum();
    void outputsub();
    void outputmul();
    void outputdiv();
};

#endif
