#include <iostream>
using namespace std;
int main(){
	int ans,repetir = 1;
	while(repetir){
		system("cls");
		cout << "\nDeseja repetir (1=Sim/2=Nao)\nR: ";
		cin >> ans;
		if(ans == 1){
			repetir = 1;
		}else{
			repetir = 0;
		}
	}
	return 0;
}