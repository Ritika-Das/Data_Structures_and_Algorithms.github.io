 
#include <iostream> 
using namespace std; 

class sq { 

public: 
	float squareRoot(float n) 
	{ 
		float x = n; 
		float y = 1; 

		while (x > y) { 
			x = (x + y) / 2; 
			y = n / x; 
		} 
		return x; 
	} 
}; 

int main() 
{ 
	sq g; 
	int n = 49; 
	cout << "Square root of " << n << " is " << g.squareRoot(n); 
	getchar(); 
} 
