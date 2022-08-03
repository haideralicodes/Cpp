#include <iostream>
using namespace std;
int main(){     
    
    int array[10] = {2, 10, 15, 20, 25};
    
    cout<< "Enter the index for entering the number in the array: ";
    
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
