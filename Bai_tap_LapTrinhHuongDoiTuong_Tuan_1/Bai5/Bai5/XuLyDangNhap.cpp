//
//  XuLyDangNhap.cpp
//  Bai5
//
//  Created by Phuoc Thien Nguyen on 01/03/2022.
//

#include "DangNhap.h"

void Nhap(TAIKHOAN &tk) {
    cout << "Nhap ten nguoi dung: ";
    getline(cin, tk.tenNguoiDung);
    cout << "Nhap mat khau: ";
    getline(cin, tk.matKhau);
}
void Nhap(TAIKHOAN *tk) {
    cout << "Nhap ten nguoi dung: ";
    getline(cin, tk->tenNguoiDung);
    cout << "Nhap mat khau: ";
    getline(cin, tk->matKhau);
}
void KiemTraTaiKhoan(TAIKHOAN &tk) {
    const char *str1 = tk.tenNguoiDung.c_str();
    const char *str2 = tenNguoiDung.c_str();
    if (!strcmp(str1, str2)) {
        str1 = tk.matKhau.c_str();
        str2 = matKhau.c_str();
        if (!strcmp(str1, str2))
            tk.dungSai = true;
    }
}
void KiemTraTaiKhoan(TAIKHOAN *tk) {
    const char *str1 = tk->tenNguoiDung.c_str();
    const char *str2 = tenNguoiDung.c_str();
    if (!strcmp(str1, str2)) {
        str1 = tk->matKhau.c_str();
        str2 = matKhau.c_str();
        if (!strcmp(str1, str2))
            tk->dungSai = true;
    }
}
void DangNhap(TAIKHOAN &tk) {
    Nhap(tk);
    KiemTraTaiKhoan(tk);
    
    while (!tk.dungSai) {
        tk.soLanSai += 1;
        if (tk.soLanSai == 2) return;
        cout << "Sai tai khoan hoac mat khau.";
        cout << " Vui long dang nhap lai." << endl;
        Nhap(tk);
        KiemTraTaiKhoan(tk);
    }
}
void DangNhap(TAIKHOAN *tk) {
    Nhap(tk);
    KiemTraTaiKhoan(tk);
    
    while (!tk->dungSai) {
        tk->soLanSai += 1;
        if (tk->soLanSai == 2) return;
        cout << "Sai tai khoan hoac mat khau.";
        cout << " Vui long dang nhap lai." << endl;
        Nhap(tk);
        KiemTraTaiKhoan(tk);
    }
}
void Xuat(TAIKHOAN tk) {
    if (tk.soLanSai == 2) {
        cout << "Ban da nhap sai qua 3 lan.";
        cout << " Hay thu lai sau 30s." << endl;
        return;
    }
    cout << "Dang nhap thanh cong!" << endl;
}
