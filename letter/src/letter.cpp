#include "../../std_lib_facilities.h"

int main() {
    string first_name;
    cout << "Enter the name of the person you want to write to: ";
    cin >> first_name;
    
    cout 
	<< "Dear " << first_name << ",\n\n" 
	<< "I hope this letter finds you well."
	<< "\nWhat have you been up to?\n";
    
    string friend_name;
    cout << "\nEnter the name of another friend: ";
    cin >> friend_name;

    cout
	<< "\nHave you seen " << friend_name << " lately?\n";
    
    char friend_sex;
    while (friend_sex != 'm' && friend_sex != 'f') {
	cout << "\nIs " << friend_name << " male or female? (m/f): ";
	cin >> friend_sex;
    }
    cout  << "\nIf you see " << friend_name; 
    if (friend_sex == 'm') {
	cout 
	    << ", please ask him to call me.\n"; 
    } else {
	cout 
	    << ", please ask her to call me.\n";
    }

    int age = 0;
    cout << "\nHow old is " << first_name << "?: ";
    cin >> age;

    if (age <= 0 || age > 110) {
	simple_error("You're kidding!");
    } else {
	cout 
	    << "\nI hear you just had a birthday and you are " << age
	    << " years old.\n";
    }
    //keep_window_open();
    return 0;
}
