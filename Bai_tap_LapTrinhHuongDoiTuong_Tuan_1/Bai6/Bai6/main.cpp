//
//  main.cpp
//  Bai6
//
//  Created by Phuoc Thien Nguyen on 03/03/2022.
//

#include "KyTu.h"

int main() {
    KYTU kyTu1, kyTu2;
    char luaChon;
    
    do {
        HienThiBangChon();
        cin >> luaChon;
        
        switch (luaChon) {
            case '0':
                cout << "Dang thoat chuong trinh...";
                break;
            case '1':
                NhapMotKyTu(kyTu1);
                cout << "Ky tu da duoc luu.";
                break;
            case '2':
                NhapHaiKyTu(kyTu1, kyTu2);
                cout << "Hai ky tu da duoc luu.";
                break;
            case '3':
                if (!kyTu1.daNhap) {
                    cout << "Ban chua nhap ky tu nao.";
                    break;
                }
                XuatMotKyTu(kyTu1);
                break;
            case '4':
                if (!kyTu1.daNhap || !kyTu2.daNhap) {
                    cout << "Ban chua nhap du hai ky tu";
                    break;
                }
                XuatHaiKyTu(kyTu1, kyTu2);
                break;
                
            default:
                cout << "Ban da chon sai. Hay chon lai.";
                break;
        }
        cout << endl;
    } while (luaChon != '0');
    
    return 0;
}
