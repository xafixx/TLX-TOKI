/*-----------------------------------------------------------------
 * Matriks diagonal adalah matriks bujursangkar dengan A[ij] = 0
 * 
 * untuk i != j dengan kata lain, seluruh elemen yang 
 * 
 * tidak terdapat pada posisi i != j  bernilai 0
 * 
 * i = baris, j = kolom
 *  
 * sumber : Rinaldi Munir matematika diskrit
 * ----------------------------------------------------------------
 */
 
#include <bits/stdc++.h>

using namespace std;

int main() {
	
	// init array 3 x 3
	int arr[3][3] = { 
			  {1 ,2, 3}, 
			  {4, 5, 6},
			  {7, 8, 9}
			};
	
	// print matriks
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			if(i != j) {
			   arr[i] [j] = 0;
			}
			cout <<" "<< arr[i] [j];
		}
		cout << "\n";
	}
	
}
