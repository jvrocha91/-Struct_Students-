#include <stdio.h>
#include <stdlib.h>


 struct dev{
        char nome[10];
        int idade ;
        float peso ;
       };
    
int main() 
{
 
 struct dev aluno[3];
 
 int i;
 for(i=0;i<3;i++){


 printf("Nome do aluno :     \n");
 scanf("%s", &aluno[i].nome);
 printf("Digite a idade do aluno:     \n");
 scanf("%d", &aluno[i].idade);
 printf("Digite o peso:      \n");
 scanf("%f", &aluno[i].peso);
 
 }
  printf("\n\n\n");
 
 for(i=0;i<3;i++){
     
     
     if(aluno[i].idade < 18){
         printf("///--------------///\n");
         printf("O aluno e menor de idade\n");
         printf("------------------\n");
         printf("\n\n\n");
     }
     
     else if  (aluno[i].peso > 90){
         printf("///--------------///\n");
         printf("O aluno esta acima do peso\n");
         printf("------------------\n");
         printf("\n\n\n");
      
     }
  
  
     else{
         printf("///--------------///\n");   
         printf("Aluno : %s\n",aluno[i].nome);
         printf("------------------\n");
         printf("A idade do aluno : %d\n",aluno[i].idade);
         printf("------------------\n");
         printf("Peso : %.2f KG\n",aluno[i].peso);
         printf("------------------\n");
         printf("\n\n\n");
 }}
 
 return 0;
 }


