/*
  2100018069 - Rauuf Anugerah Akbar
  2100018073 - Egi Setya Nugroho
  2100018076 - Imamuddin Al Mustaqim
  2100018081 - Alif Fianto Ramadhan
*/

#include <iostream>
using namespace std;
int main(){
  double angka1, angka2, hasil;
	char menu;
  
  cout << "============================\n";
  cout << "\t\tKALKULATOR\n";
	cout << "============================\n";
  cout << "Operator (+, -, *, /)	: "; 
	cin >> menu;
	cout << "Masukkan nilai pertama	: "; 
	cin >> angka1;
	cout << "Masukkan nilai kedua	: "; 
	cin >> angka2;
  cout << "===========================\n";
  
  switch (menu) {
    case '+':   hasil = angka1 + angka2;
                cout << "Hasil " << angka1 << " + " << angka2 << " = " << hasil << endl;
                break;
    case '-':   hasil = angka1 - angka2;
                cout << "Hasil " << angka1 << " - " << angka2 << " = " << hasil << endl;
                break;
    case '*':   hasil = angka1 * angka2;
                cout << "Hasil " << angka1 << " + " << angka2 << " = " << hasil << endl;
                break;
    case '/':   hasil = angka1 / angka2;
                cout << "Hasil " << angka1 << " + " << angka2 << " = " << hasil << endl;
                break;
    default:    cout << "Operasi tidak tersedia" << endl;
  }

  return 0;
}
