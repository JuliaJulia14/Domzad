#include <cstdlib>
#include <iostream>

using namespace std;
int main(){
setlocale(LC_ALL, "Russian");	
int sec, min, chas, d;
cout<<"������� ����� ������"<<endl;
cin>>sec;	
min=int(sec/60);
sec=sec%60;
chas=int(min/60);
min=min%60;
d=int(chas/24);
chas=chas%24;

cout <<d<<" ���� "<<chas<<" ����� "<<min<<" ����� "<<sec<<" ������";	
}
