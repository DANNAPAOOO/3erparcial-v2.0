#include<iostream>
using namespace std;
int main (){

int horas, precio, aumento, salario;

cout<<"ingresa las horas trabajadas : ";
cin>>horas;
cout<<"ingrese el precio por hora : ";
cin>>precio;

if(horas>=40){
cout<<"tiene un aumento de 1.5%";
aumento=horas*precio*1.5;
cout<<"su salario sera : "<< aumento <<endl;
}
if(horas<40){
cout<<"su salario es : ";
salario=horas*precio;
cout<<"su salario es : " << salario << endl;
}
return 0;
}