#include <iostream>

struct complex_t{
    float real;
    float imag;
    complex_t(){
        real=0.0f;
        imag=0.0f;
    }
    complex_t add(complex_t other) const { //complex_t const * const
        complex_t result;
        result.real=this->real+other.real;
        result.imag=this->imag+other.imag;
        return result;
    }
    std::ostream & output(std::ostream & stream) const {
        return stream<<'('<<real<<", "<<imag<<')';
    }
    ~complex_t(){
    }
};

int main(){
    complex_t complex1;
    complex_t complex2;
    complex_t result=complex1.add(complex2);
    result.output(std::cout);
    return 0;
}
