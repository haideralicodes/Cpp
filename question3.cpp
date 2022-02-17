#include <iostream>
using namespace std;
int main(){
    //delete form end of an array
    int array[5] = {1, 2, 4, 6, 8};
    for(int i = 4; i < 5; i ++){
        array[i] = array[i+1];
    }
    for(int i =0 ; i < 5; i++){
       cout<< array[i] << endl;
    }
    return 0;
}