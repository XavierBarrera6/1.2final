
#ifndef INSERTION_H
#define INSERTION_H

#include "header.h"
#include <vector>

template <class T>
void insertionSort(T *arr, int size) {
	for(int i = 1; i < size; i++){
		for(int j = i; j > 0 && arr[j] < arr[j - 1]; j--){
			swap(arr, j, j - 1);
		}
	}
}


template <class T>
int insertionSort(std::vector<T> &v) {
	int contador = 0;
	for(int i = 1; i < v.size(); i++){
		for(int j = i; j > 0 && v[j] < v[j - 1]; j--){
			swap(v, j, j - 1);
			contador++;
		}
	}
	return contador;
}

#endif 
