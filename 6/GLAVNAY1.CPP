Я СДЕСЬ БЫЛ
#include<iostream.h>
#include<conio.h>
#include"vvodvivod.h"
#include"remas.h"
int main()
{
clrscr();
float mas1[20], mas2[20];
int kol1, kol2,kol;
int k,b=0;
while (b==0)
{
cout<<"1 - formirovanie i vivod masiva\n";
cout<<"2 - nahogdenie srednego i sumi masiva\n";
cout<<"3 - vixod\n";
cout<<"Sdelayte vibor:";
cin>>k;
switch(k)
{
case 1:
{
cout<<"Vedite kolichestvo elementov 1-go masiva:";
cin>>kol1;
vvodmas(mas1,kol1);
vivodmas(mas1,kol1);
cout<<"\n";

cout<<"Vedite kolichestvo elementov 2-go masiva:";
cin>>kol2;
vvodmas(mas2,kol2);
vivodmas(mas2,kol2);
cout<<"\n";
cout<<"Dly prodolgeniy nagmiter lybuy klavishu...\n";
getch();
break;
}
case 2:
{
cout<<"\nSrednee znachenie elementov masiva1:"<<srmas(mas1,kol1)/kol<<"\n";
cout<<"\nSrednee znachenie elementov masiva2:"<<srmas(mas2,kol2)/kol<<"\n";
cout<<"Dly prodolgeniy nagmiter lybuy klavishu...\n";
getch();
break;
}
case 3:
{
b=1;
break;
}
}
}
return 0;
}
