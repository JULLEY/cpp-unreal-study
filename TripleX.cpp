#include <iostream>

int main()
 {
     std::cout << "Hello, World";
     std::cout << std::endl;
     std::cout << "End Game";

     const int a = 111;
     const int b = 222;
     const int c = 333;

     const int sum = a + b + c;
     const int m = a * b * c;

     std::cout << std::endl;
     std::cout << sum << std::endl;
     std::cout << m << std::endl;

     return 0;
 }