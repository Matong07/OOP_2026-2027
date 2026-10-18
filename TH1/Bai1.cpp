#include <bits/stdc++.h>
using namespace std;
class Student {
  char Msv[10], Name[50];
  int Age;
  double Score;

 public:
  void Input() {
    cout << "\t\t\t Nhap Thong Tin Sinh Vien " << endl;
    cout << "Ho va Ten: ";
    cin.getline(Name, 50);
    cout << "Ma sinh vien: ";
    cin.getline(Msv, 11);
    cin.ignore();
    cout << "Tuoi: ";
    cin >> Age;
    cout << "Diem: ";
    cin >> Score;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
  }
  void Output() {
    cout << "\t\t\tThong Tin Sinh Vien" << endl;
    cout << "Ho va Ten: " << Name << endl;
    cout << "Ma Sinh Vien: " << Msv << endl;
    cout << "Tuoi: " << Age << endl;
    cout << "Diem: " << Score << endl;
  }
};
int main() {
  Student a, b;
  a.Input();
  a.Output();
  b.Input();
  b.Output();
  return 0;
}