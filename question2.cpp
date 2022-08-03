#include <iostream>
using namespace std;

int main(){
    
    int array[5] = {1, 2, 3, 4, 5};
    int index = 0;
    
    // delete from start
    
    for(int  i = 0; i < 5; i++){
        array[i] = array[i+1];
    }
    for(int i = 0; i < 5; i++){
        cout<< array[i] << endl;
    }
    
    //delete from the start
    
    for(int i = 0; i < 5; i++){
        arr[i] = arr[i+1];
    }
    for(int i = 0; i < 5; i++){
        cout<< array[i] << endl;
    }
    
    return 0;
    
}
