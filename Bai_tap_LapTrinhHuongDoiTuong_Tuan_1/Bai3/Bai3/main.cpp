//
//  main.cpp
//  Bai3
//
//  Created by Phuoc Thien Nguyen on 01/03/2022.
//

#include <iostream>

using namespace std;

void Nhap(int &a, int &b, int &c);
void Nhap(int *a, int *b, int *c);
void TimSoLonNhat(int a, int b, int c, int &soLonNhat);
void TimSoLonNhat(int *a, int *b, int *c, int *soLonNhat);
void Xuat(int soLonNhat);
void Xuat(int *soLonNhat);

int main() {
    int a1, b1, c1, soLonNhat1;
    int a2, b2, c2, soLonNhat2;
    
    cout << "Nhap bo so 1" << endl;
    Nhap(a1, b1, c1);
    cout << "Nhap bo so 2" << endl;
    Nhap(&a2, &b2, &c2);
    
    TimSoLonNhat(a1, b1, c1, soLonNhat1);
    TimSoLonNhat(&a2, &b2, &c2, &soLonNhat2);
    
    cout << "Bo so 1" << endl;
    Xuat(soLonNhat1);
    cout << "Bo so 2" << endl;
    Xuat(&soLonNhat2);
    
    return 0;
}

void Nhap(int &a, int &b, int &c) {
    cout << "Nhap 3 so nguyen: ";
    cin >> a >> b >> c;
}
void Nhap(int *a, int *b, int *c) {
    cout << "Nhap 3 so nguyen: ";
    cin >> *a >> *b >> *c;
}
void TimSoLonNhat(int a, int b, int c, int &soLonNhat) {
    if (a > b)
        soLonNhat = (a > c) ? a : c;
    else
        soLonNhat = (b > c) ? b : c;
}
void TimSoLonNhat(int *a, int *b, int *c, int *soLonNhat) {
    if (*a > *b)
        *soLonNhat = (*a > *c) ? *a : *c;
    else
        *soLonNhat = (*b > *c) ? *b : *c;
}
void Xuat(int soLonNhat) {
    cout << "So lon nhat trong 3 so: " << soLonNhat << endl;
}
void Xuat(int *soLonNhat) {
    cout << "So lon nhat trong 3 so: " << *soLonNhat << endl;
}
