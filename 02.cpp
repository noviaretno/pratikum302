#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

int main () {
	char bidang;
	double p,l,a,t,L;
	
	cout << "Pilih Bidang : ";
	cin  >> bidang;
	
	
	if (bidang == 'p' || bidang == 'p') {
		cout << "  Menghitung luas persegi panjang \n";
		cout << "  Masukan panjangnya : ";
		cin  >> p;
		cout << "  Masukan lebarnya : ";
		cin  >> l;
		L = p*l;
		cout << " Luas persegi panjang : "<<L<<endl;
	}
	else if (bidang == 'S' || bidang == 'S') {
		cout << " Menghitung Luas Segitiga \n";
		cout << " Masukan alasnya : ";
		cin >> a;
		cout << " Masukkan tingginya : ";
		cin >> t;
		L = 0.5*a*t;
		cout << " Luas persegi panjang : "<<L<<endl;
		
	}
	else{
		cout<<"Maff, Anda Salah Memilih"<<endl;
	}
	}
