#include "../../std_lib_facilities.h"

int main() {
    cout<<"Enter your name: ";
    string first_name;
    cin>>first_name;
    cout<<"\nHello, " << first_name << "!\n";
    keep_window_open();
    return 0;
}

