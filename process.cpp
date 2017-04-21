#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <fstream>
#include <vector>
#include "process.h"

using namespace std;

bool isNewStaff(string str)
{
	strlwr((char*)str.c_str());
	if (str[0] == 'n' && str[1] == 'v'&& isdigit(str[2]))
		return true;
	else 
		return false;
}

Date* ConvertDate(string str)
{
	Date *dt = new Date;
	string ngay;
	string thang;

	for (int i = 0; i < str.find('/'); i++)
		ngay.push_back(str[i]);

	str.erase(0, str.find('/')+1);
	for (int i = 0; i < str.find('/'); i++)
		thang.push_back(str[i]);

	str.erase(0, str.find('/')+1);
	string nam = str;

	int Ngay = atoi((char*)ngay.c_str());
	int Thang = atoi((char*)thang.c_str());
	int Nam = atoi((char*)nam.c_str());

	dt->ngay = Ngay;
	dt->thang = Thang;
	dt->nam = Nam;

	return dt;
}

Time* ConvertTime(string str)
{
	Time *tm = new Time;
	string gio;
	string phut;
	int Gio;
	int Phut;

	for (int i = 0; i < str.find(':'); i++)
		gio.push_back(str[i]);

	str.erase(0, str.find(':')+1);
	phut = str;

	Gio = atoi((char*)gio.c_str());
	Phut = atoi((char*)phut.c_str());

	tm->gio = Gio;
	tm->phut = Phut;

	return tm;
}

void process()
{
	vector<string> nhanVien;
	string chuoiTam;

	ifstream fi("test.txt");
	if (fi.fail())
		cout << "\nLoi doc file";
	else
	{
		while (!fi.eof())
		{
			getline(fi, chuoiTam);
			if (!isNewStaff(chuoiTam) && nhanVien.size() >= 0)
			{
				break;
			}

			nhanVien.push_back(chuoiTam);
		}
	}
	

	for (int i = 0; i < nhanVien.size(); i++)
		cout << nhanVien[i] << "\n";
	fi.close();
}