#include "PhanSo.h"

int main() {
    PHANSO ps1, ps2;
    int luaChon;
    
    do {
        HienThiBangChon();
        cin >> luaChon;
        
        switch (luaChon) {
            case 0:
                cout << "Dang thoat chuong trinh...";
                break;
            case 1:
                NhapMotPhanSo(ps1);
                cout << "Phan so da duoc luu.";
                break;
            case 2:
                NhapHaiPhanSo(ps1, ps2);
                cout << "Hai phan so da duoc luu.";
                break;;
            case 3:
                if (!ps1.daNhap) {
                    cout << "Ban chua nhap phan so nao.";
                    break;
                }
                RutGonMotPhanSo(ps1);
                cout << "Phan so da duoc rut gon.";
                break;
            case 4:
                if (!ps1.daNhap || !ps2.daNhap) {
                    cout << "Ban chua nhap du hai phan so.";
                    break;
                }
                RutGonHaiPhanSo(ps1, ps2);
                cout << "Hai phan so da duoc rut gon.";
                break;
            case 5:
                if (!ps1.daNhap) {
                    cout << "Ban chua nhap phan so nao.";
                    break;
                }
                cout << "Phan so da nhap: ";
                XuatMotPhanSo(ps1);
                break;;
            case 6:
                if (!ps1.daNhap || !ps2.daNhap) {
                    cout << "Ban chua nhap du hai phan so.";
                    break;
                }
                cout << "Hai phan so da nhap: ";
                XuatHaiPhanSo(ps1, ps2);
                break;
            case 7:
                if (!ps1.daNhap || !ps2.daNhap) {
                    cout << "Ban chua nhap du hai phan so.";
                    break;
                }
                cout << "Phan so lon hon la: ";
                XuatMotPhanSo(PhanSoLonHon(ps1, ps2));
                break;
            case 8:
                if (!ps1.daNhap || !ps2.daNhap) {
                    cout << "Ban chua nhap du hai phan so.";
                    break;
                }
                XuatMotPhanSo(ps1); cout << " + "; XuatMotPhanSo(ps2); cout << " = ";
                XuatMotPhanSo(TongHaiPhanSo(ps1, ps2));
                break;
            case 9:
                if (!ps1.daNhap || !ps2.daNhap) {
                    cout << "Ban chua nhap du hai phan so.";
                    break;
                }
                XuatMotPhanSo(ps1); cout << " - "; XuatMotPhanSo(ps2); cout << " = ";
                XuatMotPhanSo(HieuHaiPhanSo(ps1, ps2));
                break;
            case 10:
                if (!ps1.daNhap || !ps2.daNhap) {
                    cout << "Ban chua nhap du hai phan so.";
                    break;
                }
                XuatMotPhanSo(ps1); cout << " x "; XuatMotPhanSo(ps2); cout << " = ";
                XuatMotPhanSo(TichHaiPhanSo(ps1, ps2));
                break;
            case 11:
                if (!ps1.daNhap || !ps2.daNhap) {
                    cout << "Ban chua nhap du hai phan so.";
                    break;
                }
                XuatMotPhanSo(ps1); cout << " : "; XuatMotPhanSo(ps2); cout << " = ";
                XuatMotPhanSo(ThuongHaiPhanSo(ps1, ps2));
                break;
                
            default:
                cout << "Ban da chon sai. Hay chon lai.";
                break;
        }
        cout << endl;
    } while (luaChon);
    
    return 0;
}
