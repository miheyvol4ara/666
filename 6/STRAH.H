#ifndef strah_h
#define strah_h

#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdio.h>
#include<string.h>
//���ᠭ�� ����� ��� ���客�� ��������
class strah
{
public:
//���ᠭ�� ��६����� �����
char fio[15], data_na[11], data_ok[11];
long n_polisa;
float cena, summa;
//��⮤ ����� ������
void vvod();
//��⮤ �뢮�� ������
void vivod();
//
//��������� �����
strah();
};
//������� ��砫��� ���祭��
strah::strah()
{
n_polisa=635;
strcpy(fio, "���栭 �. �.");
strcpy(data_na,"10.02.2011");
strcpy(data_ok,"22.03.2011");
cena=500;
summa=600;
}
// ��⮤ ����� ������ 
void strah::vvod()
{
cout<<" - ����� �����: ";
cin>>n_polisa;
cin.get();
cout<<" - ��� ������: ";
cin.getline(fio,15);
cout<<" - ��� ��砫�: ";
cin.getline(data_na,11);
cout<<" - ��� ����砭��: ";
cin.getline(data_ok,11);
cout<<" - 業�:";
cin>>cena;
cout<<" - �㬬� �믫���: ";
cin>>summa;

cin.get();
}
//��⮤ �뢮�� ������
void strah::vivod()
{
cout<<"�";
cout.width(12);
cout<<n_polisa;
cout<<"�";
cout.width(15);
cout<<fio;
cout<<"�";
cout.width(11);
cout<<data_na;
cout<<"�";
cout.width(11);
cout<<data_ok;
cout<<"�";
cout.width(8);
cout<<cena;
cout<<"�";
cout.width(9);
cout<<summa;
cout<<"�\n";
}
#endif


