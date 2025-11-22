#include <iostream>
#include <string>
using namespace std;

int main() {
  string nama;
  cout << "Masukkan nama lengkap: ";
  getline(cin, nama);

  int panjang = nama.length();
  cout << "Panjang string: " << panjang << endl;

  return 0;
}
