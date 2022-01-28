#include <stdio.h>
 
int main() {
    char inicio[3],final[3];
    int inicio_dia,inicio_hora,inicio_minuto,inicio_segundo,final_dia,final_hora,final_minuto,final_segundo,dia,hora,minuto,segundo;
    
    scanf("%s %d",inicio,&inicio_dia);
    scanf("%d : %d : %d",&inicio_hora,&inicio_minuto,&inicio_segundo);
    scanf("%s %d",final,&final_dia);
    scanf("%d : %d : %d",&final_hora,&final_minuto,&final_segundo);
    

    minuto = final_minuto -  inicio_minuto ;
    
    
    
    if(inicio_dia < final_dia){
        //! um dia 
        if((final_hora >= inicio_hora) && (final_minuto >= inicio_minuto ) && (final_segundo > inicio_segundo) ){
            dia  = final_dia - inicio_dia ;
            hora =  final_hora - inicio_hora ;
            minuto = final_minuto - final_minuto;
            segundo = final_segundo - inicio_segundo;
            
            if(dia<0 ||hora < 0 || minuto < 0 || segundo < 0 ){

                printf("%d dias(s)\n%d horas(s)\n%d minuto(s)\n%d segundo(s)\n",dia,hora,minuto,segundo);

            }
            

        }else{
            dia = final_dia - inicio_dia - 1 ;
            hora =  24 + (final_hora - inicio_hora)  ;
            //minuto = final_minuto - final_minuto;
            segundo = final_segundo - inicio_segundo;
            printf("%d dias(s)\n%d horas(s)\n%d minuto(s)\n%d segundo(s)\n",dia,hora,minuto,segundo);
        }
    }else{
        printf("erro de digitacao ");
    }
    
    
    return 0;
}