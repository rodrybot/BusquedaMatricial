
#include <iostream>

using namespace std;

int main () {
	
	int Matrix[5][3]; 		// declaracion de matriz tamaño 3X5
	int col, fil;			// declaracion de variable para columna y fila
	

	for (fil = 0; fil < 5; fil++){
		for (col = 0; col < 3; col++){						
			Matrix[fil][col] = fil * col;
		}
	}
	
	cout << "Impresion de Matriz" << endl;
	
	for (fil = 0; fil < 5; fil++){
		for (col = 0; col < 3; col++){						
			cout << "|" << Matrix[fil][col] << "|";
		}
		cout<<"\n";		
	}	
	
	int Busqueda;
	int semaforo, contador = 0;
	cout << "Ingrese el valor a buscar en la matrix: ";
	cin >> Busqueda;
	
	for (fil = 0; fil < 5; fil++){
		for (col = 0; col < 3; col++){
			if (Busqueda == Matrix[fil][col]){				
				semaforo = 1;
				contador++;			
			}										
		}			
	}	
	
	cout << "Existem " << contador << " numero(s) encontrados en la matriz" << endl;
	
	if (semaforo == 0){
		cout << "El numero buscado no existe en la matriz";
	}
	
	char yn;
	cout << "Quieres saber las dimensiones de la matriz? press $yes/$no ";
	cin >> yn;
	
	if (yn == 'y'){
		for (fil = 0; fil < 5; fil++){
		for (col = 0; col < 3; col++){
			if (Busqueda == Matrix[fil][col]){				
			cout << "El numero fue encontrado en " << fil <<"," << col << " de la matriz" << endl;
		}
	}
}
}
	return 0;		
}
