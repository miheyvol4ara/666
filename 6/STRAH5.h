#ifndef strah5_h
#define strah5_h
#include "strah4.h"
//прототип для удаления записи
void udalenie();
void udalenie()
{
//переменная для работы с классом
strah st;
//описываем переменные
char fio[15], data_na[11], data_ok[11];
long n_polisa;
int nomer;
float cena_ot, cena_do, summa_ot, summa_do;
int c, k=0;
//очищаем экран
clrscr();
//вводим данные о клиенте страховой компании
cout<<"введите данные для удаления (0 пропустить поиск по полю): \n";
cout<<"  номер полиса: ";
cin>>n_polisa;
cin.get();
cout<<"  ФИО клиента: ";
cin.getline(fio,15);
cout<<"  дата начала: ";
cin.getline(data_na,11);
cout<<"  дата окончания: ";
cin.getline(data_ok,11);
cout<<"  цена от: ";
cin>>cena_ot;
cout<<"  цена до: ";
cin>>cena_do;
cout<<"  сумма оплаты от: ";
cin>>summa_ot;
cout<<"  сумма оплаты до: ";
cin>>summa_do;
cin.get();
//открываем файл strah.dat и bufer.dat 
ifstream f1("strah.dat", ios::binary);
ofstream f2("bufer.dat", ios::binary);
//считываем данные с strah.dat и записываем в bufer.dat 
while (f1.read((char*)& st, sizeof st))
{
c=1;
//удаление по номеру полиса
if (n_polisa!=0)
{
if(st.n_polisa!=n_polisa)
c=c&&0;
k=1;
}
//удаление по ФИО
if (strcmp(fio,"0")!=0)
{
if (strnicmp(st.fio,fio,strlen(fio))!=0)
c=c&&0;
k=1;
}
//удаление по дате начала
if (strcmp(data_na,"0")!=0)
{
if (strnicmp(st.data_na,data_na,strlen(data_na))!=0)
c=c&&0;
k=1;
}
//удаление по дате окончания
if (strcmp(data_ok,"0")!=0)
{
if (strnicmp(st.data_ok,data_ok,strlen(data_ok))!=0)
c=c&&0;
k=1;
}
//удаление по цене
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
//удаление по сумме
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
cout<<"╔═══╦════════════╦═══════════════╦═══════════╦═══════════╦════════╦═════════╗\n";
cout<<"║п/п║  № полиса  ║      ФИО      ║  дата на  ║  дата ок  ║  цена  ║  сумма  ║\n";
cout<<"╠═══╬════════════╬═══════════════╬═══════════╬═══════════╬════════╬═════════╣\n";
st.vivod();
cout<<"╚═══╩════════════╩═══════════════╩═══════════╩═══════════╩════════╩═════════╝\n";
cout<<"\n";
//закрываем файлы 
f1.close();
f2.close();
//удаляем strah.dat 
remove("strah.dat");
//переименовываем bufer.dat в strah.dat 
rename("bufer.dat","strah.dat");
}
#endif
