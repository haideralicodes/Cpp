#include <iostream>
using namespace std;
//inserting number within given array numbers
int main(){     //   0, 1,  2,  3,  4, 5, 6, 7, 8, 9 
    int array[10] = {2, 10, 15, 20, 25};
    cout<< "Enter the index for entering the numbe in the array: ";
    int index;
    cin>> index;

    cout<< "Enter the number: ";
    int num;
    cin>> num;

    for(int  i = 4 ; i >= index ; i--){
        array[i+1] = array[i];      //array[5] = array[4]
                                    //array[4] = array[3]
                                    //array[3] = array[2]
                                    //array[2] = 7
    }
            array[index] = num; 

    for(int i =0; i < 10; i++){
        cout<< array[i] << endl;
    }

    return 0;
    }