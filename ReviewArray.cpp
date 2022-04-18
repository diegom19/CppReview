#include <iostream>

using namespace std;

int main(){

	/*
	//declaring int array
	int scores[10];

	//read data
	cout << "scores [0] : " << scores << endl;
	*/

	/*
	//read with loop
	for (size_t i {0}; i < 10; ++i) {

		cout << "scores [" << i << "]:  " << scores[i] << endl;
	}*/

	/*
	//initializing array elements
	scores[0] = 4;
	scores[1] = 14;
	scores[2] = 24;

    //Print array element data
    for (size_t i {0}; i < 10; ++i) {

    cout << "scores [" << i << "]:  " << scores[i] << endl;
    }*/

    /*
    for(size_t i{0}; i<10; ++i){
        scores[i] = i * 10;

    }
    for (size_t i{0}; i < 10; ++i) {

    cout << "scores [" << i << "]:  " << scores[i] << endl;
    }
    */

    /*
    //declare and initialize at the same time
    double salaries[5] {12.7, 7.5, 13.2, 8.1, 9.3};

    for( size_t i{0}; i < 5; ++i){
        cout<< "salary[" << i << "] : " << salaries[i] << endl;
    }*/

    /*
    //if you don't initialize all the elements, those you leave out are initialized to 0
    int families[5] {12,7,5};

    for(size_t i{0}; i < 5; ++i){
        cout << "families[" << i << "] : " << families[i] << endl;
    }
    */

    /*
    //Omit the size of the array at delcaration
    int class_sizes[] {10,12,15,11,18,17};

    //Will print this with a range based for loop

    for( auto value : class_sizes){
        cout << "value : " << value << endl;
    }*/



	return 0;
}
