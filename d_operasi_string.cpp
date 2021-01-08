#include<iostream>
#include<cstring>

using namespace std;

int main() {

	string S1, S2, S3, S4;
	
	cin >> S1;
	cin >> S2;
	cin >> S3;
	cin >> S4;

	size_t found_s2 = S1.find(S2); // cari index pertama kali s2 di s1
	S1.erase(found_s2, S2.length()); // hapus dari index found_s2 sampai akhir

	size_t found_s3 = S1.find(S3) + S3.length(); // temukan index terakhir S3 didalam S1
	S1.insert(found_s3, S4); // sisipkan S4 ke S1 setelah index found_s3
	
	cout << S1 <<"\n";
}
