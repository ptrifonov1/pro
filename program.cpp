////���� program.cpp 
#include "stdafx.h" 
#include <iostream> 
#include "funcs.h" 
using namespace std; 
int main() 
{ 
cout << MySum(10, 3) << endl; 
cout << MySub(10, 3) << endl; 
system("pause");
return 0; 
} 

#include "stdafx.h" 
#include "funcs.h" 
double MySum(double a, double b) 
{ 
return a + b; 
} 
double MySub(double a, double b) 
{ 
return a - b; 
} 
