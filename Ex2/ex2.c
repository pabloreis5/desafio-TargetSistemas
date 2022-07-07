#include <stdio.h>

int Fibonnaci(int num){
  int a=0, b=1, aux, control;

  printf(" %d - %d", a,b);
  while (b<num){
    aux = a+b;
    a=b;
    b=aux;
    printf(" - %d", aux);

    //Verifica igualde
    if(num == aux){
      control = 1;
    }else{
      control = 0;
    }
  }
  return control; 
}

int main(){
  int num;
  printf("Informe um numero: ");
  scanf("%d", &num);

  int control = Fibonnaci(num);
  
  if(control == 1){
    printf("\nPertence!");
  }else{
    printf("\nNao pertence!");
  }
  
  return 0;
}