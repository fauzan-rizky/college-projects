#include <iostream>
#include <iomanip>
using namespace std;

int convert_to_int(string number){
    try {
        int convertednum = stoi(number);
        return convertednum;
    } catch (const invalid_argument& e) {
        cout << "Err! entered string cannot be converted to integer" << endl;
        return -1;
        exit;
    }
}

string get_init_option(){
    string userInput;
    cout << "Pilih kasus yg ingin dijalankan" << endl;
    cout << "1. Mencari sisa uang saku dari belanja bulanan \n" << 
    "2. Mencari Bilangan ganjil atau genap dan apakah bilangan tersebut prima\n"  <<
    "3. ???" << endl;

    cout << "\n> "; getline(cin, userInput);
    return userInput;
}

int main(){
    string userOption;

    while (true){
        userOption = get_init_option();

        if (userOption == "1" || userOption == "2" || userOption == "3"){
            cout << "correct choice" << endl;
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
}