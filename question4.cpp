#include <iostream>
using namespace std;
int main(){     //   0, 1,  2,  3,  4, 5, 6, 7, 8, 9 
    int array[10] = {2, 10, 15, 20, 25};
    cout<< "Enter the index for entering the numbe in the array: ";
    int index;
    cin>> index;

    cout<< "Enter the number: ";
    int num;
    cin>> num;

    for(int i = 0 ; i < 10; i++){
        array[index] = num;
    }
    for(int j = 0; j < 10; j++){
        cout<< array[j] << endl;
     }
    return 0;
}