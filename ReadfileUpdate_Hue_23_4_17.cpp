#include <conio.h>
#include <iostream>
#include <string>
#include <string.h>
#include <fstream>
#include <vector>

using namespace std;

void deleteStr(vector<string> &str)
{
	while (!str.empty())
		str.pop_back();
}

int main()
{
	vector<string> str;
	vector<vector<string>> nhanVien;

	ifstream fi("test.txt");
	
	if (fi.fail())
		cout << "\nOpening file is error";
	else 
	{
		while (!fi.eof())
		{
			string strtam;
			getline(fi, strtam);
			str.push_back(strtam);
			if (strtam[0] == 'N' && strtam[1] == 'V' && strtam[2] != '1' && isdigit(strtam[2]))
			{
				nhanVien.push_back(str);
				deleteStr(str);
			}
		}
	}
	fi.close();

	for (int i = 0; i < nhanVien.size(); i++)
	{
		vector<string> str;
		str = nhanVien[i];
		for (int i = 0; i < str.size(); i++)
			cout << str[i] << "\n";
		cout << "\n";
	}

	_getch();

	return 0;
}