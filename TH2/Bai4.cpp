#include <bits/stdc++.h>
using namespace std;
class QUANLY {
  char Maql[11], Hoten[50];

 public:
  void NHAP() {
    cout << "Ma Quan ly: ";
    cin.getline(Maql, 11);
    cout << "Ho va Ten Quan ly: ";
    cin.getline(Hoten, 50);
  }
  void XUAT() {
    cout << "Ma Quan ly: " << Maql << endl;
    cout << "Ho va Ten quan ly: " << Hoten << endl;
  }
};
class MAY {
  char Mamay[11], Kieumay[50];
  char Tinhtrang;

 public:
  void NHAP() {
    cout << "Ma may: ";
    cin.getline(Mamay, 11);
    cout << "Kieu may: ";
    cin.getline(Kieumay, 50);
    cout << "Tinh trang(T/F):";
    cin >> Tinhtrang;
    cin.ignore();
  }
  void XUAT() {
    cout << Mamay << setw(15) << Kieumay << setw(15);
    if (Tinhtrang == 'T') {
      cout << "OK" << endl;
    } else {
      cout << "NG" << endl;
    }
  }
};
class PHONGMAY {
  char Maphong[11], Tenphong[50];
  double Dientich;
  QUANLY x;
  MAY* y;
  int n;

 public:
  void NHAP() {
    cout << "Ma phong: ";
    cin.getline(Maphong, 11);
    cout << "Ten phong: ";
    cin.getline(Tenphong, 50);
    cout << "Dien tich: ";
    cin >> Dientich;
    cin.ignore();
    do {
      cout << "Nhap so thiet bi: ";
      cin >> n;
      cin.ignore();
    } while (n <= 0);
    x.NHAP();
    y = new MAY[n];
    for (int i = 0; i < n; i++) {
      y[i].NHAP();
    }
  }
  void XUAT() {
    cout << "\t\t\t PHONG MAY" << endl;
    cout << "Ma phong: " << Maphong << endl;
    cout << "Ten phong: " << Tenphong << endl;
    cout << "Dien tich: " << Dientich << endl;
    x.XUAT();
    cout << "Ma may" << setw(15) << "Kieu may" << setw << "Tinh trang" << endl;
    for (int i = 0; i < n; i++) {
      y[i].XUAT();
      cout << endl;
    }
  }
};
int main() {
  PHONGMAY a;
  a.NHAP();
  a.XUAT();
  return 0;
}