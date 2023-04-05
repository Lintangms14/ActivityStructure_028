#include <iostream>
using namespace std;

struct DetailAlamat {
	string Desa;
	string Kota;
};

struct Mahasiswa
{
	string NIM;
	string Nama;
	DetailAlamat Alamat;
	int Umur;

};

int main()
{
	Mahasiswa mhs;

	cout << "masukkan NIM = ";
	cin >> mhs.NIM;
	cout << "masukkan Nama = ";
	cin >> mhs.Nama;
	cout << "Alamat :" << endl;
	cout << "\tmasukkan Desa = ";
	cin >> mhs.Alamat.Desa;
	cout << "\tmasukkan Kota = ";
	cin >> mhs.Alamat.Kota;
	cout << "masukkan umur = ";
	cin >> mhs.Umur;

	cout << "\nNIM = " << mhs.NIM;
	cout << "\nNama = " << mhs.Nama;
	cout << "\nDesa = " << mhs.Alamat.Desa;
	cout << "\nKota = " << mhs.Alamat.Kota;
	cout << "\nUmur = " << mhs.Umur;
}