#include <iostream>
#include <string>
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
    cout << "1. Perkalian \n"
         << "2. Pembagian \n"
         << "3. Penambahan \n"
         << "4. Pengurangan \n"
         << endl;

    cout << "\n> ";
    getline(cin, userInput);
    return userInput;
}

int perkalian(int a = 1, int b = 1)
{
    return a * b;
}

double pembagian(double a = 1.0, double b = 1.0)
{
    return a / b;
}

int penjumlahan(int a = 1, int b = 1)
{
    return a + b;
}

int pengurangan(int a = 1, int b = 1)
{
    return a - b;
}

int main()
{
    int useroption = convert_to_int(get_init_option());
    if (useroption < 1 || useroption > 4)
    {
        cout << "Pilihan tidak valid!" << endl;
        return 1;
    
    cout << "Masukkan angka pertama: ";
    int a = input_stoi();
    cout << "Masukkan angka kedua: ";
    int b = input_stoi();

    if (useroption == 1)
    {
        cout << "Hasil: " << perkalian(a, b) << endl;
    }
    else if (useroption == 2)
    {
        if (b == 0)
        {
            cout << "Err! Tidak bisa membagi dengan nol" << endl;
        }
        else
        {
            cout << "Hasil: " << pembagian(a, b) << endl;
        }
    }
    else if (useroption == 3)
    {
        cout << "Hasil: " << penjumlahan(a, b) << endl;
    }
    else if (useroption == 4)
    {
        cout << "Hasil: " << pengurangan(a, b) << endl;
    }


    return 0;
}