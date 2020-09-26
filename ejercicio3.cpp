#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

class Cliente{
	
	private:    //Atributos = caracteristicas
		int numero;
	    string nombre;
	
	public:    //metodos  = funciones
		Cliente(int _numero,string _nombre); //constructor
		void setNombre(string _nombre);
        string getNombre();
        void mostrar();
     
};

// Funcionalidades de los métodos
Cliente::Cliente(int N,string _nombre){  //constructor!!!!!!!
	
	numero=N;
	nombre=_nombre;

}
void Cliente::mostrar(){
	
	cout<<"el numero del cliente es:"<<numero<<endl;
    cout<<"el nombre del cliente  es:"<<nombre<<endl;
}

void Cliente::setNombre(string _nombre){
	
	nombre=_nombre;
}

string Cliente::getNombre(){
	
	return nombre;
}

int main(int argc, char** argv) {
	
	int n,c,x;
	char nombre[20];

	Cliente p1=Cliente(38,"jose andres");
	Cliente p2=Cliente(24,"ivan david");
	Cliente p3=Cliente(22,"gringo");
	Cliente p4=Cliente(89,"tarzan");
	Cliente p5=Cliente(00,"anonimo");
	
	
	cout<<"bienvenido al sistema de informacion"<<endl;
	cout<<"para seleccionar cliente pulsa 1"<<endl;
	cout<<"para insertar cliente pulse 2"<<endl;
	cout<<"para borrar cliente pulsa 3 "<<endl;
	cout<<"para salir pulsa 4"<<endl;
	cin>>n;
	
	switch (n){
		
		case 1: cout<<"seleccione el numero de cliente"<<endl;
		        cin>>c;
		        switch (c){
		        	
		        	case 38: p1.mostrar();
		        	         break;
		        	case 24: p2.mostrar();
					         break;
					case 22: p3.mostrar();
					         break;
					case 89: p4.mostrar();
					         break;         
				}
		       
		        break;
		         
		case 2:  p5.mostrar();
		         cout<<"digite el nuevo nombre "<<endl;
		         cin.getline(nombre,20,'\n');
		         p5.setNombre("nombre");
		         cout<<p5.getNombre()<<endl;
		         break;
		        
		        
		        
		        
		case 3: cout<<"dgite el numeor de cliente que desea borrar"<<endl;
		        cin>>x;
		        switch (x){
		        	
		        	case 38: p1.mostrar();
		        	         p1.setNombre("nombre borrado");
		        	         cout<<"el nombre fue:"<<p1.getNombre()<<endl;
		        	         break;
		        	case 24: p2.mostrar();
		        	         p2.setNombre("nombre borrado");
		        	         cout<<"el nombre fue:"<<p2.getNombre()<<endl;
					         break;
					case 22: p3.mostrar();
					         p3.setNombre("nombre borrado");
					         cout<<"el nombre fue:"<<p3.getNombre()<<endl;
					         break;
					case 89: p4.mostrar();
					         p4.setNombre("nombre borrado");
					         cout<<"el nombre fue borrado:"<<p4.getNombre()<<endl;
					         break;
					         }					           
		                     break;
		        
	              	case 4:cout<<"estas fuera del sistema"<<endl;
		                   break;
	}

	getch();
	return 0;
}



