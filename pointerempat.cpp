#include <iostream>
using namespace std;

class masasiswa {
    private:
    string nama;
    public:
    friend void setNama(mahasiswa &a, string);
};