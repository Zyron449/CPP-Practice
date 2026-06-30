#include <iostream> 
using namespace std; 
class Sample { 
private: 
int a; 
public: 
Sample(int x) { 
a = x; 
} 
friend void display(Sample s); 
}; 
void display(Sample s) { 
cout << "Value of a = " << s.a; 
} 
int main() { 
Sample obj(20); 
display(obj); 
} 