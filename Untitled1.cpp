#include <iostream>
using namespace std;
int main(){

int a1, a2, a3,a4,a5,a6,a7,a8,a9,a10, src=0;
do{
cout << "Tests";
cout<<"\n*******Kurs no siem atbilzu variantiem nav simbolu virkne?*******";
cout<<"\n1. String";
cout<<"\n2. boolean";
cout<<"\n3. char";
cout<<"\n4. int\n";
cin>>a1;
if(a1==4){
	cout<<"PAREIZI!" <<endl;
	src++;
}
}while(a1!=4);
do{
	cout<<"\n*******Kas skaitas simbols?*******";
	cout<<"\n 1. Tikai skaitlis";
	cout<<"\n 2. Tikai burti";
	cout<<"\n 3. Skaitli un burti";
	cout<<"\n 4. neviens no minetajiem \n";
	cin>>a2;
	if(a2==3){
	cout<<"PAREIZI!" <<endl;
	src++;
}
}while(a2!=3);
}


