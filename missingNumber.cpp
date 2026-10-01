#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	
	int suma = 0;
	int numero;
	
	for(int i = 1; i <= n; i++){
		suma += i;
	}
	
	for(int i = 1; i < n; i++){
		cin >> numero;
		suma -= numero;
	}
	cout << suma << endl;
	
	return 0;
}
