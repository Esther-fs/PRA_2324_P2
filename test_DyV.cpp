#include <vector>
#include<ostream>
#include <iostream>
#include<chrono>
#include "DyV.h"
using namespace std;

int main(){
	vector<int> a={5,2,3,1,4};
	vector<char> b={'a','f','c','d','w'};
	vector<double> c={1.2,2.3,5.4,9.7,2.9};
	int x=5;
	int result= -1;

	//prueba QuikSort
	auto startInt = std::chrono::system_clock::now();
	QuickSort(&a,0,a.size()-1);
	auto end = std::chrono::system_clock::now();
	std::chrono::duration<float, std::milli> durationInt = endInt - startInt;
	cout << "Time: " << durationInt.count() << "s" << endl;
	
	//prueba Busqueda binaria
	result = BusquedaBinaria(2,a,0,a.size()-1);
	
	if (result != -1) {
        	std::cout << "El valor " << x << " se encuentra en la posición " << result << std::endl;
    	} else {
        	std::cout << "El valor " << x << " no se encuentra en el vector." << std::endl;
    	}
    	
    	//Repeticion de las pruebas con otros vectores
    	auto startChar = std::chrono::system_clock::now();
	QuickSort(&b,0,b.size()-1);
	auto endChar = std::chrono::system_clock::now();
	std::chrono::duration<float, std::milli> duration = endChar - startChar;
	cout << "Time: " << duration.count() << "s" << endl;

	result =BusquedaBinaria('w',b,0,b.size()-1);
	
	if (result != -1) {
        	std::cout << "El caracter " << x << " se encuentra en la posición " << result << std::endl;
    	} else {
        	std::cout << "El valor " << x << " no se encuentra en el vector." << std::endl;
    	}
    	
    	
    	auto startDouble = std::chrono::system_clock::now();
	QuickSort(&c,0,c.size()-1);
	auto endDouble = std::chrono::system_clock::now();
	std::chrono::duration<float, std::milli> durationDouble = endDouble - startDouble;
	cout << "Time: " << duration.count() << "s" << endl;
	
	//prueba Busqueda binaria Falla
	result =BusquedaBinaria(9.0,c,0,c.size()-1);
	
	if (result != -1) {
        	std::cout << "El valor " << x << " se encuentra en la posición " << result << std::endl;
    	} else {
        	std::cout << "El valor " << x << " no se encuentra en el vector." << std::endl;
    	}
    	return 0;
}
