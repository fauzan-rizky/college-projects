#include <iostream>
using namespace std;

int main()
{
    string huruf_mutu[9] = {"E", "D", "C", "C+", "B-", "B", "B+", "A-", "A"};
    string sebutan_mutu[9] = {"Gagal", "Kurang", "Cukup", "Lebih dari Cukup", 
        "Cukup Baik", "Baik", "Lebih dari Baik", "Istimewa", "Sangat Istimewa"};
    double angka_mutu[9] = {0, 1, 2, 2.3, 2.7, 3, 3.3, 3.7, 4};

    int skala_nilai[9] = {1, 41, 56, 60, 64, 68, 72, 76, 81};
    int input_nilai, category;
    category = 0;

    cout << "Masukkan nilai: ";
    cin >> input_nilai;

    // Error checking
    if (input_nilai > 100 || input_nilai < 0){
        cout << "Err! nilai tidak boleh lebih dari 100 atau kurang dari 0";
        exit(0);
    }

    for (int i = 0; i < 9; i++)
    {
        if (input_nilai >= skala_nilai[i])
        {
            category = i;
        }
    }

    cout << "\nNilai yang diinput: " << input_nilai << "\n\n";

    cout << "Huruf Mutu: " << huruf_mutu[category] << endl;
    cout << "Sebutan Mutu: " << sebutan_mutu[category] << endl;
    cout << "Angka Mutu: " << angka_mutu[category] << endl;
    if (category <= 7){
        cout << "Skala Nilai: " << skala_nilai[category] << "-" << skala_nilai[(category+1)] << endl;
    } else {
        cout << "Skala Nilai: >= " << skala_nilai[category] << endl;
    }
    
}