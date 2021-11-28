#include "std_lib_facilities.h"

int birth_year = 2002;
int age = 19;
double number = 1234567.89;
vector<string> first_name, last_name, phone_number, email_address;
string f_name, l_name, p_number, e_address;

int main(){

	cout << "Birth year in various forms (decimal, hexadecimal, octal)\n";

	cout << hex << birth_year <<"	";
	cout << oct << birth_year <<"	";
	cout << dec << birth_year <<"\n";
	
	cout <<"Age: " << age << "\n";

	int a, b, c, d;

	cout << "Enter 1234 four times: \n";
	cin >> a >> oct >> b >> hex >> c >> d;
	cout << a << '\t' << b << '\t' << c << '\t' << d << '\n';

	cout << defaultfloat << number << "\n" << fixed << number << "\n" << scientific << number << "\n";

	cout << "Type 5 of your friends full name (first + last name), phone number, and e-mail adress";
	for(int i =0; i<6; ++i){
		cin >> f_name >> l_name >> p_number >> e_address;
		first_name.push_back(f_name);
		last_name.push_back(l_name);
		phone_number.push_back(p_number);
		email_address.push_back(e_address);
	}

	cout << "First name:\t\tLast name:\t\tPhone number:\t\tEmail adress:\n";
	for(int i = 0; i<6; ++i){
		cout << first_name[i] <<"\t\t" << last_name[i] << "\t\t" << phone_number[i] << "\t\t" << email_address[i] << "\n";
	} 

}