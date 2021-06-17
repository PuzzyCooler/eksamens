#include <iostream>
using namespace std;
int main(){

int a1, a2, a3, src=0;
do{
cout << "Tests";
cout<<"\n*******Kurs no siem atbilzu variantiem nav simbolu virkne?*******";
cout<<"\n1. String";
cout<<"\n2. boolean";
cout<<"\n3. char";
cout<<"\n4. int\n";
cin>>a1;
if(a1==4){
	src++;
}
	cout<<"\n*******Kas skaitas simbols?*******";
	cout<<"\n 1. Tikai skaitlis";
	cout<<"\n 2. Tikai burti";
	cout<<"\n 3. Skaitli un burti";
	cout<<"\n 4. neviens no minetajiem \n";
	cin>>a2;
	if(a2==3){
	src++;
}
}while(a1!=4 && a2!=3);
}
