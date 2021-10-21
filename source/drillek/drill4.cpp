#include "std_lib_facilities.h"

int main() 
{

double a;
double b;

while(cin >> a >> b){

cout << a <<" "<< b << "\n";

if(a>b){

	cout << "The larger value is: " << a << "\n";
	cout << "The smaller value is: " << b << "\n";

}

if(a<b){

	cout << "The larger value is: " << b << "\n";
	cout << "The smaller value is: " << a << "\n";

}

if(a==b){

	cout << "The values are equal.\n";
}

else if(a-b<0.01 && a-b>0 || b-a<0.01 && b-a>0) {


	cout << "The values are almost equal.\n";
}

}


return 0;
}