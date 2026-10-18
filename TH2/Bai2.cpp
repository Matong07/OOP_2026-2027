#include <bits/stdc++.h>
using namespace std;
class NSX {
  char Mansx[11], Tennsx[50], Dcnsx[50];

 public:
  void NHAP() {
    cout << "Ma nha san xuat: ";
    cin.getline(Mansx, 11);
    cout << "Ten nha san xuat: ";
    cin.getline(Tennsx, 50);
    cout << "Dia chi nha san xuat: ";
    cin.getline(Dcnsx, 50);
  }
  void XUAT() {
    cout << "Nha san xuat: " << Tennsx << endl;
    cout << "Ma nha san xuat: " << Mansx << endl;
    cout << "Dia chi: " << Dcnsx << endl;
  }
};
class HANG {
  NSX x;
  char Mahang[11], Tenhang[50];

 public:
  void NHAP() {
    cout << "Nhap ma hang: ";
    cin.getline(Mahang, 11);
    cout << "Ten hang: ";
    cin.getline(Tenhang, 50);
    x.NHAP();
  }
  void XUAT() {
    cout << "\t\t\t Thong tin hang hoa " << endl;
    cout << "Ten Hang: " << Tenhang << endl;
    cout << "Ma Hang: " << Mahang << endl;
    x.XUAT();
  }
};
int main() {
  HANG a;
  a.NHAP();
  a.XUAT();
  return 0;
}