#include <cstdlib>
#include <iostream>

using namespace std;
int main(){
setlocale(LC_ALL, "Russian");	
int sec, min, chas, d;
cout<<"Введите число секунд"<<endl;
cin>>sec;	
min=int(sec/60);
sec=sec%60;
chas=int(min/60);
min=min%60;
d=int(chas/24);
chas=chas%24;

cout <<d<<" дней "<<chas<<" часов "<<min<<" минут "<<sec<<" секунд";	
}
