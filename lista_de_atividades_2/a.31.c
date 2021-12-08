#include <stdio.h>

int main (){
  int num,resultado;

  printf("digite o numero : ");
  scanf("%d",&num);

  resultado =  num  %  10  ;

  if (resultado == 0 ){
    printf("o %d e divisivel por 2, 5 e por 10 ",num);
  
  }else {
    resultado =  num  %  5 ;
    
    if (resultado == 0 ){
      printf("o %d e divisivel por 5 e por ",num);

    }else{
      resultado = num % 2 ;

      if(resultado == 0){
        printf("o %d e divisivel por 2 ",num);
      }else{
        printf("o %d nao e divisivel por 2 , 5 e 10",num);
      }
    }
  }



    return 0;
}