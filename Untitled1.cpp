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
do{
	cout<<"\n*******Kas ir nepieciesams, lai izmantot noteiktu simbolu virknes simbolu?*******";
	cout<<"\n 1. Rakstot simbolu virknes nosaukumu un kvadratiskas iekavas pievienojot vajadziga simbola numuru";
	cout<<"\n 2. Nerakstot simbolu virknes nosaukumu, bet rakstot kvadratiskas iekavas ar vajadzigo simbola numuru";
	cout<<"\n 3. Rakstot simbolu virknes nosaukumu, bet nerakstot kvadratiskâs iekavas ar vajadzigo simbola numuru";
	cout<<"\n 4. Neviens no minetajiem \n";
	cin>>a3;
	if(a3==1){
	cout<<"PAREIZI!" <<endl;
	src++;
}
}while(a3!=1);
do{
	cout<<"\n*******Kads simbols tiks izvadits******* - \nstring Vaards=""Reinis"";\ncout<<Vaards[3];\n";
	cout<<"\n 1. a";
	cout<<"\n 2. n";
	cout<<"\n 3. x";
	cout<<"\n 4. e \n";
	cin>>a4;
	if(a4==2){
	cout<<"PAREIZI!" <<endl;
	src++;
}
}while(a4!=2);
do{
	cout<<"\n*******Kas ir simbolu virkne?*******";
	cout<<"\n 1. Virkne, kura var veidot matematiskus aprekinus";
	cout<<"\n 2. Gramatu virkne";
	cout<<"\n 3. Virkne, kur atrodas if else un switch";
	cout<<"\n 4. Virkne, kura katrs simbols tiek interpretets atbilstosi ta tipam \n";
	cin>>a5;
	if(a5==4){
	cout<<"PAREIZI!" <<endl;
	src++;
}
}while(a5!=4);
do{
	cout<<"\n*******kads simbols tiks izvadits*******\n -SimboluVirkne:='asdf'\n;T1:='qwer'T2:='1234'\n;SimboluVirkne:=SimboluVirkne+T+A;";
	cout<<"\n 1. asdfqwer1234";
	cout<<"\n 2. asdf1234qwer";
	cout<<"\n 3. 1234asdfqwer";
	cout<<"\n 4. qwerasdf1234\n";
	cin>>a6;
	if(a6==1){
	cout<<"PAREIZI!" <<endl;
	src++;
}
}while(a6!=1);
do{
	cout<<"\n*******Kads ir maksimalais simbolu virknes izmers?*******";
	cout<<"\n 1. 121";
	cout<<"\n 2. 55";
	cout<<"\n 3. 255";
	cout<<"\n 4. 1250";
	cin>>a7;
	if(a7==3){
	cout<<"PAREIZI!" <<endl;
	src++;
}
}while(a7!=3);
}


