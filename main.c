/******************************************************************************

Elabore um algoritmo que receba uma frase e faça a criptrografia da seguinte
forma a -> 1, e-> 2, i->3, o->4, u->5.
Construa a função de criptografar e a função de decriptografar.

*******************************************************************************/
#include <stdio.h>  /******* Biblioteca padrão do C de entrada e saída ****/

void criptografar(char frase[50]){
   int i = 0;
   while(frase[i] != '\n'){
       if(frase[i] == 'a'){
           frase[i] = '1';
       }else if (frase[i] == 'e'){
           frase[i] = '2';
       }else if (frase[i] == 'i'){
           frase[i] = '3';
       }else if (frase[i] == 'o'){
           frase[i] = '4';
       }else if (frase[i] == 'u'){
           frase[i] = '5';
       }
       i++;
   }
}   

void decriptografar(char frase[50]){
   int i = 0;
   while(frase[i] != '\n'){
       if(frase[i] == '1'){
           frase[i] = 'a';
       }else if (frase[i] == '2'){
           frase[i] = 'e';
       }else if (frase[i] == '3'){
           frase[i] = 'i';
       }else if (frase[i] == '4'){
           frase[i] = 'o';
       }else if (frase[i] == '5'){
           frase[i] = 'u';
       }
       i++;
   }
}   

int main()
{
   char frase[50];
   printf("Informe uma frase");
   fgets(frase, 50, stdin);
   
   criptografar(frase);
   printf("Frase criptografada: %s", frase);
   decriptografar(frase);
   printf("Frase decriptografada: %s", frase);
   return 0;
}
