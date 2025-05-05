#include <iostream>
using namespace std;

class mahasiswa {
    public:
    int nim;
    void showNim(){
        cout << "No induk mahasiswa : " << nim << endl;
    };
};

int main(){
    mahasiswa *mhs = mahasiswa; // pointer to class object
    mhs->nim = 1234567890; // Accessing class member using pointer
    mhs->showNim(); // calling class method using pointer

    delete mhs; // freeing allocated memory
    return 0;
};