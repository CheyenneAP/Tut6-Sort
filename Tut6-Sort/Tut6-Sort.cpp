// Cheyenne A Pillay
// 214513360

#include <iostream>
using namespace std;

 // create template to sort
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

 // new template to display
template <typename T>
void disp(T arr[], int size) {
	for (int i = 0; i < size; i++){
		cout << arr[i] << endl;
		
	}
}


 // main method
int main(){

	// testing the template program
	cout << " The following arrays below are sorted in Decending order" << endl; 
	cout << endl;
	// create an array to populate the function with
	int array1[5] = {1,5,4,6,2};
	cout << "unsorted Integer array" << endl;
	disp(array1, 5);
	cout << endl;
	sortArr(array1, 5);
	cout << "sorted Integer array" << endl;
	disp(array1, 5);
	cout <<" ________________________________________________________________________" << endl;

	char array2[5] = { 'a', 'm', 'z', 'r', 'q' };
	cout << "unsorted character array" << endl;
	disp(array2, 5);
	cout << endl;
	sortArr(array2, 5);
	cout << "sorted character array" << endl;
	disp(array2, 5);

	cout << " ________________________________________________________________________" << endl;

	// create a double array to test the methods with 
	double array3[5] = { 1.52, 1.36, 0.25, 0.85, 2.15 };
	cout << "unsorted decimal array" << endl;
	disp(array3, 5);
	cout << endl;
	sortArr(array3, 5);
	cout << "sorted decimal array" << endl;
	disp(array3, 5);

	cout << " ________________________________________________________________________" << endl;
	
	cout << "end of program" << endl;
}