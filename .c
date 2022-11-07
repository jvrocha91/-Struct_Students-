#include <stdio.h>
#include <stdlib.h>


 struct dev{
        int idade ;
        float peso ;
       };
    
int main() 
{
 
  struct dev aluno[3];
 
 int i;
 for(i=0;i<3;i++){

 printf("Digite a idade do aluno:     \n");
 scanf("%d", &aluno[i].idade);
 printf("Digite o peso:      \n");
 scanf("%f", &aluno[i].peso);
 
 }
 
 
 for(i=0;i<3;i++){
 printf("///--------------///\n");
 printf("A idade do aluno : %d\n",aluno[i].idade);
 printf("------------------\n");
 printf("Peso : %f\n",aluno[i].peso);
 printf("------------------\n");
 printf("\n\n\n");
 
 }
