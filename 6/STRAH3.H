#ifndef strah3_h
#define strah3_h
#include"strah2.h"
//пртотип для добавление записей в файл
void dobavlenie()
{
//переменная для работы класса
strah st;
//переменные для счетчика цикла и количества добавляемых записей
int i, m, y=0;
//открываем файл strah.dat и bufer.dat
ifstream f1;
f1.open("strah.dat",ios::binary);
ofstream f2;
f2.open("bufer.dat",ios::binary);
//в цикле считываем данные из файла strah.dat  и записываем в bufer.dat
while(f1.read((char*) & st,sizeof st))
f2.write((char*) & st,sizeof st);
clrscr();
//описываем переменную
cout<<"введите количество добавляемых клиентов страховой компанни \n";
cin>>m;
cin.get();
//вводим данные о клиенте и записываем в файл bufer.dat
for(i=0;i<=m-1;i++)
{
cout<<"введите данные о "<<i+1<<" - м клиенте\n";
st.vvod();
f2.write((char*) & st,sizeof st);
cout<<"╔═══╦════════════╦═══════════════╦═══════════╦═══════════╦════════╦═════════╗\n";
cout<<"║п/п║  № полиса  ║      ФИО      ║  дата на  ║  дата ок  ║  цена  ║  сумма  ║\n";
cout<<"╠═══╬════════════╬═══════════════╬═══════════╬═══════════╬════════╬═════════╣\n";
{
y++;
cout<<"║";
cout.width(3);
cout<<y;
//вызываем метод класса для вывода данных
st.vivod();
}
cout<<"╚═══╩════════════╩═══════════════╩═══════════╩═══════════╩════════╩═════════╝\n";
}
//закрываем файлы
f1.close();
f2.close();
//удаляем файл strah.dat
remove("strah.dat");
//переименовываем файл bufer.dat в strah.dat
rename("bufer.dat","strah.dat");
getch();
}
#endif
