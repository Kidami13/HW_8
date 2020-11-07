
#include <iostream>
using namespace std;
int main()
{
    
	int ulyamass[7][7];
	int ulyaMaxVal = 0;
	int range = 100;
	int ulyaMinVal = range;
	

	for (int i = 0; i < 7; i++) {
		for (int j = 0; j < 7; j++) {
			ulyamass[i][j] = rand() % range;
		}
	}	

	for (int i = 0; i < 7; i++) {
		for (int j = 0; j < 7; j++) {
			if (ulyamass[i][j] > ulyaMaxVal) {
				ulyaMaxVal = ulyamass[i][j];
				
			}
			if (ulyamass[i][j] < ulyaMinVal) {
				ulyaMinVal = ulyamass[i][j];
			}
		}
	}

	for (int i = 0; i < 7; i++) {
		for (int j = 0; j < 7; j++) {
			cout << ulyamass[i][j] << " ";
		}
		cout << endl;
	}

	cout << ulyaMaxVal << " Max Value" << endl;
	cout << ulyaMinVal << " Min Value" << endl;
}

