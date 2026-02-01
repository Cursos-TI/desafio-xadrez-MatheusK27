#include<stdio.h>

int main(){
int t,b,r,c;
int movimento =1;

//t=torre, b=bispo, r=rainha.

for( t=0; t<5;  t++ ){
    printf("Torre a direita\n");

}


for(b=0; b<5; b++){
    printf("Bispo cima, a direita\n");
        
}


for(r=0; r<8; r++){
    printf("Rainha a esquerda\n");

}

while (movimento --)
{
    for(c=0 ; c<=2; c++){
        
        printf("baixo\n");
    }
    printf("esquerda\n");
}




}
