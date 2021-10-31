#include "std_lib_facilities.h"

void swap_v(int a, int b){

	int temp;
	temp = a;
	a = b;
	b = temp;
}

void swap_r(int& a, int& b){

	int temp;
	temp = a;
	a = b;
	b = temp;
}

/*void swap_cr(const int& a, const int& b){  		//can't change const

	int temp;
	temp = a;
	a = b;
	b = temp;
}*/







int main(){


/*int x = 7;
int y = 9;
cout <<"x: " << x << " y: " << y << "\n";
swap_v(x, y);
cout <<"x: " << x << " y: " << y << "\n";
swap_v(7, 9);
cout <<"x: " << x << " y: " << y << "\n";
const int cx = 7;
const int cy = 9;
cout <<"cx: " << cx << " cy: " << cy << "\n";
swap_v(cx, cy);
cout <<"cx: " << cx << " y: " << cy << "\n";
swap_v(7.7, 9.9);
cout <<"cx: " << cx << " cy: " << cy << "\n";
double dx = 7.7;
double dy = 9.9;
cout <<"dx: " << dx << " dy: " << dy << "\n";
swap_v(dx, dy);
cout <<"x: " << x << " y: " << y << "\n";
swap_v(7.7, 9.9);
cout <<"x: " << x << " y: " << y << "\n";*/


/*int x = 7;
int y = 9;
cout <<"x: " << x << " y: " << y << "\n";
swap_r(x, y);                                //working
cout <<"x: " << x << " y: " << y << "\n";
swap_r(7, 9);              					//can't convert from int to int&
cout <<"x: " << x << " y: " << y << "\n";	
const int cx = 7;
const int cy = 9;
cout <<"cx: " << cx << " cy: " << cy << "\n";
swap_r(cx, cy);                           //working
cout <<"x: " << x << " y: " << y << "\n";
swap_r(7.7, 9.9);
cout <<"x: " << x << " y: " << y << "\n";
double dx = 7.7;
double dy = 9.9;
cout <<"dx: " << dx << " dy: " << dy << "\n";
swap_r(dx, dy);
cout <<"x: " << x << " y: " << y << "\n";
swap_r(7.7, 9.9);
cout <<"x: " << x << " y: " << y << "\n";*/




/*int x = 7;
int y = 9;
cout <<"x: " << x << " y: " << y << "\n";
swap_cr(x, y);
cout <<"x: " << x << " y: " << y << "\n";
swap_cr(7, 9);
cout <<"x: " << x << " y: " << y << "\n";
const int cx = 7;
const int cy = 9;
cout <<"cx: " << cx << " cy: " << cy << "\n";
swap_cr(cx, cy);
cout <<"cx: " << cx << " y: " << cy << "\n";
swap_cr(7.7, 9.9);
cout <<"cx: " << cx << " cy: " << cy << "\n";
double dx = 7.7;
double dy = 9.9;
cout <<"dx: " << dx << " dy: " << dy << "\n";
swap_cr(dx, dy);
cout <<"x: " << x << " y: " << y << "\n";
swap_cr(7.7, 9.9);
cout <<"x: " << x << " y: " << y << "\n";*/




}






