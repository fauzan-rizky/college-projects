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

int switcher(int counter, int switcher){
    counter++;
    if (counter == 5){
        counter == 0;
        if (switcher == 3){
            switcher = 1;
        }
        else {
            switcher++;
        }
    }

    return counter, switcher;
}

int main(){
    int p1,p2,p3,tq, current, selector;
    p1 = 24;
    p2 = 3;
    p3 = 9;

    tq = 5;
    current = 0;
    selector = 1;   

    for (int i = 0; i < 36; i++){
        if (selector == 1 && p1 != 0){
            cout << "1";
            current++;
            p1--;
            if (current == tq){
                current = 0;
                selector++;
            }
        }
        else if (selector == 2 && p2!= 0){
            cout << "2";
            current++;
            p2--;
            if (current == tq){
            current = 0;
            selector++;
            }
        }
        else if (selector == 3 && p3!=0){
            cout << "3";
            current++;
            p3--;
            if (current == tq){
                current = 0;
                selector = 0;
            }
        }

    }
}