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
			cout << "Punkt znajduje siê w I æwiartce";
		}
		else if (x<0 && y>0){
			
			cout << "Punkt znajduje siê w II æwiartce";
		}
		else if (x<0 && y<0){

			cout << "Punkt znajduje siê w III æwiartce";
		}
		else if(x>0 && y<0){

			cout << "Punkt znajduje siê w IV æwiartce";
		}

    

}
