#include <iostream>
#include <string>

using namespace std;

class siswa;
class orang;
{
    private:
    string nama;
    public:
    void setNama(string pNama);
    friend class siswa; // Declare class siswa as a friend of class orang
};

class siswa {
    private:
    int id;

    public:
    void setid(int pId);
    void displayAll(orang &a); // Method to show name from orang class
};
