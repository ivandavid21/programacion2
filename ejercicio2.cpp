#include <iostream>
using namespace std;

class Serie{
	
	private:    //Atributos = caracteristicas
		string titulo;
	    int temporada;
	    string estado;
	    string genero;
	    string fecha;
	    int ano;
	
	public:    //metodos  = funciones
		Serie(string _titulo,int _temporada, string _estado, string _genero,string _fecha,int _ano);    //constructor
		void leer();
		void escribir();
		void correr();

};

// Funcionalidades de los métodos
Serie::Serie(string N,int E, string T, string G,string F, int A){    //constructor!!!!!!!
	
	titulo=N;
	temporada=E;
	estado=T;
    genero=G;
    fecha=F;
    ano=A;
	
	
}

void Serie::correr(){

	cout<<"el titulo es: "<<titulo<<endl;
	cout<<"la temporada es:"<<temporada<<endl;
	cout<<"el estado se encuentra:"<<estado<<endl;
	cout<<"el genero es:"<<genero<<endl;
	cout<<"la fecha es:"<<fecha<<endl;
	cout<<"el ano es:"<<ano<<endl;
	
	
}

void Serie::leer(){
	int h=10;
    cout<<"el titulo es: "<<titulo<<endl;
	cout<<"la temporada es:"<<temporada<<endl;
	cout<<"el estado se encuentra:"<<estado<<endl;
	cout<<"el genero es:"<<genero<<endl;
	cout<<"la fecha es:"<<fecha<<endl;
	cout<<"el ano es:"<<ano<<endl;
}

void Serie::escribir(){
	
	cout<<"el titulo es: "<<titulo<<endl;
	cout<<"la temporada es:"<<temporada<<endl;
	cout<<"el estado se encuentra:"<<estado<<endl;
	cout<<"el genero es:"<<genero<<endl;
	cout<<"la fecha es:"<<fecha<<endl;
	cout<<"el ano es:"<<ano<<endl;
}



int main(int argc, char** argv) {
	
	cout<<"SERIE 1"<<endl;
	//Creo el objeto y lo inicializo.
	Serie p1=Serie("crepusculo",4,"aceptado","supervivencia","22/04/2000",2020);
	
	//utilizo los métodos
	p1.correr();

	
	cout<<"SERIE 2"<<endl;
	Serie p2=Serie("lucifer",5,"negado","drama","22/02/99",2020);
	p2.leer();
	
	
	cout<<"SERIE 3"<<endl;
	Serie p3=Serie("naruto",23,"aceptado","anime","15/09/2009",2020);
	p3.escribir();
	
	return 0;
}

