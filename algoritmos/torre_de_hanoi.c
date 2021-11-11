
#include<stdio.h>

void Mover_discos(int d, char ori ,char dest , char aux){
   if(d==1){
      //cout<<"mover disco"<<d<<"de"<<ori<<"para"<<dest<<endl;
      printf("mover disco %d de %c para % c", d,ori, dest);
   
   }else{
    Mover_discos(d-1, ori,aux ,dest);
    printf("mover disco %d de %c para % c \n", d,ori, dest);
    Mover_discos(d-1,aux ,dest ,ori);
   }
   
   
   



}


void main(){
  int discos = 4;
  Mover_discos(discos,'a','b','c');


}