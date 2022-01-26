#include <iostream>
using namespace std;
void nama_matkul(){
    string nama_matkul;
    cout << "Masukan Nama Matakuliah: ";
    getline(cin, nama_matkul);
    cout << "Nama Matkuliah : " << nama_matkul << endl;
};

void kd_matkul(){
    string kd_matkul;
    cout << "Masukan Kode Matakuliah : ";
    cin>>kd_matkul;
    cout << "Kode Matakuliah : " << kd_matkul << endl;
};

int main(){
    nama_matkul();
    kd_matkul();
   return 0;
}
