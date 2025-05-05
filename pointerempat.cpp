#include <iostream>
using namespace std;

class masasiswa {
    private:
    string nama;
    public:
    friend void setNama(mahasiswa &a, string);
};

void setNama(mahasiswa &a, string b){
    a.nama = b; // set the name of the mahasiswa object
    cout << a.nama
};