#include <iostream>
using namespace std;

int main()
{
    int nilai = 81;
    string nama = "Alan";

    if (nilai >= 80)
    {
        if (nilai >= 80 || nilai < 85)
        {
            if (nama == "Alan")
            {
                cout << "Ya nama saya alan." << endl;
            }
            cout << "Grade B";
        }
        else if (nilai >= 86 || nilai < 90)
        {
            cout << "Grade A";
        }
        else if (nilai >= 90 || nilai < 100)
        {
            cout << "Grade A++++";
        }
        else
        {
            cout << "Gacor king";
        }
    }
    else
    {
        cout << "tidak lulus";
    }

    return 0;
}