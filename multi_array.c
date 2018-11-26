/**
simple 3D array example,
3D array work like a categories for product

like i have some product in two categories 1: mobile, 2: cloth

int table[2][3][3];

their:
=> 1st array containing product categories,
=> 2nd array containing product option like price,id,quantity
=> 3rd array containing value of option like price=100,id=00946583,qnt=10

*/


#include<stdio.h>

int main(){

    int table[2][3][5];

    // get product list from user
    // categories is mobile and cloth

    for(int i=0;i<2;i++){
        switch(i){
        case 0:
            printf("Set data in Mobile categories |-\n");
            break;
        case 1:
            printf("\n\nSet data in Cloth categories |-\n");
            break;
        }
        for(int j=0;j<3;j++){
            switch(j){
            case 0:
                printf("Product Id =\n");
                break;
            case 1:
                printf("Product Qnt =\n");
                break;
            case 2:
                printf("Product Price =\n");
                break;
            }
            for(int k=0;k<5;k++){
                printf("%d data: ",k+1);
                scanf("%d",&table[i][j][k]);
            }
        }
        printf("\n");
    }

    for(int i=0;i<2;i++){
            switch(i){
        case 0:
            printf("\n\nAll product from Mobile department |-\n\n");
            break;
        case 1:
            printf("\n\nAll product from Cloth department |-\n\n");
            break;
        }
        for(int k=0,j=0;k<5;k++){
            printf("Id: %d\t",table[i][j][k]);
            printf("Qnt: %d\t",table[i][j+1][k]);
            printf("Price: %d\n",table[i][j+2][k]);
        }
    }



    return 0;
}
