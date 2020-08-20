#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

void programa(int &a1,int &b1,int &c1,int &d1);

int main(int argc, char** argv) {
	
	int a1,b1,c1,d1;
	
	cout<<"ingrese un numero"<<endl;
	cin>>a1;
	cout<<"ingrese un numero"<<endl;
	cin>>b1;
	cout<<"ingrese un numero"<<endl;
	cin>>c1;
	cout<<"ingrese un numero"<<endl;
	cin>>d1;
	
	programa(a1,b1,c1,d1);
	
	
	return 0;
}

void programa(int &a1,int &b1,int &c1,int &d1){
	
	
	int r = (a1+b1+c1+d1)/4;
	
	cout<<r<<endl;
	
}
