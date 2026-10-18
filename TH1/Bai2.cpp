#include <bits/stdc++.h>
using namespace std;
class HCN {
  double a, b;

 public:
  void Input() {
    cout << "Nhap Thong So Hinh Chu Nhat:" << endl;
    cout << "Chieu Dai: ";
    cin >> a;
    cout << "Chieu Rong: ";
    cin >> b;
    cin.ignore();
  }
  void Ve() {
    for (int j = 1; j <= b; j++) {
      for (int i = 1; i <= a; i++) {
        cout << "*";
        if (i == a) {
          cout << endl;
        }
      }
    }
  }
  float DIENTICH() {
    float S = a * b;
    return S;
  }
  float CHUVI() {
    float P = (a + b) * 2;
    return P;
  }
};
int main() {
  HCN a;
  a.Input();
  a.Ve();
  cout << a.DIENTICH() << endl;
  cout << a.CHUVI() << endl;
  return 0;
}