#include "../../std_lib_facilities.h"

vector<int> sieve_of_eratosthenes(int max) {
    vector<int> a(max+1, true);
    a[0] = a[1] = false;
    vector<int> primes = {2};

    for(int i = 2; i < max; i++) {
	if(a[i] && (long long)i*i <= max) {
	    for(int j = i * i; j <= max; j += i) {
		a[j] = false;
	    }
	}
    }

    for(int i = 3; i < max+1; i+=2) {
	if(a[i]) primes.push_back(i);
    }

    return primes;
}
int main() {
    vector<int> primes = sieve_of_eratosthenes(10000);
    for(int x: primes) {
	cout << x << ", ";
    }
    return 0;
}
