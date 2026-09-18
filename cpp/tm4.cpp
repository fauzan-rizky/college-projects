#include <iostream>
#include <iomanip>
using namespace std;

int convert_to_int(string number){
    try {
        int convertednum = stoi(number);
        return convertednum;
    } catch (const invalid_argument& e) {
        cout << "Err! string yang dimasukan tidak bisa diubah ke integer" << endl;
        return -1;
        exit;
    }
}

string get_init_option(){
    string userInput;
    cout << "Pilih kasus yg ingin dijalankan" << endl;
    cout << "1. Mencari sisa saldo dari pengeluaran 1 hari \n" << 
    "2. Mengecek Bilangan ganjil atau genap dan apakah bilangan tersebut prima\n"  <<
    "3. Demonstrasi login sederhana" << endl;

    cout << "\n> "; getline(cin, userInput);
    return userInput;
}

int main(){
    string userOption;

    while (true){
        userOption = get_init_option();

        if (userOption == "1" || userOption == "2" || userOption == "3"){
            break;
        } else {
            continue;
        }
    }

    if (userOption == "1") {
            int uang_saku_awal, uang_belanja;
            uang_saku_awal = 0;
            uang_belanja = 0;

            cout << "Masukkan uang saku awal: "; getline(cin, userOption);
            uang_saku_awal = convert_to_int(userOption);

            cout << "Uang saku awal: " << uang_saku_awal << endl;

            while (true){
                cout << "Tambahkan belanjaan (kosongin klo udah gaada lagi): "; getline(cin, userOption);
                if (userOption != ""){
                    uang_belanja += convert_to_int(userOption);
                } else {
                    break;
                }
            }

            cout << "\n\nUang saku awal: Rp. " << uang_saku_awal << endl;
            cout << "Uang belanja: Rp. " << uang_belanja << endl;
            cout << "----------------------------------- (-)" << endl;
            cout << "Sisa uang saku: Rp. " << uang_saku_awal-uang_belanja << endl; 
        }
    else if (userOption == "2"){
            int bilangan = 0;
            string bilangan_placeholder, status;
            bool prima = true;
            cout << "Pengecekan bilangan JilNaPrima: " << endl;
            cout << "> "; getline(cin, bilangan_placeholder);

            bilangan = convert_to_int(bilangan_placeholder);

            if (bilangan%2 == 0){
                status = "genap";
            } else {
                status = "ganjil";
            }

            if (bilangan <= 1){
                prima = false;
            } 

            for (int i = 2; i<bilangan; i++){
                if (bilangan%i == 0){
                    prima = false;
                } 
            }

            if (prima == true){
                cout << "Bilangan " << bilangan << 
                " merupakan bilangan " << status << " dan prima";
            } else {
                cout << "Bilangan " << bilangan << 
                " merupakan bilangan " << status << " tapi bukan prima";
            }
        }
    else if (userOption == "3"){
            string valid_username = "admin";
            string valid_password = "12345";

            string entered_username, entered_password;
            cout << "+----------------------------+" << endl;
            cout << "|    LOGIN PEENJEH PANEL     |" << endl;
            cout << "+----------------------------+" << endl;
            cout << "\nUsername: "; getline(cin, entered_username);
            cout << "\nPassword: "; getline(cin, entered_password);
            cout << "\n";

            if (entered_username == valid_username && entered_password == valid_password){
                cout << "ACCESS GRANTED!" << endl;
            } else {
                cout << "INCORRECT CREDENTIALS\nYOU SHALL NOT PASS!!!" << endl;
            }

    }
    }