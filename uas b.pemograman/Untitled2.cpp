#include <iostream>
using namespace std;

int main(){
    string nama_matkul;
    string kd_matkul;
    
    cout << "Masukan Matakuliah : ";
    getline(cin, nama_matkul);
    cout << "Masukan Kode : ";
    cin>>kd_matkul;
    
    cout << "Matakuliah : " << nama_matkul  << endl;
    cout << "Alamat Nama : " << &nama_matkul << endl;
    cout << "Kode : " << kd_matkul << endl;
    cout << "Alamat Kode : " << &kd_matkul << endl;
    
}
