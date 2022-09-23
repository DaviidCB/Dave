#include<iostream>
using namespace std;

int main()
{
	int DACB_i=0,DACB_l;
	float DACB_x,DACB_s=0;
	cout<<"ingrese el limite DACB_l="; cin>>DACB_l;
	do{
		
	cout<<"ingrese el numero DACB&x="; cin>>DACB_x;
	DACB_i=DACB_i+1;
	DACB_s=DACB_s+DACB_x;



	}while(DACB_i<DACB_l);
	cout<<"Se ingresaron "<<DACB_l<<" numeros "<< "que sumaron "<<DACB_s<<endl;
	return 0;



}
