 #include <iostream>
#include <string>
#include <conio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;




int main(int argc, char** argv) {
	
	double p,l;
	cout<<" ingrese el numero de la cantidad de piezas a procesar"<<endl;
	cin>>p;
	
	for(int j=0;j<p;j++){
		
		cout<<"ingrese la longitud de la barra"<<endl;
		cin>>l;
    
	if(l>=1.20 & l<=1.30){
	
	cout<<"es apta"<<endl;
  
    } 
	else{
		
	cout<<"no es apta"<<endl;
    
	}
    }
    
	getch();
	
	return 0;
}
