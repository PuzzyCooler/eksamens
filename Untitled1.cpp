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
}
while(a1!=4);
}
