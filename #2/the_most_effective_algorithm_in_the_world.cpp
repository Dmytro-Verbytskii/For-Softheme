#include <iostream>
using namespace std;

int main() {
	int a;
	cout << "Please, enter the nubmer: ";
	cin >> a;
    int count = 1, k = 0, i;
    
    if (a == 1 || a == 2) {
		cout << "Number of integers divisors: " << a << endl;
		return 0;
	}
	
    while ((a & 1) == 0) {
      	k++;
      	a >>= 1;
    }
    
    if (a == 1) {
    	cout << "Number of integers divisors: " << k + 1; 
		return 0;
    }
    
    else {
      count = k + 1;
  	}
  	
    for(i = 3; i*i <= a; i += 2) {
      k = 0;
      while(a % i == 0) {
         k++;
         a /= i;
      }
      count *= (k + 1);
    }
    
    if (a > 1) {
      count <<= 1;
  	}
	cout << "Number of integers divisors: " << count << endl;
    return 3;
   
}
