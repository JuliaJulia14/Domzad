#include <cstdlib>
#include <iostream>

using namespace std;
int main(){
setlocale(LC_ALL, "Russian");	
float a, b, c, d, max;
cout<<"Введите a"<<endl;
cin>>a;	
cout<<"Введите b"<<endl;
cin>>b;	
cout<<"Введите c"<<endl;
cin>>c;	
cout<<"Введите d"<<endl;
cin>>d;
max=a;
if (max<b) {
	max=b;
}	
if (max<c) {
	max=c;
}
if (max<d) {
	max=d;
}	
cout <<"Максимальное число равно "<<max;	
}
