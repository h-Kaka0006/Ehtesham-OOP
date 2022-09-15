#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include"animal.hpp"

using namespace std;

int main(){

    Animal test("red", "jungle");
    test.introduce();
    return 0;
}


//                         ----> catType
//                         |
//         ----> mamals ---|
//         |               |
// animals-|               ----> dogType
//         |
//         ----> birds ---> tootiha
//                 |
//                 ----> ghanari ha
