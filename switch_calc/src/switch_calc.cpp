#include "../../std_lib_facilities.h"

double compute(double n1, char o, double n2) {
    switch(o) {
	case '+':
	    return n1+n2;
	case '-':
	    return n1-n2;
	case '*':
	    return n1*n2;
	case '/':
	    return n1/n2;
	case '^':
	    return pow(n1, n2);
	default:
	    return -1;
    }
}

int main() {
    double  n1, n2;
    char o;
    vector<double> results;

    cout << "Enter your mathematical operations:\n";
    while (cin >> n1 && cin >> o && cin >> n2) {
	results.push_back(compute(n1, o, n2));
    };

    cout << "Result(s): \n";
    for (double r : results) {
	cout << r << ", ";
    }
    cout << "\n";

    return 0;
}
