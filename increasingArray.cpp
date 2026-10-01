#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	
	long long anterior;
	long long actual;
	long long movimientos = 0;
	
	cin >> anterior;
	
	for(int i = 1; i < n; i++){
		cin >> actual;
		
		if(actual < anterior){
			movimientos += anterior - actual;
			actual = anterior;
		}
		anterior = actual;
	}
	cout << movimientos << endl;
	
	return 0;
}
