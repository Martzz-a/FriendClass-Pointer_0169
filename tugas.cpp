#include <iostream>
#include <cmath>

using namespace std;

class BelahKetupat;

class LayangLayang
{
private:
    double d1, d2, s1, s2;

public:
    void inputData()
    {
        cout << "Input Layang-Layang" << endl;
        cout << "Masukkan diagonal 1 : ";
        cin >> d1;
        cout << "Masukkan diagonal 2 : ";
        cin >> d2;
        cout << "Masukkan sisi 1     : ";
        cin >> s1;
        cout << "Masukkan sisi 2     : ";
        cin >> s2;
    }

    double hitungLuas()
    {
        return 0.5 * d1 * d2;
    }
};