#include <cstdlib>
#include <iostream>

using namespace std;
int main(){
setlocale(LC_ALL, "Russian");	
float a, b, c, d, max;
cout<<"������� a"<<endl;
cin>>a;	
cout<<"������� b"<<endl;
cin>>b;	
cout<<"������� c"<<endl;
cin>>c;	
cout<<"������� d"<<endl;
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
cout <<"������������ ����� ����� "<<max;	
}
