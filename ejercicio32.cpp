#include<iostream>
using namespace std;
int main (){

int num[5];
int numero;


for(int i=-0;i<5;i++){
cout<<"digite el primer numero para la posicion "<<i+1<<endl;
cin>>numero;
num[i]=numero;
}
for(int i=-0;i<5;i++){
cout<<"\nel dato de la posicion " << i+1 << " es\n" <<num[i];

}
return 0;
}