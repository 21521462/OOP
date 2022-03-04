#include "PhanSo.h"

void HienThiBangChon() {
    cout << setw(7) << " " << "CHUONG TRINH XU LY PHAN SO" << endl;
    cout << setfill('-');
    cout << setw(40) << "-" << endl;
    cout << "1. Nhap 1 phan so\n";
    cout << "2. Nhap 2 phan so\n";
    cout << "3. Rut gon 1 phan so\n";
    cout << "4. Rut gon 2 phan so\n";
    cout << "5. Xuat 1 phan so\n";
    cout << "6. Xuat 2 phan so\n";
    cout << "7. Tim phan so lon hon\n";
    cout << "8. Cong hai phan so\n";
    cout << "9. Tru hai phan so\n";
    cout << "10. Nhan hai phan so\n";
    cout << "11. Chia hai phan so\n";
    cout << "0. Thoat chuong trinh\n";
    cout << setw(40) << "-" << endl;
    cout << setfill(' ');
    cout << "Nhap lua chon cua ban: ";
}
void NhapMotPhanSo(PHANSO &ps) {
    cout << "Nhap tu so: ";
    cin >> ps.ts;
    do {
        cout << "Nhap mau so (khac 0): ";
        cin >> ps.ms;
    } while (ps.ms == 0);
    ps.daNhap = true;
}
void NhapMotPhanSo(PHANSO *ps) {
    cout << "Nhap tu so: ";
    cin >> ps->ts;
    do {
        cout << "Nhap mau so (khac 0): ";
        cin >> ps->ms;
    } while (ps->ms == 0);
    ps->daNhap = true;
}
void NhapHaiPhanSo(PHANSO &ps1, PHANSO &ps2) {
    cout << "Nhap phan so 1" << endl;
    NhapMotPhanSo(ps1);
    cout << "Nhap phan so 2" << endl;
    NhapMotPhanSo(&ps2);
}
void NhapHaiPhanSo(PHANSO *ps1, PHANSO *ps2) {
    cout << "Nhap phan so 1" << endl;
    NhapMotPhanSo(*ps1);
    cout << "Nhap phan so 2" << endl;
    NhapMotPhanSo(ps2);
}
int UCLN(int a, int b) {
    a = abs(a);
    b = abs(b);
    if (a == 0 || b == 0)
        return a + b;
    while (a != b) {
        if (a > b) a -= b;
        else b -= a;
    }
    return a;
}
int BCNN(int a, int b) {
    return abs(a) * abs(b) / UCLN(a, b);
}
void RutGonMotPhanSo(PHANSO &ps) {
    int ucln = UCLN(ps.ts, ps.ms);
    ps.ts /= ucln;
    ps.ms /= ucln;
}
void RutGonMotPhanSo(PHANSO *ps) {
    int ucln = UCLN(ps->ts, ps->ms);
    ps->ts /= ucln;
    ps->ms /= ucln;
}
void RutGonHaiPhanSo(PHANSO &ps1, PHANSO &ps2) {
    int ucln = UCLN(ps1.ts, ps1.ms);
    ps1.ts /= ucln;
    ps1.ms /= ucln;
    ucln = UCLN(ps2.ts, ps2.ms);
    ps2.ts /= ucln;
    ps2.ms /= ucln;
}
void RutGonHaiPhanSo(PHANSO *ps1, PHANSO *ps2) {
    int ucln = UCLN(ps1->ts, ps1->ms);
    ps1->ts /= ucln;
    ps1->ms /= ucln;
    ucln = UCLN(ps2->ts, ps2->ms);
    ps2->ts /= ucln;
    ps2->ms /= ucln;
}
PHANSO PhanSoLonHon(PHANSO ps1, PHANSO ps2) {
    float t = 1.0 * ps1.ts / ps1.ms - 1.0 * ps2.ts / ps2.ms;
    if (t <= 0)
        return ps2;
    else
        return ps1;
}
PHANSO TongHaiPhanSo(PHANSO ps1, PHANSO ps2) {
    PHANSO ps;
    ps.ts = ps1.ts * ps2.ms + ps2.ts * ps1.ms;
    ps.ms = ps1.ms * ps2.ms;
    
    return ps;
}
PHANSO HieuHaiPhanSo(PHANSO ps1, PHANSO ps2) {
    PHANSO ps;
    ps.ts = ps1.ts * ps2.ms - ps2.ts * ps1.ms;
    ps.ms = ps1.ms * ps2.ms;

    return ps;
}
PHANSO TichHaiPhanSo(PHANSO ps1, PHANSO ps2) {
    PHANSO ps = {
        ps1.ts * ps2.ts,
        ps1.ms * ps2.ms
    };

    return ps;
}
PHANSO ThuongHaiPhanSo(PHANSO ps1, PHANSO ps2) {
    PHANSO ps = {
        ps1.ts * ps2.ms,
        ps1.ms * ps2.ts
    };

    return ps;
}
void XuatMotPhanSo(PHANSO ps) {
    RutGonMotPhanSo(ps);
    
    if (ps.ts == 0)
        cout << 0;
    else if (ps.ms < -1)
        cout << -ps.ts << "/" << - ps.ms;
    else if (ps.ms == -1)
        cout << -ps.ts;
    else if (ps.ms == 1)
        cout << ps.ts;
    else
        cout << ps.ts << "/" << ps.ms;
}
void XuatHaiPhanSo(PHANSO ps1, PHANSO ps2) {
    RutGonHaiPhanSo(ps1, ps2);
    
    XuatMotPhanSo(ps1);
    cout << ", ";
    XuatMotPhanSo(ps2);
}
