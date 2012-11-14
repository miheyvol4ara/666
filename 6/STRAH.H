#ifndef strah_h
#define strah_h

#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdio.h>
#include<string.h>
//описание класса для страховой компании
class strah
{
public:
//описание переменных класса
char fio[15], data_na[11], data_ok[11];
long n_polisa;
float cena, summa;
//метод ввода данных
void vvod();
//метод вывода данных
void vivod();
//
//конструктор класса
strah();
};
//задание начальных значений
strah::strah()
{
n_polisa=635;
strcpy(fio, "Горицан Д. О.");
strcpy(data_na,"10.02.2011");
strcpy(data_ok,"22.03.2011");
cena=500;
summa=600;
}
// метод ввода данных 
void strah::vvod()
{
cout<<" - номер полиса: ";
cin>>n_polisa;
cin.get();
cout<<" - ФИО клиента: ";
cin.getline(fio,15);
cout<<" - дата начала: ";
cin.getline(data_na,11);
cout<<" - дата окончания: ";
cin.getline(data_ok,11);
cout<<" - цена:";
cin>>cena;
cout<<" - сумма выплаты: ";
cin>>summa;

cin.get();
}
//метод вывода данных
void strah::vivod()
{
cout<<"║";
cout.width(12);
cout<<n_polisa;
cout<<"║";
cout.width(15);
cout<<fio;
cout<<"║";
cout.width(11);
cout<<data_na;
cout<<"║";
cout.width(11);
cout<<data_ok;
cout<<"║";
cout.width(8);
cout<<cena;
cout<<"║";
cout.width(9);
cout<<summa;
cout<<"║\n";
}
#endif


