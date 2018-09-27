#include <iostream>
#include <string.h>

using namespace std;


int pow(int a,int b){
    if(b==0) return 1;
    int numA = a;
    for (int i = 1; i < b; i++) {
        a*=numA;
    }
    return a;
}

void binarioAdecimal(char *number){
    string num = number;
    bool flag = true;
    int position= num.length()-1;
    int potencia=0;
    int numero_final=0;
    int numero_pos = ((int)num[position]);

    while(flag){
        if(position<0){
            flag = false;
        }else{
            numero_pos =((int)num[position])-48;
            if(numero_pos == 1 || numero_pos == 0){
                numero_final += pow(2,potencia) * numero_pos;
                printf(" (2 ^ %d) * %d = %d \n",potencia,numero_pos,numero_final);

                position--;
                potencia++;
            }else {

                flag = false;
                cout<<("Ha ingresado un numero que no corresponde a la base estipulada.\n");
                system("clear");

            }//fin if2
        }//fin if1
    }//fin while
}


void octalAdecimal(char *number){
    string num = number;
    bool flag = true;
    int position= num.length()-1;
    int potencia=0;
    int numero_final=0;
    int numero_pos = ((int)num[position]);

    while(flag){
        if(position<0){
            flag = false;
        }else{
            numero_pos =((int)num[position])-48;
            if(numero_pos == 0 || numero_pos == 1 || numero_pos == 2 || numero_pos == 3 ||
                    numero_pos == 4 || numero_pos == 5 || numero_pos == 6 || numero_pos == 7 || numero_pos == 8){

                numero_final += pow(8,potencia) * numero_pos;
                printf(" (8 ^ %d) * %d = %d \n",potencia,numero_pos,numero_final);

                position--;
                potencia++;
            }else {

                flag = false;
                cout<<("Ha ingresado un numero que no corresponde a la base estipulada.\n");


            }//fin if2
        }//fin if1
    }//fin while
}


void hexadecimalAdecimal(char *number){
    string num = number;
    bool flag = true;
    int position= num.length()-1;
    int potencia=0;
    int numero_final=0;
    int numero_pos = (num[position]);

    while(flag){
        if(position<0){
            flag = false;
        }else{
            if(num[position] == '0' || num[position] == '1' || num[position] == '2' ||
                    num[position] == '3' || num[position] == '4' || num[position] == '5' ||
                    num[position] == '6' || num[position] == '7' || num[position] == '8' ||
                    num[position] =='9'){

                numero_pos =((int)num[position])-48;
                numero_final += pow(16,potencia) * numero_pos;
                printf(" (16 ^ %d) * %d = %d \n",potencia,numero_pos,numero_final);

                position--;
                potencia++;
            }
            else if (num[position] == 'A' || num[position] == 'a'){
                numero_final += pow(16,potencia) * 10;
                printf(" (16 ^ %d) * A = %d \n",potencia,numero_final);

                position--;
                potencia++;
            }
            else if (num[position] == 'B' || num[position] == 'b'){
                numero_final += pow(16,potencia) * 11;
                printf(" (16 ^ %d) * B = %d \n",potencia,numero_final);

                position--;
                potencia++;
            }
            else if (num[position] == 'C' || num[position] == 'c'){
                numero_final += pow(16,potencia) * 12;
                printf(" (16 ^ %d) * C = %d \n",potencia,numero_final);

                position--;
                potencia++;
            }
            else if (num[position] == 'D' || num[position] == 'd'){
                numero_final += pow(16,potencia) * 13;
                printf(" (16 ^ %d) * D = %d \n",potencia,numero_final);

                position--;
                potencia++;
            }
            else if (num[position] == 'E' || num[position] == 'e'){
                numero_final += pow(16,potencia) * 14;
                printf(" (16 ^ %d) * E = %d \n",potencia,numero_final);

                position--;
                potencia++;
            }
            else if (num[position] == 'F' || num[position] == 'f'){
                numero_final += pow(16,potencia) * 15;
                printf(" (16 ^ %d) * F = %d \n",potencia,numero_final);

                position--;
                potencia++;
            }
            else {

                flag = false;
                cout<<("Ha ingresado un numero que no corresponde a la base estipulada.\n");


            }//fin if2
        }//fin if1
    }//fin while
}
