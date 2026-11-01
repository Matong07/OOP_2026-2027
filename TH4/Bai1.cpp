#include <bits/stdc++.h>
using namespace std;
class Person {
 protected:
  char Hoten[50], Quequan[50];
  struct {
    int D;
    int M;
    int Y;
  } Ngaysinh;
};
class KYSU : public Person {
  char Nganh[30];
  int NamTN;

 public:
  void NHAP() {
    cout << "Nhap Ho ten: ";
    cin.getline(Hoten, 50);
    cout << "Ngay sinh " << endl << "Ngay:";
    cin >> Ngaysinh.D;
    cout << "Thang: ";
    cin >> Ngaysinh.M;
    cout << "Nam: ";
    cin >> Ngaysinh.Y;
    cin.ignore();
    cout << "Que quan: ";
    cin.getline(Quequan, 50);
    cout << "Nganh theo hoc:";
    cin.getline(Nganh, 30);
    cout << "Nam tot nghiep: ";
    cin >> NamTN;
    cin.ignore();
  }
  void XUAT() {
    cout << Hoten << setw(15) << Ngaysinh.D << "/" << Ngaysinh.M << "/"
         << Ngaysinh.Y << setw(15) << Quequan << setw(15) << Nganh << setw(15)
         << NamTN << endl;
  }
};
int main() {
  KYSU* a;
  int n;
  do {
    cout << "Nhap so luong ky su: ";
    cin >> n;
    cin.ignore();
  } while (n <= 0);
  a = new KYSU[n];
  for (int i = 0; i < n; i++) {
    a[i].NHAP();
  }
  cout << "Ho ten" << setw(15) << "Ngay sinh" << setw(15) << "Que quan"
       << setw(15) << "Nganh" << setw(15) << "NamTN" << endl;
  for (int i = 0; i < n; i++) {
    a[i].XUAT();
  }
  return 0;
}