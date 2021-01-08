/*
 *
 *	Enkripsi kata dari string
 *	menggunakan caesar cipher,
 *	panjang konstanta sift hurufnya
 *	ditentukan user.
 *
 */

#include<iostream>
#include<cstring>

using namespace std;

int main() {

	char S[100];
	int K;

	cin >> S;
	cin >> K;

	int len = strlen(S);
	for(int i=0; i<len; i++) {
		int ord = (S[i] - 'a');
		int enkrip = (ord +  K) % 26;
		S[i] = enkrip + 'a';
	}

	cout << S << "\n";
}
