#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(){
	string Nama,TempatLahir,TanggalLahir,JKelamin,Agama,Alamat,NoHP,Status,Email,
	SkillIT,Bahasa,Pengalaman,SD,SMP,SMA,Kuliah;
	auto Nama = "John Doe";
	auto TempatLahir = "Silicon Valley";
	auto TanggalLahir = "Friday 13th";
	auto JKelamin = "Unknown";
	auto Agama = "Islam";

	cout << "Silahkan masukkan data CV yang diminta \n" << endl;
	cout << "Nama Lengkap? "; getline(cin, Nama);
	cout << "Tempat Lahir? "; getline(cin, TempatLahir);
	cout << "Tanggal Lahir? "; getline(cin, TanggalLahir);
	cout << "Jenis Kelamin? "; getline(cin, JKelamin);
	cout << "Agama? "; getline(cin, Agama);
	cout << "Alamat? "; getline(cin, Alamat);
	cout << "No HP? "; getline(cin, NoHP);
	cout << "Status? "; getline(cin, Status);
	cout << "Email? "; getline(cin, Email);
	cout << "Skill IT? "; getline(cin, SkillIT);
	cout << "Bahasa? "; getline(cin, Bahasa);
	cout << "Pengalaman? "; getline(cin, Pengalaman);
	cout << "Pendidikan SD? "; getline(cin, SD);
	cout << "Pendidikan SMP? "; getline(cin, SMP);
	cout << "Pendidikan SMA? "; getline(cin, SMA);
	cout << "Pendidikan Kuliah? "; getline(cin, Kuliah);

	cout << "\n-------------------------------------------\n";
	cout << "\tCURRICULUM VITAE\n";
	cout << "-------------------------------------------\n";
	cout << "DATA PRIBADI\n";
	cout << left << setw(20) << "Nama" << ": " << Nama << endl;
	cout << left << setw(20) << "Tempat/Tgl Lahir" << ": " << TempatLahir << ", " << TanggalLahir << endl;
	cout << left << setw(20) << "Jenis Kelamin" << ": " << JKelamin << endl;
	cout << left << setw(20) << "Agama" << ": " << Agama << endl;
	cout << left << setw(20) << "Tinggi / Berat" << ": " << endl;
	cout << left << setw(20) << "Alamat" << ": " << Alamat << endl;
	cout << left << setw(20) << "No HP" << ": " << NoHP << endl;
	cout << left << setw(20) << "Status" << ": " << Status << endl;
	cout << left << setw(20) << "Email" << ": " << Email << endl;

	cout << "\nPENDIDIKAN\n";
	cout << left << setw(20) << "SD" << ": " << SD << endl;
	cout << left << setw(20) << "SMP" << ": " << SMP << endl;
	cout << left << setw(20) << "SMA" << ": " << SMA << endl;
	cout << left << setw(20) << "Kuliah" << ": " << Kuliah << endl;

	cout << "\nKEMAMPUAN/SKILLS\n";
	cout << left << setw(20) << "IT" << ": " << SkillIT << endl;
	cout << left << setw(20) << "Bahasa" << ": " << Bahasa << endl;

	cout << "\nPENGALAMAN\n";
	cout << left << setw(20) << "Pengalaman" << ": " << Pengalaman << endl;
}
