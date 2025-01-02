#include <vector>
#include<ostream>
#include <iostream>
#include<chrono>
#include "DyV.h"
using namespace std;

int main(){
	std::vector<int> a={5,2,3,1,4};
	int x=5;
	
	auto start = std::chrono::system_clock::now();
	QuickSort(a);
	auto end = std::chrono::system_clock::now();
	std::chrono::duration<float, std::milli> duration = end - start;
	cout << "Time: " << duration.count() << "s" << endl;

	int result =BusquedaBinaria(x,a,0,a.size()-1);
	if (result != -1) {
        	std::cout << "El valor " << x << " se encuentra en la posición " << result << std::endl;
    	} else {
        	std::cout << "El valor " << x << " no se encuentra en el vector." << std::endl;
    	}
    	return 0;
}
