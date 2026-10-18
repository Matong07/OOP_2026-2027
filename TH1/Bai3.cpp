#include <bits/stdc++.h>
using namespace std;
class HANG {
  char Mahang[11], TenHang[50];
  double Dongia;
  int Soluong;
  int n;
  HANG* a;

 public:
  void Input() {
    cout << "So luong Hang hoa:";
    cin >> n;
    cin.ignore();
    a = new HANG[n];
    for (int i = 0; i < n; i++) {
      cout << "Ma Hang: ";
      cin.getline(a[i].Mahang, 11);
      cout << "Ten hang: ";
      cin.getline(a[i].TenHang, 50);
      cout << "Don gia: ";
      cin >> a[i].Dongia;
      cout << "So luong: ";
      cin >> a[i].Soluong;
      cin.ignore();
    }
  }
  void Output() {
    cout << "\t\t\t Thong tin hang hoa: " << endl;
    cout << left << "Ma hang" << setw(20) << "Ten hang " << setw(50)
         << " Don gia " << setw(30) << "So luong" << endl;

    for (int i = 0; i < n; i++) {
      cout << left << a[i].Mahang << setw(20) << a[i].TenHang << setw(50)
           << a[i].Dongia << setw(30) << a[i].Soluong << endl;
    }
  }
};
int main() {
  HANG a;
  a.Input();
  a.Output();
  return 0;
}