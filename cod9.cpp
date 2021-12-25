#include<iostream>
#include<conio.h>
using namespace std;

void ingresoDatos(int N, float notas){
	for(int i=0;i<*N;i++){
		cout<<"ingrese nota"<<i+1<<" : ";
		cin>>notas[i];
	}
	
}

void salidaDatos(int N, float notas){
	for(int i=0;i<*N;i++){
		cout<<"Nota "<<i+1<<" : "<<notas[i]<<endl;
	}
}

void promedioNotas(int N, float notas){
	int pos;
	float suma=0,prom;
	float menor=notas[0];
	for(int i=1;i<*N;i++){
		if(menor>notas[i]){
			menor=notas[i];
			pos=i;
		}
	}
	for(int i=0;i<*N;i++){
		if(pos!=i)
			suma+=notas[i];
	}
	prom=suma/(float)(*N-1);
	cout<<"el promedio es: "<<prom<<endl;
	cout<<"el valor desestiamdo : "<<menor<<endl;
	cout<<"esta en la posicion : "<<pos;		
}
int main(){
	int N=6;
	float* notas;
	notas= new float[N];
	ingresoDatos(&N,notas);
	salidaDatos(&N,notas);
	promedioNotas(&N,notas);
	delete[]notas;
	
	getch();
	return 0;
}
