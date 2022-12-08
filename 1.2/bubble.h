
#ifndef BUBBLE_H
#define BUBBLE_H

#include "header.h"
#include <vector>


template <class T>
void bubbleSort(T *arr, int size) {
	for(int i = size - 1; i > 0; i--){
		for(int j = 0; j < i; j++){
			if(arr[j] > arr[j + 1]){
				swap(arr, j, j + 1);
			}
		}
	}
}


template <class T>
int bubbleSort(std::vector<T> &v) {
	int contador = 0;
	for(int i = v.size() - 1; i > 0; i--){
		for(int j = 0; j < i; j++){
			if(v[j] > v[j + 1]){
				contador++;
				swap(v, j, j + 1);
			}
		}
	}
	return contador;
}

#endif 
