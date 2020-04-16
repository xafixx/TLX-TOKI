/*
 * Perulangan - C - TOKI
 * 
 * Membaca kata perbaris sampai masukan habis
 * 
 * Banyaknya baris tidak diberikan 
 * 
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
	
	char kata[99]; // tiap kata terdapat 1-100 karakter
	string kalimat[99]; // tiap baris terdapat 1 - 100 kata
	int i = 0;
	
	while (scanf("%s", kata) != EOF) {
		kalimat[i] = kata;
		i++;
	}
	
	// setelah masukan selesai tampilkan kata	
	for(int j = 0; j < i; j++) {
		cout << kalimat[j] <<endl;
	}
}
