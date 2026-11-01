
#include <bits/stdc++.h>
using namespace std;

// Lop cha ELECTRONIC
class ELECTRONIC {
 protected:
  float CongSuat;
  float DienAp;

 public:
  // Constructor
  ELECTRONIC(float cs, float da) {
    CongSuat = cs;
    DienAp = da;
    cout << "Constructor ELECTRONIC\n";
  }

  // Destructor
  ~ELECTRONIC() { cout << "Destructor ELECTRONIC\n"; }
};

// Lop MAYGIAT ke thua ELECTRONIC
class MAYGIAT : public ELECTRONIC {
 private:
  float DungTich;
  char Loai[30];

 public:
  // Constructor
  MAYGIAT(float cs, float da, float dt, const char l[]) : ELECTRONIC(cs, da) {
    DungTich = dt;
    strcpy(Loai, l);
    cout << "Constructor MAYGIAT\n";
  }

  // Destructor
  ~MAYGIAT() { cout << "Destructor MAYGIAT\n"; }

  void XUAT() {
    cout << "\nTHONG TIN MAY GIAT\n";
    cout << "Cong suat: " << CongSuat << endl;
    cout << "Dien ap: " << DienAp << endl;
    cout << "Dung tich: " << DungTich << " kg" << endl;
    cout << "Loai: " << Loai << endl;
  }
};

// Lop TULANH ke thua ELECTRONIC
class TULANH : public ELECTRONIC {
 private:
  float DungTich;
  int SoNgan;

 public:
  // Constructor
  TULANH(float cs, float da, float dt, int sn) : ELECTRONIC(cs, da) {
    DungTich = dt;
    SoNgan = sn;
    cout << "Constructor TULANH\n";
  }

  // Destructor
  ~TULANH() { cout << "Destructor TULANH\n"; }

  void XUAT() {
    cout << "\nTHONG TIN TU LANH\n";
    cout << "Cong suat: " << CongSuat << endl;
    cout << "Dien ap: " << DienAp << endl;
    cout << "Dung tich: " << DungTich << " lit" << endl;
    cout << "So ngan: " << SoNgan << endl;
  }
};

int main() {
  // Khoi tao may giat a
  MAYGIAT a(500, 220, 9, "Cua ngang");

  // Khoi tao tu lanh b
  TULANH b(300, 220, 350, 2);

  // Xuat thong tin
  a.XUAT();
  b.XUAT();

  return 0;
}
