#include<iostream.h>
#include<conio.h>
#include"strah6.h"
//ॠ������ ������� �ணࠬ��
void main()
{
textbackground(12);
textcolor(15);
//���ᠭ�� ��६����� k-�롮� �㭪� ����; b-ᮧ����� 横�� ����
int k,b;
//横� ��������� �� �� ��� ���� b=0
b=0;
while
(b==0)
{
//��頥� ��࠭
clrscr();
//���� ���짮��⥫�
gotoxy(25,9);
cout<<"1 - ᮧ���� 䠩�\n";
gotoxy(25,10);
cout<<"2 - ���������� ����ᥩ � 䠩�\n";
gotoxy(25,11);
cout<<"3 - ��ᬮ�� 䠩��\n";
gotoxy(25,12);
cout<<"4 - ���� ����ᥩ � 䠩��\n";
gotoxy(25,13);
cout<<"5 - 㤠����� ����ᥩ �� 䠩��\n";
gotoxy(25,14);
cout<<"6 - ���ଠ�� � ࠧࠡ��稪� �ணࠬ��\n";
gotoxy(25,15);
cout<<"7 - ��室\n";
gotoxy(25,16);
cout<<"ᤥ���� �롮�: ";
cin>>k;
cin.get();
//��ࠡ�⪠ �롮� ���짮��⥫�
switch (k)
{
//ᮧ����� 䠩��
case 1:
{
vvod_strah();
break;
}
//���������� � 䠩�
case 2:
{
dobavlenie();
break;
}
//��ᬮ�� 䠩��
case 3:
{
vivod_strah();
break;
}
//���� ����ᥩ � 䠩��
case 4:
{
poisk();
break;
}
//㤠����� ����ᥩ �� 䠩��
case 5:
{
udalenie();
break;
}
//���ଠ�� � ࠧࠡ��稪�
case 6:
{
infa_razr();
break;
}
//��室
case 7:
{
b=1;
break;
 default:
	    gotoxy(25,18);
	    cout<<"�������� �����. �������� 1 - 7 �����\n";
	    getch();
}}}}
