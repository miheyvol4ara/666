#ifndef strah5_h
#define strah5_h
#include "strah4.h"
//���⨯ ��� 㤠����� �����
void udalenie();
void udalenie()
{
//��६����� ��� ࠡ��� � ����ᮬ
strah st;
//����뢠�� ��६����
char fio[15], data_na[11], data_ok[11];
long n_polisa;
int nomer;
float cena_ot, cena_do, summa_ot, summa_do;
int c, k=0;
//��頥� �࠭
clrscr();
//������ ����� � ������ ���客�� ��������
cout<<"������ ����� ��� 㤠����� (0 �ய����� ���� �� ����): \n";
cout<<"  ����� �����: ";
cin>>n_polisa;
cin.get();
cout<<"  ��� ������: ";
cin.getline(fio,15);
cout<<"  ��� ��砫�: ";
cin.getline(data_na,11);
cout<<"  ��� ����砭��: ";
cin.getline(data_ok,11);
cout<<"  業� ��: ";
cin>>cena_ot;
cout<<"  業� ��: ";
cin>>cena_do;
cout<<"  �㬬� ������ ��: ";
cin>>summa_ot;
cout<<"  �㬬� ������ ��: ";
cin>>summa_do;
cin.get();
//���뢠�� 䠩� strah.dat � bufer.dat 
ifstream f1("strah.dat", ios::binary);
ofstream f2("bufer.dat", ios::binary);
//���뢠�� ����� � strah.dat � �����뢠�� � bufer.dat 
while (f1.read((char*)& st, sizeof st))
{
c=1;
//㤠����� �� ������ �����
if (n_polisa!=0)
{
if(st.n_polisa!=n_polisa)
c=c&&0;
k=1;
}
//㤠����� �� ���
if (strcmp(fio,"0")!=0)
{
if (strnicmp(st.fio,fio,strlen(fio))!=0)
c=c&&0;
k=1;
}
//㤠����� �� ��� ��砫�
if (strcmp(data_na,"0")!=0)
{
if (strnicmp(st.data_na,data_na,strlen(data_na))!=0)
c=c&&0;
k=1;
}
//㤠����� �� ��� ����砭��
if (strcmp(data_ok,"0")!=0)
{
if (strnicmp(st.data_ok,data_ok,strlen(data_ok))!=0)
c=c&&0;
k=1;
}
//㤠����� �� 業�
if (cena_ot!=0)
{
if(st.cena<cena_ot)
c=c&&0;
k=1;
}
if (cena_do!=0)
{
if(st.cena>cena_do)
c=c&&0;
k=1;
}
//㤠����� �� �㬬�
if (summa_ot!=0)
{
if(st.summa<summa_ot)
c=c&&0;
k=1;
}
if (summa_do!=0)
{
if(st.summa>summa_do)
c=c&&0;
k=1;
}
if (c==0 || k==0)
f2.write((char*)& st,sizeof st);
}
cout<<"\n";
cout<<"���������������������������������������������������������������������������ͻ\n";
cout<<"��/��  � �����  �      ���      �  ��� ��  �  ��� ��  �  業�  �  �㬬�  �\n";
cout<<"���������������������������������������������������������������������������͹\n";
st.vivod();
cout<<"���������������������������������������������������������������������������ͼ\n";
cout<<"\n";
//����뢠�� 䠩�� 
f1.close();
f2.close();
//㤠�塞 strah.dat 
remove("strah.dat");
//��२�����뢠�� bufer.dat � strah.dat 
rename("bufer.dat","strah.dat");
}
#endif
