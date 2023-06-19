#include <iostream>
#include <string>
using namespace std;

class BusReservationSystem {
private:
    string name;
    string address;
    string phone;
    string email;
    string idCardNumber;
    string departure;
    string destination;
public:
    void getPersonalInfo() {
    	cout << "Enter your name: ";
        getline(cin, name);
    	cout << "Enter your address: ";
        getline( cin,address);
        cout << "Enter your phone number: ";
        getline(cin, phone);
        cout << "Enter your email: ";
        getline(cin, email);
        cout << "Enter your ID card number: ";
        getline(cin, idCardNumber);
         cout << "Enter your departure: ";
        getline(cin, departure);
         cout << "Enter your destination: ";
        getline(cin, destination);
        
    }
    void displayPersonalInfo() {
        cout << "Name: " << name << endl;
        cout << "Address: " << address << endl;
        cout << "Phone number: " << phone << endl;
        cout << "Email: " << email << endl;
        cout << "ID card number: " << idCardNumber << endl;
        cout << "departure: " << departure << endl;
        cout << "destination: " << destination << endl;
    }
};
int main() {
	 int n;
     cout<<"Enter the number of people you want add to the list: ";
     cin>>n;
    // Get personal information from user
     BusReservationSystem bus[n];
     for ( int i = 0; i <n; i++){
     cout << "\nUser #" << i+1 << endl;
     cin.ignore();
     bus[i].getPersonalInfo();
}
    cout << "\nPersonal information of all users: " << endl; 
    for ( int i = 0; i <n; i++){
    cout << "\nUser #" << i+1 << endl;
    bus[i].displayPersonalInfo();
     
   }
    return 0;
}