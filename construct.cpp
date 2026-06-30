#include <iostream> 
using namespace std; 
class Demo { 
int x; 
public: 
Demo() { 
x = 10; 
cout << "Constructor Called" << endl; 
} 
void show() { 
cout << "Value of x = " << x << endl; 
} }; 
int main() { 
Demo d; 
d.show(); 
} 