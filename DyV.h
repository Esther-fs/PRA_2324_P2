#include <vector>
#include<ostream>
#include <iostream>
using namespace std;

template<typename T>
int BusquedaBinaria(const T& x,const std::vector<T>& v,int ini,int fin){
	if (ini>fin){
		cout<<("Array no encontrado");
	}
	int medio =(ini+fin)/2;
	if (v[medio]==x){
		return medio;
	}
	else if(v[medio]>x){
		return BusquedaBinaria(x,v,ini,medio-1);
	}
	else{
		return BusquedaBinaria(x,v,medio+1,fin);
	}
}

template<typename T>	
int Particion(const std::vector<T>* v,int ini,int fin){
	T x=(*v)[fin];
	int i=ini;
	for(int j=ini;j<=(fin-1);j++){
		if((*v)[j]<= x){
			T aux =(*v)[i];
			(*v)[i]=(*v)[j];
			(*v)[j]=aux;
			i++;
		}
	}
	T aux =(*v)[i];
	(*v)[i]=(*v)[fin];
	(*v)[fin]=aux;
	return i;
}

template<typename T>
void QuickSort(const std::vector<T>* v,int ini,int fin){
	if (ini>fin){
		int pivot=Particion(v,ini,fin);
		QuickSort(v,ini,pivot-1);
		QuickSort(v,pivot+1,fin);
	}
}
