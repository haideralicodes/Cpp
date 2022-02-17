#include <iostream>
using namespace std;
//Program for deleting number at any index of an array
int main(){     //  0, 1, 2, 3, 4 
    int array[5] = {1, 2, 3, 4, 5};
    cout<< "Enter the index number to delete the number: ";
    int index;
    cin>> index;
    for(int i = index; i < 5; i++){     // i = 2
        array[i] = array[i+1];          // array[2] = array[3]   1
    }                                   // array[3] = array[4] 
    
    for(int i =0; i < 5; i++){
        cout<< array[i] << endl;
    }
    return 0;
}