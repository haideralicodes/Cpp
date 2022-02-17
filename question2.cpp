#include <iostream>
using namespace std;
int main(){
    // delete from start
    int array[5] = {1, 2, 3, 4, 5};
    int index = 0;
    for(int  i = 0; i < 5; i++){
        array[i] = array[i+1];
    }
    for(int i = 0; i < 4; i++){
        cout<< array[i] << endl;
    }
           return 0;
}