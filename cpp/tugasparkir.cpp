#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void println(string message) {
    cout << message << endl;
}

int convert_to_int(string number)
{
    try
    {
        int convertednum = stoi(number);
        return convertednum;
    }
    catch (const invalid_argument &e)
    {
        cout << "Err! string yang dimasukan tidak bisa diubah ke integer" << endl;
        exit(0);
    }
}

int input_stoi(string prompt = "")
{
    string temp_string;
    cout << prompt;
    getline(cin, temp_string);
    int out_str = convert_to_int(temp_string);
    cout << endl;
    return out_str;
}

int hitungTarifParkir(string kendaraan, int durasi){
    int firstrate, rate, total;
    total = 0; 
    if (kendaraan == "MOBIL"){
        firstrate = 5000;
        rate = 3000;
    } else if (kendaraan == "MOTOR"){
        firstrate = 3000;
        rate = 2000;
    } else {
        println("Err! tipe salah");
        exit(0);
    }

    total += firstrate;
    durasi -= 1;
    total += durasi*rate;

    return total;
}

double hitungDiskon(string statusMember, int tarifSekarang){
    float diskon = 0.0;
    if (statusMember == "GOLD"){
        diskon = 0.2;
    } else if (statusMember == "SILVER"){
        diskon = 0.1;
    } else {
        diskon = 0.0;
    }

    return tarifSekarang*diskon;
}

int hitungBiayaTambahan(int durasi){
    int tarifTambahan = 0;
    if (durasi > 8){
        tarifTambahan += 5000;
    } 

    return tarifTambahan;
}

double hitungTotalBayar(int tarifSekarang, int tarifTambahan, int diskon){
    int tarifFinal = 0;
    tarifFinal += tarifSekarang;
    tarifFinal += tarifTambahan;

    tarifFinal -= diskon;

    if (tarifFinal >= 30000){
        tarifFinal -= 2000;
    }

    if (tarifFinal < 0){
        tarifFinal = 0;
    }

    return tarifFinal;
}  

void tampilkanStruk(int tarifAwal, float diskon, float tarifFinal, int durasi){
    int tarifTambahan = (durasi > 8) ? 5000 : 0;
    int diskonTambahan = ((tarifAwal + tarifTambahan - diskon) >= 30000) ? 2000 : 0;
    println("|            RINCIAN STRUK            |");
    cout << "| Tarif Awal        : Rp.  " << left << setw(11) << tarifAwal << "|" << endl;
    cout << "|   Tarif  Tambahan : Rp.  " << left << setw(11) << tarifTambahan << "|" << endl;
    println("|-------------------------------------|");
    cout << "| Diskon            : Rp. -" << left << setw(11) << diskon << "|" << endl;
    cout << "|   Diskon Tambahan : Rp. -" << left << setw(11) << diskonTambahan << "|" << endl;
    println("|-------------------------------------|");
    cout << "| Tarif Final       : Rp.  " << left << setw(11) << tarifFinal << "|" << endl;
    println("+=====================================+");
}

int main(){
    println("+=====================================+");
    println("|  SISPATIS (SISTEM PARKIR OTOMATIS)  |");
    
    string jenisKendaraan, statusMember;
    int tarifAwal, biayaTambahan, durasi, metodePembayaran, uangAwal, uangKembalian;
    float diskon, tarifFinal;

    // TEST CASE
    jenisKendaraan = "MOBIL";
    statusMember = "SILVER";
    durasi = 9;
    // TEST CASE

    tarifAwal = hitungTarifParkir(jenisKendaraan, durasi);
    diskon = hitungDiskon(statusMember, tarifAwal);
    biayaTambahan = hitungBiayaTambahan(durasi);
    
    tarifFinal = hitungTotalBayar(tarifAwal, biayaTambahan, diskon);

    tampilkanStruk(tarifAwal, diskon, tarifFinal, durasi);
    println("");
    
    if (tarifFinal == 0){
        println("HORE PARKIR ANDA GRATIS");
    } else {
        println("Silahkan bayar, berikut metode pembayaran yang tersedia: ");
        println("[1] TUNAI");
        println("[2] QRIS\n");
        while (true){
            metodePembayaran = input_stoi("> ");
            if (metodePembayaran == 1 || metodePembayaran == 2){
                break;
            }
        }
               
        if (metodePembayaran == 1){
            uangAwal = input_stoi("Masukkan uang tunai -> ");
            if (uangAwal < tarifFinal){
                println("Transaksi anda gagal!");
                println("Anda akan dikirim ke neraka pemrograman");
                exit(0);
            } else {
                uangKembalian = uangAwal - tarifFinal;
                cout << "Uang awal: Rp. " << uangAwal << endl;
                cout << "Tarif akhir: Rp. " << tarifFinal << endl;
                println("---------------------------------------");
                cout << "Kembalian: Rp. " << uangKembalian << endl;
            }
        } else {
            println("<QRIS>");
        }

        println("Pembayaran selesai :)");
    }
}