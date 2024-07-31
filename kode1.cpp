#include <iostream>
using namespace std;

void cetakdata(string nama, string nisn, string jurusan, int tinggibadan)
{
    cout << "Nama Anda: " << nama << endl;
    cout << "NISN Anda: " << nisn << endl;
    cout << "Jurusan Anda: " << jurusan << endl;
    cout << "Tinggi Badan: " << tinggibadan << endl;
}

int main() {
    string nama = "Benazzir anisa muthalib";
    string nisn = "092031934";
    string jurusan = "PPLG";
    int tinggibadan = 158;

    cetakdata(nama, nisn, jurusan,tinggibadan);
    return 0;
}