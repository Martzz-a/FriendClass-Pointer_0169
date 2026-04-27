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

    friend void tampilkanKeliling(LayangLayang, BelahKetupat);
    friend class BelahKetupat;
};

class BelahKetupat
{
private:
    double d1, d2, s;

public:
    void inputData()
    {
        cout << "\nInput Belah Ketupat" << endl;
        cout << "Masukkan diagonal 1 : ";
        cin >> d1;
        cout << "Masukkan diagonal 2 : ";
        cin >> d2;
        cout << "Masukkan sisi       : ";
        cin >> s;
    }

    double hitungLuas()
    {
        return 0.5 * d1 * d2;
    }

    friend void tampilkanKeliling(LayangLayang, BelahKetupat);
};

void tampilkanKeliling(LayangLayang ObjLayang, BelahKetupat ObjBelahKetupat)
{
    double kelilingLayang = 2 * (ObjLayang.s1 + ObjLayang.s2);
    double kelilingBelah = 4 * ObjBelahKetupat.s;

    cout << "\n--- Hasil Keliling ---" << endl;
    cout << "Keliling Layang-Layang : " << kelilingLayang << endl;
    cout << "Keliling Belah Ketupat : " << kelilingBelah << endl;
}

int main()
{
    LayangLayang ObjLayang;
    BelahKetupat ObjBelahKetupat;

    ObjLayang.inputData();
    ObjBelahKetupat.inputData();

    cout << "\n--- Hasil Luas ---" << endl;
    cout << "Luas Layang-Layang : " << ObjLayang.hitungLuas() << endl;
    cout << "Luas Belah Ketupat : " << ObjBelahKetupat.hitungLuas() << endl;

    tampilkanKeliling(ObjLayang, ObjBelahKetupat);

    return 0;
}