#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(){
	string provinsi,kabupaten,NIK,NamaLengkap,TempTanHir,JKelamin, GolDarah,
	Alamat,RtRw,KelDesa,Kecamatan,Agama,StatusKawin,Pekerjaan,Kewarganegaraan
	,BerlakuHingga;
	cout << "Silahkan masukkan data yang diminta \n" << endl;
	cout << "Provinsi? "; cin >> provinsi;
	cout << "Kabupaten? "; cin >> kabupaten;
	cout << "NIK? "; cin >> NIK;
	cout << "Nama Lengkap? "; cin.ignore(); getline(cin, NamaLengkap);
	cout << "Tempat/Tanggal Lahir? "; cin.ignore(); getline(cin, TempTanHir);
	// cout << "Jenis Kelamin? "; cin >> JKelamin;
	// cout << "Golongan Darah? "; cin >> GolDarah;
	// cout << "Alamat? "; cin.ignore(); cin >> Alamat;
	// cout << "RT/RW? "; cin.ignore(); cin >> RtRw;
	// cout << "Kelurahan/Desa? "; cin >> KelDesa;
	// cout << "Kecamatan? "; cin >> Kecamatan;
	// cout << "Agama? "; cin >> Agama;
	// cout << "Status Perkawinan? "; cin.ignore(); cin >> StatusKawin;
	// cout << "Pekerjaan? "; cin >> Pekerjaan;
	// Kewarganegaraan = "Indonesia";
	// BerlakuHingga = "Seumur Hidup";

	cout << "\n-------------------------------------------\n";
	cout << "\tPROVINSI " << provinsi << endl;;
	cout << "\tKABUPATEN " << kabupaten << endl;
	cout << "NIK: " << NIK << endl;
	cout << "Nama: " << setw(50) << NamaLengkap << endl;
	cout << "Tempat/Tangggal Lahir: " << TempTanHir << endl;
}
