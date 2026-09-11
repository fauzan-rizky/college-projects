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
	cin.ignore();
	cout << "Nama Lengkap? "; getline(cin, NamaLengkap);
	cout << "Tempat/Tanggal Lahir? "; getline(cin, TempTanHir);
	cout << "Jenis Kelamin? "; getline(cin, JKelamin);
	cout << "Golongan Darah? "; cin >> GolDarah;
	cin.ignore();
	cout << "Alamat? "; getline(cin, Alamat);
	cout << "RT/RW? "; getline(cin, RtRw);
	cout << "Kelurahan/Desa? "; getline(cin, KelDesa);
	cout << "Kecamatan? "; getline(cin, Kecamatan);
	cout << "Agama? "; cin >> Agama;
	cin.ignore();
	cout << "Status Perkawinan? "; getline(cin, StatusKawin);
	cout << "Pekerjaan? "; getline(cin, Pekerjaan);
	Kewarganegaraan = "Indonesia";
	BerlakuHingga = "Seumur Hidup";

	cout << "\n-------------------------------------------\n";
	cout << "\t\tPROVINSI " << provinsi << endl;;
	cout << "\t\tKABUPATEN " << kabupaten << endl;
	cout << left << setw(20) << "NIK" << ": " << NIK << endl;
	cout << left << setw(20) << "Nama" << ": " << NamaLengkap << endl;
	cout << left << setw(20) << "Tempat/Tgl Lahir" << ": " << TempTanHir << endl;
	cout << left << setw(20) << "Jenis Kelamin" << ": " << JKelamin << endl;
	cout << left << setw(20) << "Golongan Darah" << ": " << GolDarah << endl;
	cout << left << setw(20) << "Alamat" << ": " << Alamat << endl;
	cout << left << setw(20) << "RT/RW" << ": " << RtRw << endl;
	cout << left << setw(20) << "Kelurahan/Desa" << ": " << KelDesa << endl;
	cout << left << setw(20) << "Kecamatan" << ": " << Kecamatan << endl;
	cout << left << setw(20) << "Agama" << ": " << Agama << endl;
	cout << left << setw(20) << "Status Perkawinan" << ": " << StatusKawin << endl;
	cout << left << setw(20) << "Pekerjaan" << ": " << Pekerjaan << endl;
	cout << left << setw(20) << "Kewarganegaraan" << ": " << Kewarganegaraan << endl;
	cout << left << setw(20) << "Berlaku Hingga" << ": " << BerlakuHingga << endl;
}
