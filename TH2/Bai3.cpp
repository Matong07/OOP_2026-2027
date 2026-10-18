#include <bits/stdc++.h>
using namespace std;
class HANG {
  char Mahang[11], Tenhang[50];
  long Dongia;

 public:
  void NHAP() {
    cout << "Ma Hang: ";
    cin.getline(Mahang, 11);
    cout << "Ten Hang: ";
    cin.getline(Tenhang, 50);
    cout << "Don gia: ";
    cin >> Dongia;
    cin.ignore();
  }
  void XUAT() {
    cout << Mahang << setw(15) << Tenhang << setw(15) << Dongia << endl;
  }
};
class PHIEU {
  HANG x[100];
  char Maphieu[11];
  int n;

 public:
  void NHAP() {
    cout << "Nhap Ma Phieu: ";
    cin.getline(Maphieu, 11);
    do {
      cout << "Nhap so luong don hang: ";
      cin >> n;
      cin.ignore();
    } while (n <= 0 || n > 100);
    for (int i = 0; i < n; i++) {
      x[i].NHAP();
    }
  }
  void XUAT() {
    cout << "\t\t\t PHIEU DON HANG" << endl;
    cout << "Ma phieu: " << Maphieu << endl;
    cout << "Mahang" << setw(15) << "Tenhang" << setw(15) << "Dongia" << endl;
    for (int i = 0; i < n; i++) {
      x[i].XUAT();
    }
  }
};
int main() {
  PHIEU x;
  x.NHAP();
  x.XUAT();
  return 0;
}
