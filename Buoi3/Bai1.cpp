#include <bits/stdc++.h>
using namespace std;

class Date {
 private:
  int day, month, year;
  friend class Enterprise;

 public:
  void Input() {
    cout << "Nhap ngay thang nam: " << endl;
    cout << "Ngay: ";
    cin >> day;
    cout << "Thang: ";
    cin >> month;
    cout << "Nam: ";
    cin >> year;
    cin.ignore();
  }
  void Output() {
    cout << "Ngay " << day << " Thang " << month << " Nam " << year << endl;
  };
  friend class Enterprise;
};
class Address {
  char numberPhone[12], ward[30], district[30], city[30];
  friend class Enterprise;

 public:
  void Input() {
    cout << "Nhap so dien thoai: ";
    cin.getline(numberPhone, 12);
    cout << "Phuong/Xa: ";
    cin.getline(ward, 30);
    cout << "Quan/huyen:";
    cin.getline(district, 30);
    cout << "Thanh Pho: ";
    cin.getline(city)
  }
};
class Enterprise {
  int enterpriseCode;
  char enterpriseName[60], director[30];
  Date ngayTL;
  Address diachi;
  long revenue;

 public:
};