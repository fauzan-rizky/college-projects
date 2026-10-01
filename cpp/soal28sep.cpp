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

int make_it_odd(int num)
{
    if (num % 2 == 0)
    {
        num += 1;
    }

    return num;
}

int make_it_even(int num)
{
    if (num % 2 == 1)
    {
        num += 1;
    }

    return num;
}

void standard_triangle(int height)
{
    int asterisk_len = 1;
    for (int rows = height; rows > 0; rows--)
    {
        for (int columns = 0; columns < rows; columns++)
        {
            cout << " ";
        }
        for (int k = 0; k < asterisk_len; k++)
        {
            cout << "#";
        }
        for (int columns = 0; columns < rows; columns++)
        {
            cout << " ";
        }
        cout << endl;
        asterisk_len += 2;
    }
}

void ceil_triangle(int height)
{
    height *= 2;
    height += 1;
    int space_len = 0;
    for (int rows = height; rows > 0; rows -= 2)
    {
        for (int space_left = 0; space_left < space_len; space_left++)
        {
            cout << " ";
        }
        for (int asterisks = 0; asterisks < rows; asterisks++)
        {
            cout << "#";
        }
        for (int space_left = 0; space_left < space_len; space_left++)
        {
            cout << " ";
        }
        cout << endl;

        space_len += 1;
    }
}

void rhombus(int height)
{
    standard_triangle(height / 2);
    ceil_triangle(height / 2);
}

void x_square(int height)
{
    if (height < 5)
    {
        cout << "Minimal height: 5" << endl;
        cout << "Automatically set height to 5 instead for X Square format" << endl;
        height = 5;
    }

    int l = 1;

    for (int rows = 0; rows < height; rows++)
    {
        if (rows == 0 || rows == height - 1)
        {
            for (int columns = 0; columns < height; columns++)
            {
                cout << "#";
            }
        }
        else
        {
            for (int columns = 0; columns < height; columns++)
            {
                if (columns == 0 || columns == height - 1)
                {
                    cout << "#";
                }
                else
                {
                    if (columns == l || columns == height - (l + 1))
                    {
                        cout << "X";
                    }
                    else
                    {
                        cout << ".";
                    }
                }
            }

            if (rows < height / 2)
            {
                l++;
            }
            else
            {
                l--;
            }
        }

        cout << endl;
    }
}

void x_square_exp(int height)
{
    height = make_it_odd(height);
    if (height < 5)
    {
        cout << "Minimal height: 5" << endl;
        cout << "Automatically set height to 5 instead for X Square format" << endl;
        height = 5;
    }

    int l = 1;
    string status = "descending";
    char edge, border_vertical, border_horizontal, center, rightup, leftup;
    string space = " "; // Ntah kenapa gabisa whitespace
    edge = '*';
    center = '*';
    rightup = '*';
    leftup = '*';
    border_horizontal = '*';
    border_vertical = '*';

    for (int rows = 0; rows < height; rows++)
    {
        if (rows == 0 || rows == height - 1) // Baris awal sama akhir
        {
            for (int columns = 0; columns < height; columns++)
            {
                if (columns == 0 || columns == height - 1)
                {
                    cout << edge;
                }
                else
                {
                    cout << border_horizontal;
                }
            }
        }
        else if (rows == height / 2) // Baris tengah
        {
            for (int columns = 0; columns < height; columns++)
            {
                if (columns == 0 || columns == height - 1) // Border
                {
                    cout << border_vertical;
                }
                else if (columns == height / 2) // Tengahnya
                {
                    cout << center;
                }
                else
                {
                    cout << space;
                }
            }

            status = "ascending";
            l--;
        }
        else // Baris selain awal akhir sm tengah
        {
            for (int columns = 0; columns < height; columns++)
            {
                if (columns == 0 || columns == height - 1) // Kolom kiri sm kanan jadi border
                {
                    cout << border_vertical;
                }

                else // Kolom lainnya
                {
                    if (columns == l || columns == height - (l + 1)) // Cout si garis miring
                    {
                        if (columns == l)
                        {
                            if (status == "descending")
                            {
                                cout << leftup;
                            }
                            else
                            {
                                cout << rightup;
                            }
                        }
                        else
                        {
                            if (status == "descending")
                            {
                                cout << rightup;
                            }
                            else
                                cout << leftup;
                        }
                    }
                    else // Cout kosong
                    {
                        cout << " ";
                    }
                }
            }

            if (status == "descending") // Ngecek arah si garis miring
            {
                l++;
            }
            else
            {
                l--;
            }
        }

        cout << endl;
    }
}

void sierpinski_triangle(int height)
{
    height = make_it_even(height);
    int asterisk_len = 1;
    int little_triangles = 3;
    for (int rows = height; rows > 0; rows--)
    {
        if (rows == height / 2)
        {
            for (int columns = 0; columns < rows; columns++)
            {
                cout << " ";
            }
            for (int k = 0; k < asterisk_len; k++)
            {
                if (k == 0 || k == asterisk_len - 1)
                {
                    cout << "#";
                }
                else
                {
                    cout << " ";
                }
            }
            for (int columns = 0; columns < rows; columns++)
            {
                cout << " ";
            }
        }
        else if (rows < (height / 2 + 0))
        {

            for (int columns = 0; columns < rows; columns++)
            {
                cout << " ";
            }
            for (int k = 0; k < asterisk_len; k++)
            {
                if (k >= little_triangles && k <= asterisk_len - (little_triangles + 1))
                {
                    cout << " ";
                }
                else
                {
                    cout << "#";
                }
            }
            for (int columns = 0; columns < rows; columns++)
            {
                cout << " ";
            }
            little_triangles += 2;
        }
        else
        {
            for (int columns = 0; columns < rows; columns++)
            {
                cout << " ";
            }
            for (int k = 0; k < asterisk_len; k++)
            {
                cout << "#";
            }
            for (int columns = 0; columns < rows; columns++)
            {
                cout << " ";
            }
        }

        cout << endl;
        asterisk_len += 2;
    }
}

void println(string output)
{
    cout << output << endl;
}

string inputln(string prompt)
{
    string userInput;
    cout << prompt;
    getline(cin, userInput);

    return userInput;
}

int get_options()
{
    println("AlPro ASCII Triangle Shapes");
    println("1. Sierpinski Triangle");
    println("2. Rhombus (belah ketupat)");
    println("3. X Banner");
    println("Choose one from above to print out: ");

    int userOption = input_stoi();
    return userOption;
}

int main()
{
    int userSelect = get_options();
    println("Input height: ");
    int len = input_stoi();

    if (userSelect == 1)
    {
        sierpinski_triangle(len);
    }
    else if (userSelect == 2)
    {
        rhombus(len);
    }
    else if (userSelect == 3)
    {
        x_square_exp(len);
    }
    else
    {
        println("What?");
    }
}