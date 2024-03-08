#include "../../std_lib_facilities.h"

double distance(double a, double b) {
    if (a > b) return a-b;
    else return b-a;
}

int main() {
    vector<double> cities;
    for(double city; cin >> city;) {
	cities.push_back(city);
    }
    
    double shortest_dist;
    double total_dist = 0;
    for (int i = 0; i < cities.size(); i++) {
	if(i > 0) {
	   if (i == 1) shortest_dist = distance(cities[i-1], cities[i]);	
	   else {
		double curr_dist = distance(cities[i-1], cities[i]);
		if (curr_dist < shortest_dist) shortest_dist = curr_dist;
	   }
	} 	
	total_dist += cities[i];
    }

    cout << "Total distance: " << total_dist << "\n";
    cout << "Shortest distance: " << shortest_dist << "\n";
    return 0;
}

