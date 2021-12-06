#include "std_lib_facilities.h"

void print_array10(ostream &os, int* a){

	for(int i=0; i <10; ++i)
	{
		os << a[i] << "\n";
	}
}

void print_vector(ostream& os, vector<int> v, int n)
	{
		for(int i=0; i<n; ++i)
		{
			os << v[i] << "\n";
		}
	}

int main(){

	int a = 7;
	int *p1 = &a;
	cout << "p1: " << p1 << "\n";
	cout << "*p1: " << *p1 << "\n"; 

	int *p2 = new int[7]{1, 2, 4, 8, 16, 32, 64};

	cout << "p2: " << p2 << "\n";
	cout << "*p2: " << *p2 << "\n"; 

	int *p3 = p2;
	p2 = p1;
	p2 = p3;

	delete[] p2;

	p1 = new int[10]{1, 2, 4, 8, 16, 32, 64, 128, 256, 512};
	
	p2 = new int[10];

	for(int i=0; i<10; ++i)
		p2[i] = p1[i];

	vector<int>vec1 = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};

	vector<int>vec2;
	for(int i=0; i<vec1.size(); ++i)
		vec2.push_back(vec1[i]);

}
