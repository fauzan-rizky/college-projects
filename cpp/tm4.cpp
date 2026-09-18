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

string get_init_option()
{
    string userInput;
    cout << "Pilih kasus yg ingin dijalankan" << endl;
    cout << "1. Mencari sisa saldo dari pengeluaran 1 hari \n"
         << "2. Mengecek Bilangan ganjil atau genap dan apakah bilangan tersebut prima\n"
         << "3. Demonstrasi login sederhana" << endl;

    cout << "\n> ";
    getline(cin, userInput);
    return userInput;
}

void sisa_saldo()
{
    string userInput;
    int uang_saku_awal, total;
    total = 0;
    uang_saku_awal = 0;
    string aktivitas[100];
    int pengeluaran[100];
    int count = 0;

    cout << "Masukkan saldo awal: ";
    getline(cin, userInput);
    uang_saku_awal = convert_to_int(userInput);

    cout << "\n*Kosongkan input bila sudah tidak ada aktivitas lagi" << endl;
    while (true){
        cout << "Masukkan aktivitas ke " << count+1 << ": ";
        getline(cin, userInput);

        if (userInput == ""){
            break;
        } else {
            aktivitas[count] = userInput;
        }

        cout << "Masukkan nominal pengeluaran: ";
        getline(cin, userInput);

        if (userInput == ""){
            pengeluaran[count] = 0;
        } else {
            pengeluaran[count] = convert_to_int(userInput);
        }
        cout << "\n";
        count++;
    }

    cout << "\n";
    cout << left << setw(29) << "Uang saku awal: " << "Rp. " << uang_saku_awal << endl;
    cout << "---------------------------------------- (-)" << endl;
    for (int i=0; i<count; i++){
        cout << left << setw(0) << (i+1) << ". ";
        cout << left << setw(25) << aktivitas[i] << right << setw(5) << "Rp. " << pengeluaran[i] << endl;
        total+= pengeluaran[i];
    }
    cout << "\n";
    cout << left << setw(29) << "Total: " << "Rp. " << total << endl;
    cout << "---------------------------------------- (=)" << endl;
    cout << left << setw(29) << "Sisa uang saku: " << "Rp. " << uang_saku_awal-total << endl;
}

void jilnaprima()
{
    int bilangan = 0;
    string bilangan_placeholder, status;
    bool prima = true;
    cout << "Pengecekan bilangan JilNaPrima: " << endl;
    cout << "> ";
    getline(cin, bilangan_placeholder);

    bilangan = convert_to_int(bilangan_placeholder);

    //Pengecekan Ganjil/Genap
    if (bilangan % 2 == 0)
    {
        status = "genap";
    }
    else
    {
        status = "ganjil";
    }

    //Pengecekan Prima
    if (bilangan <= 1)
    {
        prima = false;
    }

    for (int i = 2; i < bilangan; i++)
    {
        if (bilangan % i == 0)
        {
            prima = false;
        }
    }

    if (prima == true)
    {
        cout << "Bilangan " << bilangan << " merupakan bilangan " << status << " dan prima";
    }
    else
    {
        cout << "Bilangan " << bilangan << " merupakan bilangan " << status << " tapi bukan prima";
    }
}

void login()
{
    string valid_username = "admin";
    string valid_password = "12345";

    string entered_username, entered_password;
    cout << "+----------------------------+" << endl;
    cout << "|    LOGIN PEENJEH PANEL     |" << endl;
    cout << "+----------------------------+" << endl;
    cout << "\nUsername: ";
    getline(cin, entered_username);
    cout << "\nPassword: ";
    getline(cin, entered_password);
    cout << "\n";

    if (entered_username == valid_username && entered_password == valid_password)
    {
        cout << "ACCESS GRANTED!" << endl;
    }
    else
    {
        cout << "INCORRECT CREDENTIALS\nYOU SHALL NOT PASS!!!" << endl;
    }
}

int main()

{
    string userOption;

    while (true)
    {
        userOption = get_init_option();

        if (userOption == "1" || userOption == "2" || userOption == "3")
        {
            break;
        }
        else
        {
            continue;
        }
    }

    if (userOption == "1")
    {
        sisa_saldo();
    }
    else if (userOption == "2")
    {
        jilnaprima();
    }
    else if (userOption == "3")
    {
        login();
    }
}