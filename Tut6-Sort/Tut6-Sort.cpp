// Cheyenne A Pillay
// 214513360

#include <iostream> 
using namespace std;

 // create template 
template <typename Tmpl8>

// create a sort function  to sort an array given the array of integers and the array size

void sortArr(Tmpl8 arrIntegers[], int arrSize){
	int i, j;
	Tmpl8 tempArr;
	for (i = 0; i < arrSize-1; i++){

		for (j = i+1; j < arrSize; j++){
			// if array at position i is less than array at position i+1
			if (arrIntegers[i] < arrIntegers[j]){


				// swap the numbers to sort the array in descending order
				tempArr = arrIntegers[j];
				arrIntegers[j] = arrIntegers[i];
				arrIntegers[i] = tempArr;
			}

		}

	}

}


 // main method
int main(){

}