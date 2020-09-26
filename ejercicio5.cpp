#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

class Electrodomesticos{
	
	  private: //atributos
	  
	  string tienda;
	  string vendedor;
	  double precio;
	  
	  public: //metodos 
	  
	  Electrodomesticos(string _tienda,string _vendedor,double _precio);
	  void setElectrodomesticostienda(string _tienda);
	  string getElectrodomesticostienda();
	  void setElectrodomesticosvendedor(string _vendedor);
	  string getElectrodomesticosvendedor();
	  void setElectrodomesticosprecio(double _precio);
	  double getElectrodomesticosprecio();
	  void mostrartienda();
	  void mostrarvendedor();
	  void mostrarprecio();
};
	  
Electrodomesticos::Electrodomesticos(string _tienda,string _vendedor,double _precio){ //constructor

      tienda=_tienda;
      vendedor=_vendedor;
      precio=_precio;	
}

void Electrodomesticos::mostrartienda(){
	
	cout<<"la tienda es :"<<tienda<<endl;
}

void Electrodomesticos::mostrarvendedor(){
	
	cout<<"el vendedor es :"<<vendedor<<endl;
}

void Electrodomesticos::mostrarprecio(){
	
	cout<<"el precio es :"<<precio<<endl;
}

void Electrodomesticos::setElectrodomesticostienda(string _tienda){
	
	tienda=_tienda;
}

void Electrodomesticos::setElectrodomesticosvendedor(string _vendedor){
	
	vendedor=_vendedor;
}
void Electrodomesticos::setElectrodomesticosprecio(double _precio){
	
	precio=_precio;
}

string Electrodomesticos::getElectrodomesticostienda(){
	
	return tienda;
}

string Electrodomesticos::getElectrodomesticosvendedor(){
	
	return vendedor;
}

double Electrodomesticos::getElectrodomesticosprecio(){
	
	return precio;
}

int main(int argc, char** argv) {
	
	Electrodomesticos p1=Electrodomesticos("electromax","felipe",200000);
	p1.mostrartienda();
	p1.mostrarvendedor();
	p1.setElectrodomesticosvendedor("andres");
	cout<<" el nuevo vendedor es :"<<p1.getElectrodomesticosvendedor()<<endl;
	p1.mostrarprecio();
    cout<<endl;
	Electrodomesticos p2=Electrodomesticos("electricalme","oscar",150000);
	p2.mostrartienda();
	cout<<"no tenemos el producto en electricalme"<<endl;
	p2.setElectrodomesticostienda("electromax");
	cout<<"su pedido llegara de parte de :"<<p2.getElectrodomesticostienda()<<endl;
	p2.mostrarvendedor();
	p2.mostrarprecio();
	cout<<endl;
	Electrodomesticos p3=Electrodomesticos("electrodavid","ivan",800000);
	p3.mostrartienda();
	p3.mostrarvendedor();
	p3.mostrarprecio();
	cout<<"este producto tiene un descuento del 20%"<<endl;
	p3.setElectrodomesticosprecio(640000);
	cout<<"el precio queda en :"<<p3.getElectrodomesticosprecio()<<endl;

    getch();
	return 0;
}

























