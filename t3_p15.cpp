/* Lógica disyuntiva compuesta */
#include <iostream>
using namespace std;

int main(){
	char c;
	
	cout << "Introduce una vocal: ";
	cin >> c;
	
	if(c == 'i' || c == 'u'){
		cout << "Has introducido una vocal cerrada\n" << endl;
	}else{
		if(c == 'a' || c == 'e' || c == 'o'){
			cout << "Has introducido una vocal abierta\n" << endl;			
		}else{
			cout << "No has introducido ninguna vocal\n" << endl;
		}
	}
	
	return 0;
}
