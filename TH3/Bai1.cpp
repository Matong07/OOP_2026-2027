#include <bits/stdc++.h>
using namespace std;
class SINHVIEN {
  char Masv[11], Hoten[50];
  double DiemToan, DiemLy, DiemHoa;

 public:
  void NHAP() {
    cout << "Ma sinh vien: ";
    cin.getline(Masv, 11);
    cout << "Ho va Ten: ";
    cin.getline(Hoten, 50);
    cout << "Diem Toan: ";
    cin >> DiemToan;
    cout << "Diem Hoa: ";
    cin >> DiemHoa;
    cout << "Diem Ly: ";
    cin >> DiemLy;
    cin.ignore();
  }
  double Tongdiem() {
    double Diem = DiemToan + DiemHoa + DiemLy;
    return Diem;
  }

  friend void SAPXEP(SINHVIEN ds[], int n) {
    SINHVIEN tam;
    for (int i = 0; i < n - 1; i++) {
      for (int j = i + 1; j < n; j++) {
        if (ds[i].Tongdiem() > ds[j].Tongdiem()) {
          tam = ds[i];
          ds[i] = ds[j];
          ds[j] = tam;
        }
      }
    }
  }
  void XUAT() {
    cout << "Ma sinh vien: " << Masv << endl;
    cout << "Ho va ten: " << Hoten << endl;
    cout << "Diem Toan" << setw(15) << "Diem Hoa " << setw(15) << "Diem Ly"
         << setw(15) << "Tong diem" << endl;
    cout << DiemToan << setw(15) << DiemHoa << setw(15) << DiemLy << setw(15)
         << Tongdiem() << endl;
  }
};
int main() {
  int n;
  do {
    cout << "Nhap so luong sinh vien: ";
    cin >> n;
    cin.ignore();
  } while (n <= 0);
  SINHVIEN* a;
  a = new SINHVIEN[n];
  for (int i = 0; i < n; i++) {
    a[i].NHAP();
  }
  for (int i = 0; i < n; i++) {
    a[i].XUAT();
  }
  return 0;
}