#include <iostream>

int add(int a, int b);

int multiply(int a, int b){
  return a*b;
}

bool isPrime(int a);

bool isEven(int a);

bool isOdd(int a);

int main(int argc, char **argv){
  //add a call to the function you are implementing
  std::cout << multiply(5,10) << std::endl;
  return EXIT_SUCCESS;
}
