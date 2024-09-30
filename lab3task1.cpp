#include <iostream>
#include <cmath>  

int main() {
    //const
    const double a = 5;
    const double b = -4;
    const double c = 1;

    //calc
    double chisel = a + tan(b); // a + tan(b)                   
    double znam = 3 * a - 4 * sqrt(a + c) + 3 * fabs(b);  // 3a - 4sqrt(a + c) + 3|b|

    double f = chisel / znam;

    //output
    std::cout << "Function 'F' = " << f << std::endl;

    return 0;
}
