#ifndef process_HEADER
#define process_HEADER

#include <string>
#include <iostream>

using namespace std;

struct Date
{
	int ngay;
	int thang;
	int nam;
};

struct Time
{
	int gio;
	int phut;
};

struct Node
{
	Date ngayLamViec;
	Time gioDen;
	Time gioVe;
	Node *next;
};

struct NhanVien
{
	string maNV;
	string ho;
	string ten;
	string DonVi;
	string chucvu;
	Date ngaySinh;
	string queQuan;
	string diaChi;
	string email;
	string soDienThoai;
	Date ngayVaoLam;
	NhanVien *pNext;
};

struct Unit
{
	string name;
	Unit *next;
	NhanVien *nv;
};

bool isNewStaff(string str);

Date* ConvertDate(string str);

void process();

#endif 