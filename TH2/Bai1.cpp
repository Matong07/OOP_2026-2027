#include <bits/stdc++.h>
using namespace std;
class DATE {
  int D, M, Y;

 public:
  void NHAP() {
    cin >> D >> M >> Y;
    cin.ignore();
  }
  void XUAT() { cout << D << " / " << M << " / " << Y << endl; }
};
class NHANSU {
  char Manhansu[11], Hoten[50];
  DATE NS;

 public:
  void NHAP() {
    cout << "Ma nhan su: ";
    cin.getline(Manhansu, 11);
    cout << "Ho va ten: ";
    cin.getline(Hoten, 50);
    cout << "Nam sinh: ";
    NS.NHAP();
  }
  void XUAT() {
    cout << "NHAN SU: " << Hoten << endl;
    cout << "MA NHAN SU: " << Manhansu << endl;
    cout << "Nam sinh: ";
    NS.XUAT();
  }
};
int main() {
  NHANSU a;
  a.NHAP();
  a.XUAT();
  return 0;
}