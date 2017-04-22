#include<iostream>
#include<string>
#include<fstream>
using namespace std;
#include<string.h>
#include<conio.h>


void process()
{
	Unit *donvi=new Unit;
	donvi=NULL;
	ifstream fi("test.txt");
	if(fi.fail())
		cout<<"Khong doc duoc file"<<endl;
	NhanVien nv;
	do
	{
		if(!fi.eof())
		{
			getline(fi,chuoi);
			nv.maNV=chuoi;

		}

		if(!fi.eof())
		{
			getline(fi,chuoi);
			nv.ho=chuoi;

		}

		if(!fi.eof())
		{
			getline(fi,chuoi);
			nv.ten=chuoi;

		}

		if(!fi.eof())
		{
			getline(fi,chuoi);
			nv.DonVi=chuoi;

		}

		if(!fi.eof())
		{
			getline(fi,chuoi);
			nv.chucvu=chuoi;

		}

		if(!fi.eof())
		{
			getline(fi,chuoi);
			nv.ngaySinh=chuoi;

		}

		if(!fi.eof())
		{
			getline(fi,chuoi);
			nv.queQuan=chuoi;

		}

		if(!fi.eof())
		{
			getline(fi,chuoi);
			nv.diaChi=chuoi;

		}

		if(!fi.eof())
		{
			getline(fi,chuoi);
			nv.email=chuoi;

		}
		if(!fi.eof())
		{
			getline(fi,chuoi);
			nv.soDienThoai=chuoi;

		}

		if(!fi.eof())
		{
			getline(fi,chuoi);
			nv.ngayVaoLam=chuoi;

		}
		//Sau khi nhap thong tin tu file cua 1 nhan vien vao nv
		//Ta xem don vi do co rong hay khong, neu rong thi tao node de luu ten don vi
		//Con neu khong rong thi ta duyet xem don vi cua nhan vien do ton tai hay chua
		Unit *p=donvi;// con tro duyet danh sach don vi
		
		if(donvi==NULL)
		{
			CreateDonVi(nv.Donvi);
		}
		else
		{
			if(nv.Donvi=="BKFood")
			{
				//neu BKfood chua ton tai thi tao node don vi cho BKfood
				//neu ton tai roi thi ta xem trong don vi BKfood co nhan vien hay chua
				//neu chua co nhan vien thi phai tao node nhan vien
				//neu co nhan vien roi thi ta them node nhan vien vao danh sach nhan vien cua BKfood
				if(KiemTra(nv.Donvi))
				{
				while(p!=NULL)
				{
					if(p->next==NULL)
						break;
					p=p->next;
				}
				Unit dv=CreateNodeDonVi(nv.Donvi);
				p->next=dv;
				}
				else//neu BKfood da ton tai
				{
					//ta xem danh sach nhan vien cua BK food da ton tai hay chua
					//neu chua ton tai thi phai tao danh sach nhan vien cho BKfood
					//neu da ton tai danh sach nhan vien cua Bk food thi ta them node moi vao danh sach sinh vien cua BKfood
					
				}
				//Cac don vi khac tuong tu nhu BKfood
			}
		}
	}while(1);
}
int main()
{
	cout<<endl;
	_getch();
	return 0;
	
}
