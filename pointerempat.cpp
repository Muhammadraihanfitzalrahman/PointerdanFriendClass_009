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

int main(){
    mahasiswa joko;
    setNama(joko, "kairi kumar"); // set the name of the mahasiswa object
    return 0; // Return 0 to indicate successful
};