#include <iostream>
using namespace std;

class bidangDatar {
private:
    int x; //variabel untuk menyimpan input dari lingkaran maupun bujursangkar
public:
    bidangDatar() { //constructor
        x = 0;
    }
    virtual void input() {} // fungsi yang menerima input dan mengirim input melalui fungsi setX untuk disimpan di x
    virtual float Luas() { return 0; } //fungsi untuk menghitung luas
    virtual float Keliling() { return 0; } //fungsi untuk menghitung keliling
    void setX(int a) { //fungsi untuk memberi/mengirim nilai pada x
        this->x = a;
    }
    int getX() { //fungsi untuk membaca/mengambil nilai dalam x
        return x;
    }
};

class Lingkaran : virtual public bidangDatar {
public:
    double phi = 3.14;
    float Luas() {
        return (phi * getX() * getX());
    }
    float Keliling() {
        return (2 * phi * getX());
    }
    void input() {
        int a;
        cout << "Lingkaran dibuat" << endl;
        cout << "Masukkan jejari : ";
        cin >> a;
        setX(a);
        cout << "Luas Lingkaran = " << Luas() << endl;
        cout << "Keliling Lingkaran = " << Keliling() << endl;
    }
};

class Bujursangkar : virtual public bidangDatar {
public:
    float Luas() {
        return (getX() * getX());
    }
    float Keliling() {
        return (4 * getX());
    }
    void input() {
        int a;
        cout << "\nBujursangkar dibuat" << endl;
        cout << "Masukkan sisi : ";
        cin >> a;
        setX(a);
        cout << "Luas Bujursangkar = " << Luas() << endl;
        cout << "Keliling Bujursangkar = " << Keliling() << endl;
    }
};

int main() {
    bidangDatar* bd;
    Lingkaran li;
    Bujursangkar bs;

    bd = &li;
    bd->input();
    bd = &bs;
    bd->input();

    return 0;
}