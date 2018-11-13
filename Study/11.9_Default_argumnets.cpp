 // function example 
 #include <iostream> 
 
 int addition (int a, int b = 0) 
 { 
   int r; 
   std::cout << "The value of b = " << b << "\n";
   r = a + b;
   return r;
   // return a + b;
 } 
 
 int main (void) 
 { 
   int z, x, y;
   x = 5;
   y = 3; 
   z = addition (x,y); 
   std::cout << "The result is " << z << "\n";   
   z = addition (x); 
   std::cout << "The result is " << z << "\n";   
   return 0; 
 }
