#include <iostream>
#include <cstdlib>
#include "intcomplex.h"
#include "floatcomplex.h"

using namespace std;
//command line argument
int main(int argc, char* argv[]) {
// if user gives insufficient arguments
    if (argc < 8) {
        cout << "Insufficient arguments!" << endl;
        return 1;
    }
//storing the values in variables
    int R1 = atoi(argv[1]);
    int I1 = atoi(argv[2]);
    int R2 = atoi(argv[3]);
    int I2 = atoi(argv[4]);
    float FR1 = atof(argv[5]);
    float FI1 = atof(argv[6]);
    float FR2 = atof(argv[7]);
    float FI2 = atof(argv[8]);

//printing out the int and float complex numbers
    cout << "First Integer Complex Number: " << endl;
    printf("%d + %di\n" , R1 , I1 );
     cout << "Second Integer Complex Number: " << endl;
    printf("%d + %di\n" , R2 , I2 );
     cout << "First Float Complex Number: " << endl;
    printf("%.1f + %.1fi\n" , FR1 , FI1 );
     cout << "Second Float Complex Number: " << endl;
    printf("%.1f + %.1fi\n" , FR2 , FI2 );
    
//Creating instances of IntComplex and FloatComplex
    IntComplex C1(R1, I1);
    IntComplex C2(R2, I2);
    FloatComplex F1(FR1, FI1);
    FloatComplex F2(FR2,FI2);

//Performing operations on integers
    IntComplex intsum = C1 + C2;
    IntComplex intsub = C1 - C2;
    IntComplex intmul = C1 * C2;
    IntComplex intdiv = C1 / C2;

//Performing operations on floats
    FloatComplex floatsum = F1 + F2;
    FloatComplex floatsub = F1 - F2;
    FloatComplex floatmul = F1 * F2;
    FloatComplex floatdiv = F1 / F2;
    
//printing the output of integers
    cout << "\t\t\tInteger Complex Results:" << endl;
    intsum.outputsum();
    intsub.outputsub();
    intmul.outputmul();
    intdiv.outputdiv();

//printing the output of floats
    cout << "\n\t\t\tFloat Complex Results:" << endl;
    floatsum.outputsum();
    floatsub.outputsub();
    floatmul.outputmul();
    floatdiv.outputdiv();

    return 0;
}

