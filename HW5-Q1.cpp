#include <iostream>
using namespace std;

int main(){

    int m = 1;
    int Base;
    int exponent;
    cout << "Input Base(Base must be an Integer) : ";
    cin >> Base ;
    cout << "Input exponent (Exponent must be a positive non-zero integer) : ";
    cin >> exponent ;
    if (exponent <= 0){
        cout << "Invalid input for exponent,please try again...."<< endl;
    }
    else{
        for(int i=0; i<exponent; i++){
            m=m*Base;
        }
        printf("%d*%d = %d", Base,exponent,m);
    }
}