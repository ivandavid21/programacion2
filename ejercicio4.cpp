#include <iostream>
using namespace std;
//Clase Persona.   Clase padre.

class Concesionario{
	
	private:  //Atributos
		string color;
		string matricula;
		int modelo;
		string acondicionado;
		
		//Metodo privado
		
	public: //Metodos
		Concesionario(string _color, string _matricula, int _modelo,string _acondicionado);
		void mostrarCarro1();
		void mostrarCarro2();
		void mostrarCarro3();
		void mostrarCarro4();
		void setConcesionario(string _nombre);
		string getConcesionario();
		
		//atributo publico
		int ciudad;
};

Concesionario::Concesionario(string _color,string _matricula, int _modelo, string _acondicionado){
	
	color=_color;
	matricula=_matricula;
	modelo=_modelo;
	acondicionado=_acondicionado;
}


/*
Concesionario::Concesionariocarro1(string _color){
	color=_color;
}
Concesionario::mostrarCarro2(string _matricula){
	matricula=_matricula;
}
Concesionario::mostrarCarro3(int _modelo){
	modelo=_modelo
}
Concesionario::mostrarCarro4(string _acondicionado){
	acondicionado=_acondicionado;
}

*/

void Concesionario::mostrarCarro1(){
	cout<<"el color es:"<<color<<endl;
}
void Concesionario::mostrarCarro2(){
	cout<<"la matricula es:"<<matricula<<endl;
}
void Concesionario::mostrarCarro3(){
	cout<<"el modelo es:"<<modelo<<endl;
}
void Concesionario::mostrarCarro4(){
	cout<<"¿el carro es acondicionado?"<<acondicionado<<endl;
	
}


//Get y set - clase concesionario.
void Concesionario::setConcesionario(string _color){
	color=_color;
}

string Concesionario::getConcesionario(){
	return color;
}


int main(int argc, char** argv) {
	
	cout<<"carro 1"<<endl;
	Concesionario carro1=Concesionario("amarillo","890 QRS",89,"no");
	carro1.mostrarCarro1();
	carro1.mostrarCarro3();
	carro1.mostrarCarro4();
	cout<<"despues de pintar carro 1"<<endl;
	carro1.setConcesionario("naranja");
	carro1.mostrarCarro1();
	carro1.getConcesionario();
	carro1.mostrarCarro1();
	
	cout<<"carro 2"<<endl;
	Concesionario carro2=Concesionario("negro","600 WRE",2000,"si");
	carro2.mostrarCarro1();
	carro2.mostrarCarro2();
	carro2.mostrarCarro3();
	carro2.setConcesionario("morado");
	carro2.mostrarCarro1();
	carro2.getConcesionario();
	carro2.mostrarCarro4();
	
	cout<<"carro 3"<<endl;
	Concesionario carro3=Concesionario("azul mate","734 JHF",2020,"si");
	carro3.mostrarCarro1();
	carro3.mostrarCarro2();
	carro3.mostrarCarro3();
	carro3.mostrarCarro4();
	
	cout<<"carro 4"<<endl;
	Concesionario carro4=Concesionario("rojo","874 HJN",76,"no");
	carro4.mostrarCarro1();
	carro4.mostrarCarro2();
	carro4.mostrarCarro3();
	carro4.mostrarCarro4();

	return 0;
}


//Crear una clase hija llamada Maestro: Atributos - clases, estacionamiento. - 
//Metodos - contructor , metodo mostrarMaestro, get y set para nombre, apellido y edad.


