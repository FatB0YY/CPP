#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <ctime>
#include <string>
using namespace std;




// åñëè óáðàòü âñå ñëîâà èç ôàéëà, òîãäà âñå ñ÷èòàåòñÿ âåðíî
// ñî ñëîâàìè â ôàéëå ó ìåíÿ íå ïîëó÷èëîñü  âåðíî ñ÷èòàòü öèôðû  è ïðèñâîèòü èõ â ïåðåìåííóþ




int main() {
    //ðóññèêé ÿçûê
    setlocale(LC_ALL, "Russian");
    //÷òîáû ÷èñëà ðàíäîìà ìåíÿëèñü
    srand(time(NULL));

    string path = "test.txt";
    ifstream fin;
    fin.open(path);

    if (!fin.is_open()) {
        cout << "error" << endl;
        return -1;
    }
    else {
        cout << "ôàéë îòêðûò" << endl;

        int n;
        fin >> n;
        cout << "Ñòðîê = " << n << endl;



        int m;
        fin >> m;
        cout << "Ñòîëáöîâ = " << m << endl;




        int** mat = new int* [n];
        for (int i = 0; i < n; i++)
        {
            mat[i] = new int[m];
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                fin >> mat[i][j];
            }
        }



        cout << "Ìàòðèöà: " << endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << mat[i][j] << "  ";
            }
            cout << endl;
        }

        fin.close();
        for (int i = 0; i < n; i++)
        {
            delete[] mat[i];
        }
        delete[] mat;
    }
    return 0;
}


