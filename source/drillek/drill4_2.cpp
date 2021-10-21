#include "std_lib_facilities.h"

int main(){


	double number;
	string unit;
	double min=0, max=0;
	double sum=0;
	vector <double> values;




	cout << "Please enter the first number in m\n";
	cin >> number >> unit;

	values.push_back(number);
	sum+=number;

	min = number;
	max = number;

	cout << "Minimum number so far: " << min << " m\n";
	cout << "Maximum number so far: " << max << " m\n";

	while(cin>>number>>unit){

	if(unit=="m"){

		number=number*1;
}

	else if(unit=="cm"){

		number=number*0.01;
}

	else if(unit=="in"){

		number=number*0.0254;
}

	else if(unit=="ft"){

		number=number*0.3048;
}	

		else{

			cout << "Invalid unit\n";
	}
	
	values.push_back(number);
	sum+=number;

	if(number>=max){

		max=number;
		cout << "Maximum number so far: " << max << " m\n";
}
	else if(number<=min){

		min=number;
		cout << "Minimum number so far: " << min << " m\n";
}

}

cout << "The smallest value is: " << min << " m.\n";
cout << "The largest value is: " << max << " m.\n";
cout << "Sum of meters: " << sum << " m\n";
cout << "The list of values: " << values.size() << "\n";

sort(values);
for (int i=0; i < values.size(); i++){
	cout << i+1 << " " << values[i] << " m\n";
}

}