#include<iostream>

class Abishek{

    void print(int a){
        std::cout<<a;
    }
};

int main(){
    int a=10;
    Abishek abi;
    abi.print(a);


    return 0;
}