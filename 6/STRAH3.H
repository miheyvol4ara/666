#ifndef strah3_h
#define strah3_h
#include"strah2.h"
//���⨯ ��� ���������� ����ᥩ � 䠩�
void dobavlenie()
{
//��६����� ��� ࠡ��� �����
strah st;
//��६���� ��� ���稪� 横�� � ������⢠ ������塞�� ����ᥩ
int i, m, y=0;
//���뢠�� 䠩� strah.dat � bufer.dat
ifstream f1;
f1.open("strah.dat",ios::binary);
ofstream f2;
f2.open("bufer.dat",ios::binary);
//� 横�� ���뢠�� ����� �� 䠩�� strah.dat  � �����뢠�� � bufer.dat
while(f1.read((char*) & st,sizeof st))
f2.write((char*) & st,sizeof st);
clrscr();
//����뢠�� ��६�����
cout<<"������ ������⢮ ������塞�� �����⮢ ���客�� �������� \n";
cin>>m;
cin.get();
//������ ����� � ������ � �����뢠�� � 䠩� bufer.dat
for(i=0;i<=m-1;i++)
{
cout<<"������ ����� � "<<i+1<<" - � ������\n";
st.vvod();
f2.write((char*) & st,sizeof st);
cout<<"���������������������������������������������������������������������������ͻ\n";
cout<<"��/��  � �����  �      ���      �  ��� ��  �  ��� ��  �  業�  �  �㬬�  �\n";
cout<<"���������������������������������������������������������������������������͹\n";
{
y++;
cout<<"�";
cout.width(3);
cout<<y;
//��뢠�� ��⮤ ����� ��� �뢮�� ������
st.vivod();
}
cout<<"���������������������������������������������������������������������������ͼ\n";
}
//����뢠�� 䠩��
f1.close();
f2.close();
//㤠�塞 䠩� strah.dat
remove("strah.dat");
//��२�����뢠�� 䠩� bufer.dat � strah.dat
rename("bufer.dat","strah.dat");
getch();
}
#endif
