    #include<stdio.h>
 
    

    void moverTorre(int numero){ // movimento torre
        if(numero>0){
            printf("Torre a direita\n");
            moverTorre(numero -1);
        }
    }

    void moverBispo(int numero){ // movimento bispo
        if (numero>0){
            printf("Bispo cima a direita\n");
            moverBispo(numero -1);
        }
    }
    
    void moverRainha(int numero){ //movimento rainha
        if(numero>0){
            printf("Rainha a esquerda\n");
            moverRainha(numero -1);
        }
    }


    int main(){
    moverTorre(5);
    moverBispo(5);
    moverRainha(8);

    for( int c=0 ,d=0;  c<=2 && d<=1;c++, d++){ // movimento cavalo
        printf("cavalo cima a direita\n");
    
    }
    
    for(int v =0;v<=1; v++){ // movimento bispo
        printf("Bispo cima\n");
        for(int h=0; h<=0;h++){
            printf("Bispo direita\n");
        }
    }


    return 0;
 }

