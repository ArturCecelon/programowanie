#include <iostream>

using namespace std;

int main()
{
	int x, y;
	cout << "Podaj x\n";
	cin >> x;
		cout << "Podaj y\n";
		cin >> y;

		if (x>0 && y>0) {
			cout << "Punkt znajduje si� w I �wiartce";
		}
		else if (x<0 && y>0){
			
			cout << "Punkt znajduje si� w II �wiartce";
		}
		else if (x<0 && y<0){

			cout << "Punkt znajduje si� w III �wiartce";
		}
		else if(x>0 && y<0){

			cout << "Punkt znajduje si� w IV �wiartce";
		}

    

}
