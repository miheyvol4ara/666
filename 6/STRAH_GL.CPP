#include<iostream.h>
#include<conio.h>
#include"strah6.h"
//реализация главной программы
void main()
{
textbackground(12);
textcolor(15);
//описание переменных k-выбор пункта меню; b-создание цикла меню
int k,b;
//цикл повторяется до тех пор пока b=0
b=0;
while
(b==0)
{
//очищаем экран
clrscr();
//меню пользователя
gotoxy(25,9);
cout<<"1 - создать файл\n";
gotoxy(25,10);
cout<<"2 - добавление записей в файл\n";
gotoxy(25,11);
cout<<"3 - просмотр файла\n";
gotoxy(25,12);
cout<<"4 - поиск записей в файле\n";
gotoxy(25,13);
cout<<"5 - удаление записей из файла\n";
gotoxy(25,14);
cout<<"6 - информация о разработчике программы\n";
gotoxy(25,15);
cout<<"7 - выход\n";
gotoxy(25,16);
cout<<"сделайте выбор: ";
cin>>k;
cin.get();
//обработка выбора пользователя
switch (k)
{
//создание файла
case 1:
{
vvod_strah();
break;
}
//добавление в файл
case 2:
{
dobavlenie();
break;
}
//просмотр файла
case 3:
{
vivod_strah();
break;
}
//поиск записей в файле
case 4:
{
poisk();
break;
}
//удаление записей из файла
case 5:
{
udalenie();
break;
}
//информация о разработчике
case 6:
{
infa_razr();
break;
}
//выход
case 7:
{
b=1;
break;
 default:
	    gotoxy(25,18);
	    cout<<"НЕВЕРНЫЙ ВЫБОР. ВЫБЕРИТЕ 1 - 7 ПУНКТ\n";
	    getch();
}}}}
