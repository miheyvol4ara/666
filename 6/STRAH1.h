#ifndef strah1_h
#define strah1_h
#include"strah.h"
//���⨯ ��� ����� ������
void vvod_strah();
void vvod_strah()

{
//��६����� ��� ࠡ��� �����
strah st;
//������ ��६���� ���稪� 横�� � ������⢠ �����⮢
int i, n;
//��頥� �࠭
clrscr();
//������ ������⢮ �����⮢
cout<<"������ ������⢮ �����⮢ ���客�� ��������\n";
cin>>n;
cin.get();
//���뢠�� 䠩� ��� �����
ofstream f1;
f1.open("strah.dat",ios::binary);
//� 横�� ������ ����� � ������
for(i=0;i<=n-1;i++)
{
cout<<"������ ����� �  "<<i+1<<" - � ������\n";
//��뢠�� ��⮤ ����� ���� 
st.vvod();
//�����뢠�� ����� � 䠩�
f1.write((char*) & st, sizeof st);
}
cout<<" 䠩� �ᯥ譮 ᮧ���...\n";
//������ ���� ��� ��ᬮ��
getch();
//����뢠�� 䠩�
f1.close();
}
#endif
