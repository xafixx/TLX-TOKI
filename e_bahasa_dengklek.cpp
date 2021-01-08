#include<iostream>
#include<cstring>

using namespace std;

int main() {
	/*
	 *
	 * Karakter 'a' ascii = 97
	 * Karakter 'A' ascii = 65
	 *
	 * Beda keduanya adalah 32
	 *
	 */
	char S[100];

	cin >> S;
	int len = strlen(S);
	for(int i=0; i<len; i++) {
		if(S[i] >= 'A'  && S[i] <= 'Z'){ // jika huruf kapital
			S[i] = S[i] + 32;
		} else if(S[i] >= 'a' && S[i] <= 'z') { // jika bukan huruf kapital
			S[i] = S[i] - 32;
		}
	}
	cout << S << "\n";
}
