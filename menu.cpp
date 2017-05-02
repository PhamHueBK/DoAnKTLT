#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <string>
#include <fstream>
#include <vector>
#include <iostream>
#include <Windows.h>
#include <stdlib.h>
#include "menu.h"
#include "process.h"
#include "CongTy.h"
//#include "ThemNhanVien.h"
//#include "CapNhatNhanVien.h"

using namespace std;

#define Rong 25
#define Dai 80


void gotoXY (int column, int line)
{
	COORD coord;
	coord.X = column;
	coord.Y = line;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

void clrscr()
{
	CONSOLE_SCREEN_BUFFER_INFO	csbiInfo;
	HANDLE	hConsoleOut;
	COORD	Home = {0,0};
	DWORD	dummy;

	hConsoleOut = GetStdHandle(STD_OUTPUT_HANDLE);
	GetConsoleScreenBufferInfo(hConsoleOut,&csbiInfo);

	FillConsoleOutputCharacter(hConsoleOut,' ',csbiInfo.dwSize.X * csbiInfo.dwSize.Y,Home,&dummy);
	csbiInfo.dwCursorPosition.X = 0;
	csbiInfo.dwCursorPosition.Y = 0;
	SetConsoleCursorPosition(hConsoleOut,csbiInfo.dwCursorPosition);
}

int HienThi()
{
	int chon=0;
	clrscr();
	
	system("color 0A");
	cout << "\n\n";
	gotoXY(Rong/2,3);
	cout << "      *";//1
	gotoXY(Rong/2,4);
	cout << "       *";//2
	gotoXY(Rong/2,5);
	cout << "        *             *";//3
	gotoXY(Rong/2,6);
	cout << "        HH           *";//4
	gotoXY(Rong/2,7);
	cout << "       H  H        *";//5
	gotoXY(Rong/2,8);
	cout << " HH     HH        H    H   H";//6
	gotoXY(Rong/2,9);
	cout << " H H   H  H      H H   HH  H";//7
	gotoXY(Rong/2,10);
	cout << " H  H H    H     H H   HH  H";//8
	gotoXY(Rong/2,11);
	cout << "HHH H H    H    H   H  H H H";//9
	gotoXY(Rong/2,12);
	cout << " H  H H    H    HHHHH  H H H";//10
	gotoXY(Rong/2,13);
	cout << " H H   H  H    H     H H  HH";//11
	gotoXY(Rong/2,14);
	cout << " HH     HH     H     H H   H";//12
	
	gotoXY(Rong/2, 18);
	cout << "Quan ly nhan su tap doan BKAV coporation";

	gotoXY(Rong/2, 20);
	cout << "Menu";

	gotoXY(Rong/2, 22);
	cout << "1. Xem thong tin chi tiet ve BKCorporation";

	gotoXY(Rong/2, 23);
	cout << "2. Tim kiem thong tin nhan vien";

	gotoXY(Rong/2, 24);
	cout << "3. Xem tinh trang lam viec cua nhan vien";

	gotoXY(Rong/2, 25);
	cout << "4. Xem thong tin cua mot don vi";

	gotoXY(Rong/2, 26);
	cout << "5. Them nhan vien moi";

	gotoXY(Rong/2, 27);
	cout << "6. Cap nhat thong tin co ban cua nhan vien";

	gotoXY(Rong/2, 28);
	cout << "7. Thoat";

	gotoXY(Rong/2, 30);
	cout << "Ban chon: ";
	cin >> chon;

	return chon;
}

void MainProgram()
{
	DSDonVi donVi = process();
	Unit *unit = donVi.front;

	int chon = HienThi();
	int chon05;
	int n = donVi.nhanVien.size();
	int menu;

	while (chon != 7)
	{
		switch (chon)
		{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			{
				/*do
				{
					clrscr();
					cout << "\nNhan phim 5 neu muon quay lai quay lai\n";
					if (_getch() == '5')
						break;
					else 
						clrscr();

					donVi.nhanVien.push_back(NhanDuLieu(donVi.nhanVien));
					ofstream fo("test.txt");
					for (int i = 0; i < donVi.nhanVien.size(); i++)
					{
						for (int j = 0; j < donVi.nhanVien[i].size(); j++)
						{
							fo << donVi.nhanVien[i][j] << "\n";
						}
					}
					fo.close();
					do
					{
						cout << "\n1.Tro ve man hinh chinh\n2.Tiep tuc them nhan vien nua\nBan chon: ";
						cin >> chon05;
					}while(chon05 < 1 || chon05 > 2);
				}while(chon05 != 1);*/
				break;
			}
		case 6:
			{
				clrscr();
				/*cout << "\nNhan phim 5 neu muon quay lai quay lai\n";
				if (_getch() == '5')
					break;
				else 
					clrscr();
				
				CapNhatThongTin(donVi);
				ofstream fo("test.txt");
				for (int i = 0; i < donVi.nhanVien.size(); i++)
				{
					for (int j = 0; j < donVi.nhanVien[i].size(); j++){
						fo << donVi.nhanVien[i][j] << "\n";
					}
				}
				fo.close();
				_getch();*/
				break;
			}
		}
		chon = HienThi();
	}
}
