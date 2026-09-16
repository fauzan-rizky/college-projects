#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(){
	string provinsi, kabupatenkota, namaLengkap, tempatLahir, alamat, kelDesa,
	kecamatan, agama, statusKawin, pekerjaan, kewarganegaraan, berlakuHingga,
	golDarah;
	long long NIK;
	int rt, rw, tgl, bulan, tahun;
	char jenisKelamin;

	cout << "Silahkan masukkan data yang diminta \n" << endl;
	cout << "Provinsi? "; getline(cin, provinsi);
	cout << "Kabupaten/Kota? "; getline(cin, kabupatenkota);
	cout << "NIK? "; cin >> NIK;
	cin.ignore();
	cout << "Nama Lengkap? "; getline(cin, namaLengkap);
	cout << "Tempat Lahir? "; getline(cin, tempatLahir);
	cout << "Tanggal Lahir (tanggal)? "; cin >> tgl;
	cout << "Tanggal Lahir (bulan)? "; cin >> bulan;
	cout << "Tanggal Lahir (tahun)? "; cin >> tahun;
	cout << "Jenis Kelamin (L/P)? "; cin >> jenisKelamin;
	cout << "Golongan Darah? "; cin >> golDarah;
	cin.ignore();
	cout << "Alamat? "; getline(cin, alamat);
	cout << "RT? "; cin >> rt;
	cout << "RW? "; cin >> rw;
	cin.ignore();
	cout << "Kelurahan/Desa? "; getline(cin, kelDesa);
	cout << "Kecamatan? "; getline(cin, kecamatan);
	cout << "Agama? "; getline(cin, agama);
	cout << "Status Perkawinan? "; getline(cin, statusKawin);
	cout << "Pekerjaan? "; getline(cin, pekerjaan);
	kewarganegaraan = "Indonesia";
	berlakuHingga = "Seumur Hidup";

	cout << "\n------------------------------------------------------------------\n";
	cout << "\t\t\tPROVINSI " << provinsi << endl;
	cout << "\t\t\tKABUPATEN/KOTA " << kabupatenkota << "\n" << endl;
	cout << left << setw(20) << "NIK" << ": " << NIK << endl;
	cout << left << setw(20) << "Nama" << ": " << namaLengkap << endl;
	cout << left << setw(20) << "Tempat/Tgl Lahir" << ": " << tempatLahir << ", " << tgl << "-" << bulan << "-" << tahun << endl;
	cout << left << setw(20) << "Jenis Kelamin" << ": " << jenisKelamin << endl;
	cout << left << setw(20) << "Golongan Darah" << ": " << golDarah << endl;
	cout << left << setw(20) << "Alamat" << ": " << alamat << endl;
	cout << left << setw(20) << "RT/RW" << ": " << rt << "/" << rw << endl;
	cout << left << setw(20) << "Kelurahan/Desa" << ": " << kelDesa << endl;
	cout << left << setw(20) << "Kecamatan" << ": " << kecamatan << endl;
	cout << left << setw(20) << "Agama" << ": " << agama << endl;
	cout << left << setw(20) << "Status Perkawinan" << ": " << statusKawin << endl;
	cout << left << setw(20) << "Pekerjaan" << ": " << pekerjaan << endl;
	cout << left << setw(20) << "Kewarganegaraan" << ": " << kewarganegaraan << endl;
	cout << left << setw(20) << "Berlaku Hingga" << ": " << berlakuHingga << endl;
	cout << "\n------------------------------------------------------------------\n";
}