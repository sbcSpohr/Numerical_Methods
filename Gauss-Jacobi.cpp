#include <iostream>



int main(int argc, char** argv) {

    float matriz[3][3];
    float vetor[3];
    float chute[3];
    float x;

    matriz[0][0] = 8;
    matriz[0][1] = 2;
    matriz[0][2] = 3;
    
    matriz[1][0] = 1;
    matriz[1][1] = -9;
    matriz[1][2] = 2;

    matriz[2][0] = 2;
    matriz[2][1] = 3;
    matriz[2][2] = 6;


    vetor[0] = 30;
    vetor[1] = 1;
    vetor[2] = 31;


    chute[0] = 0; //x1
    chute[1] = 0; //x2
    chute[2] = 0; //x3


    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            std::cout << matriz[i][j] << " ";
        }
        std::cout<<"\n";
    }

    vetor[0] = (vetor[0] + (matriz[0][1] * chute[1]) + (matriz[0][2] * chute[2]))/matriz[0][0];
    std::cout << vetor[0] << "\n";


    vetor[1] = (vetor[1] + (matriz[1][0] * chute[0]) + (matriz[1][2] * chute[2]))/matriz[1][1];
    std::cout << vetor[1] << "\n";

    vetor[2] = (vetor[2] + (matriz[2][0] * chute[0]) + (matriz[2][1] * chute[1]))/matriz[2][2];
    std::cout << vetor[2] << "\n";

    chute[0] = vetor[0];
    chute[1] = vetor[1];
    chute[2] = vetor[2];

    std::cout << chute[0] << "\n";
    std::cout << chute[1] << "\n";
    std::cout << chute[2] << "\n";




    return 0;
}