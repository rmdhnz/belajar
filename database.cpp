#include <bits/stdc++.h>
#include <fstream>
using namespace std;
class Mahasiswa{
    public :
        string nama,NIM,jurusan;
        Mahasiswa(string nama, string NIM, string jurusan){
            Mahasiswa::nama = nama;
            Mahasiswa::NIM = NIM;
            Mahasiswa::jurusan = jurusan;
        }
        string stringify(){
            return nama + "\t\t" + NIM + "\t" + jurusan;
        }
};
class Database{
    public :
        ifstream in;
        ofstream out;
        string fileName;
        Database(const char* fileName){
            Database::fileName = fileName;
        }
        void saved(Mahasiswa data){
            Database::out.open(Database::fileName,ios::app);
            Database::out << data.stringify() << "\n";
            Database::out.close();
        }
};
int main(){
    char nama[50],NIM[50],jurusan[50];
    gets(nama);
    gets(NIM);
    gets(jurusan);
    Mahasiswa data(nama,NIM,jurusan);
    Database dbase("database.txt");
    dbase.saved(data);
}
