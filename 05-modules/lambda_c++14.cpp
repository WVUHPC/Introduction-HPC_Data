#include<iostream>
#include<complex>
  
int main() {
   // Store a generalized lambda, that squares a number, in a variable
   auto func = [](auto input) { return input * input; };

  // Usage examples:
  // square of an int
  std::cout << func(10) << std::endl;
 
  // square of a double
  std::cout << func(2.345) << std::endl;
 
  // square of a complex number
  std::cout << func(std::complex<double>(3, -2)) << std::endl;
 
  return 0;
}
