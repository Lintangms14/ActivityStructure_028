#include <iostream>
using namespace std;

struct mahasiswa
{
	string NIM;
	string Nama;
	string Alamat;
	int umur;
};

int main()
{
	mahasiswa mhs;

	cout << "masukkan NIM = ";
	cin >> mhs.NIM;
	cout << "masukkan Nama = ";
	cin >> mhs.Nama;
	cout << "masukkan Alamat = ";
	cin >> mhs.Alamat;
	cout << "masukkan umur = ";
	cin >> mhs.umur;

	cout << "\nNIM = " << mhs.NIM;
	cout << "\nNama = " << mhs.Nama;
	cout << "\nAlamat = " << mhs.Alamat;
	cout << "\numur = " << mhs.umur;
}