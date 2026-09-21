#include <iostream>
#include <iomanip>
using namespace std;

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

int input_stoi()
{
    string temp_string;
    getline(cin, temp_string);
    int out_str = convert_to_int(temp_string);

    return out_str;
}

string get_init_option()
{
    string userInput;
    cout << "Pilih kasus yg ingin dijalankan" << endl;
    cout << "1. Izin bawa motor \n"
         << "2. Diskon 10 persen apabila lebih dari 100k \n"
         << "3. Tarif parkir \n"
         << "4. Nilai ujian \n"
         << "5. Hitung BMI \n"
         << "6. Gaji karyawan" << endl;

    cout << "\n> ";
    getline(cin, userInput);
    return userInput;
}

void izin_motor()
{
    string punyaSIM;
    int umur;
    bool SIM;

    cout << "Selamat siang\nbapak tau kenapa bapak ditilang?" << endl;
    cout << "Minta sim nya ya pak~ (Y/n)";
    getline(cin, punyaSIM);
    if (punyaSIM == "Y" || punyaSIM == "y" || punyaSIM == "iya" || punyaSIM == "Iya")
    {
        SIM = true;
    }
    else
    {
        SIM = false;
    }
    cout << "Umurnya sekarang berapa? ";
    umur = input_stoi();

    if (SIM = true && umur > 17)
    {
        cout << "Boleh membawa motor ke kampus" << endl;
    }
    else
    {
        cout << "Motornya saya sita ya dekk -o- (Ishowspeed nahan ketawa)" << endl;
    }
}

void diskon10persen()
{
    int total_belanja, total;
    cout << "Selamat datang di peenjehmart kita lagi ada diskon 10% kalo belanjaan lebih dari 100k" << endl;
    cout << "Totalnya jadi? ";
    total_belanja = input_stoi();

    if (total_belanja > 100000)
    {
        total = 0.9 * total_belanja;
        cout << "Selamat! ibu/bapak mendapatkan diskon sebesar " << 0.1 * total_belanja << endl;
        cout << "Total akhir setelah diskon menjadi: Rp. " << total << endl;
    }
    else
    {
        cout << "Mohon maaf ibu/bapak tidak mendapatkan diskon, kurang Rp. " << 100000 - total_belanja << " lagi nih" << endl;
        cout << "Total akhir setelah diskon menjadi: Rp. " << total << endl;
    }
}

void tarifparkir()
{
    int jam, biaya;
    cout << "MESIN TARIF PARKIR PEENJEH" << endl;
    cout << "Sudah berapa lama anda parkir (jujur ya) (dalam jam) ";
    jam = input_stoi();
    if (jam <= 2)
    {
        biaya = 3000;
    }
    else
    {
        biaya = 3000 + ((jam - 2) * 2000);
    }
    cout << "TOTAL TARIF PARKIR SELAMA " << jam << " JAM: Rp. " << biaya << endl;
}

void nilai_ujian()
{
    int umur, harga, bayar;
    cout << "SISTEM DISKON BERDASARKAN UMUR" << endl;
    cout << "Berapa umur anda? ";
    umur = input_stoi();
    cout << "Harga tiket? ";
    harga = input_stoi();

    if (umur < 12)
    {
        bayar = harga - (harga * 50 / 100);
        cout << "Diskon 50% untuk anak-anak" << endl;
    }
    else if (umur > 60)
    {
        bayar = harga - (harga * 30 / 100);
        cout << "Diskon 30% untuk lansia" << endl;
    }
    else
    {
        bayar = harga;
        cout << "Tidak mendapatkan diskon" << endl;
    }
    cout << "Total bayar: Rp. " << bayar << endl;
}

void hitung_bmi()
{
    int totalBelanja;
    cout << "SISTEM VOUCHER BELANJA" << endl;
    cout << "Total belanja anda? ";
    totalBelanja = input_stoi();

    if (totalBelanja >= 500000)
    {
        cout << "Selamat! Anda mendapatkan Voucher Rp50.000" << endl;
    }
    else if (totalBelanja >= 250000)
    {
        cout << "Selamat! Anda mendapatkan Voucher Rp20.000" << endl;
    }
    else
    {
        cout << "Maaf, anda tidak mendapatkan voucher" << endl;
    }
}

void gaji_karyawan()
{
    int baterai;
    cout << "CEK STATUS BATERAI PERANGKAT" << endl;
    cout << "Persentase baterai saat ini? ";
    baterai = input_stoi();

    if (baterai > 50)
    {
        cout << "Baterai masih cukup" << endl;
    }
    else if (baterai >= 20)
    {
        cout << "Sebaiknya segera isi daya" << endl;
    }
    else
    {
        cout << "Baterai lemah, segera charge" << endl;
    }
}

int main()
{
    string option = "";
    while (option != "1" && option != "2" && option != "3" && option != "4" && option != "5" && option != "6")
    {
        option = get_init_option();
        cout << "\n";
    }
    if (option == "1")
    {
        izin_motor();
    }
    else if (option == "2")
    {
        diskon10persen();
    }
    else if (option == "3")
    {
        tarifparkir();
    }
    else if (option == "4")
    {
        nilai_ujian();
    }
    else if (option == "5")
    {
        hitung_bmi();
    }
    else if (option == "6")
    {
        gaji_karyawan();
    }
    else
    {
        cout << "Pilihan tidak valid!" << endl;
    }
}