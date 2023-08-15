#include <iostream>

using namespace std;

int main() {
	
int a;
int multiplicacion;

cout<<" cantidad de datos deseados para el arreglo"<<endl;
cin>>a;
	
	int vectorB[a], vectorC[a];
	
cout<<"Datos del arreglo"<<endl;
	
for(int i=0; i<a; i++)
	{
		
		cin>>vectorB[a];
	  } 
	  
	  cout<<"Arreglo finalizado:"<<endl;
	  
	  for(int i=0; i<a; i++)
	  
	{
		
		cout<<vectorB[a]<<"  ";
	   }
	   
	   
	cout << endl;
	cout<<" Arreglo multiplicado:"<<endl;
	
	for(int i=0; i<a; i++){
		
		multiplicacion= vectorB[a]*2;
		
		cout<<multiplicacion<<endl;
	}	

	   
	   return 0;  
}
	
