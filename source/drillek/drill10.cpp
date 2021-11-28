#include "std_lib_facilities.h"

struct Point{
	int x;
	int y;
};

int main(){


	cout << "Please enter 7 (x, y) pairs: \n";

	vector<Point> original_point;

	int x;
	int y;

	int i = 0;

	while(i < 7 && cin >> x >> y){
		original_point.push_back(Point{x, y});
		i++;
	}

	cout << "Original points: \n";

	for(auto a : original_point)
		cout << a.x << " " << a.y << "\n";

	ofstream ofile{"mydata.txt"};

	for(auto& Point : original_point){
		ofile << Point.x << " " << Point.y << "\n";
	}
	ofile.close();


	ifstream ifile{"mydata.txt"};

	vector<Point>processed_point;

	while(ifile >> x >> y){
		processed_point.push_back(Point{x, y});
	}

	cout << "Processed points: \n";

	for(auto a : processed_point){
		cout << a.x << " " << a.y << "\n";
	}

	ifile.close();

	if(original_point.size() != processed_point.size())
		error("Something's wrong!");

	return 0;
}