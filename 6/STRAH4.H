#ifndef strah4_h
#define strah4_h
#include "strah3.h"
//���⨯ ��� ���᪠ ����ᥩ
void poisk()
{
//��६����� ��� ࠡ��� �����
strah st;
//����뢠�� ��६����
int i=0;
char fio[15], data_na[11], data_ok[11];
long n_polisa;
float cena_ot, cena_do, summa_ot, summa_do;
int c, k=0;
//��頥� ��࠭
clrscr();
//������ ����� � ������ ���客�� ��������
cout<<"������ ����� ��� ���᪠ (0 �ய����� ���� �� ����): \n";
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
cout<<"�������� �����: \n";
cout<<"���������������������������������������������������������������������������ͻ\n";
cout<<"��/��  � �����  �      ���      �  ��� ��  �  ��� ��  �  業�  �  �㬬�  �\n";
cout<<"���������������������������������������������������������������������������͹\n";
//���뢠�� ����� �� 䠩��
ifstream f1("strah.dat", ios::binary);
while(f1.read((char*) & st, sizeof st))
{
c=1;
//���� �� ������ �����
if (n_polisa!=0)
{
if(st.n_polisa!=n_polisa)
c=c&&0;
k=1;
}
//���� �� ���
if (strcmp(fio,"0")!=0)
{
if (strnicmp(st.fio,fio,strlen(fio))!=0)
c=c&&0;
k=1;
}
//���� �� ��� ��砫�
if (strcmp(data_na,"0")!=0)
{
if (strnicmp(st.data_na,data_na,strlen(data_na))!=0)
c=c&&0;
k=1;
}
//���� �� ��� ����砭��
if (strcmp(data_ok,"0")!=0)
{
if (strnicmp(st.data_ok,data_ok,strlen(data_ok))!=0)
c=c&&0;
k=1;
}
//���� �� 業�
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
//���� �� �㬬� ������
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
if (c!=0 && k!=0)
{
i++;
cout<<"�";
cout.width(3);
cout<<i;
st.vivod();
}
}
//����뢠�� 䠩�
f1.close();
cout<<"���������������������������������������������������������������������������ͼ\n";
//������ ���� ��� ��ᬮ��
getch();
}
#endif


