#include <iostream>
#include <conio.h>


/* Author : razan */

using namespace std;

int main(){
	
	system("color B"); /* bermaksud untuk memberikan efek berwarna pada text */
	cout <<" Author : Muhammad Razan Rizqulah "<<endl;
	cout <<" jurusan : Informatika A"<<endl;
	cout <<" Special Thanks to my friend : HAREKA, REZA & LAW"<< endl;
	cout <<"_________________________________________________"<<"\n"<<endl;
	cout << "Perkalian 1 - 10\n"<<endl; /* membuat subjudul sedrhana */
	for(int i = 1; i <= 10; i++){ /* Membuat perulangan dengan meng-inisialisasi i berlipat ganda 1 secara berurut secara horizontal */
		for(int b =1; b <= 10; b++){ /* membuat perulangan perkalian */
			
			system("color C"); /* memberikan efek berwarna */
			cout << i << "X"<< b << "=" << (i * b) << endl; /* mengeluarkan output akhir */
		}
	}
	return 0; /* mengakhiri sebuah program */
	
	
} 
