#include "std_lib_facilities.h"

void print_array10(ostream &os, int* a){

	for(int i=0; i <10; ++i)
	{
		os << a[i] << "\n";
	}
}

void print_array(ostream &os, int* a, int n){

	for(int i=0; i < n; ++i)
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


int main()
{
	int* a= new int[10];
	for(int i = 0; i < 10; ++i){

		cout << "Value: " << a[i] << "\n";
	}
	delete[] a;

	int *b = new int[10];
	for(int i=0; i<10; ++i)
	{
		b[i]=100+i;
	}

	print_array10(cout, b);
	delete[] b;

	int *c = new int[11];
	for(int i=0; i<11; ++i)
	{
		c[i]=100+i;
	}
	print_array10(cout, c);
	delete[] c;

	int *d = new int[20];
	for(int i=0; i<20; ++i)
	{
		d[i]=100+i;
	}
	 print_array10(cout, d);
	delete[] d;

	vector<int> vec;
	for(int i=0; i<10; ++i)
	{
		vec.push_back(100+i);
	}
	print_vector(cout, vec, 10);

	vector<int> vec2;
	for(int i=0; i<11; ++i)
	{
		vec2.push_back(100+i);
	}
	print_vector(cout, vec2, 11);

	vector<int> vec3;
	for(int i=0; i<20; ++i)
	{
		vec3.push_back(100+i);
	}
	print_vector(cout, vec3, 20);


}
