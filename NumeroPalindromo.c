#include <stdlib.h>
#include <stdio.h>

int analizarNum(int num, int reverso){
  int aux;
  if (num == 0)
  {
    return reverso;
  }

  aux = num % 10;
  reverso = reverso * 10 + aux;

  return analizarNum(num / 10, reverso);
}

int responderUsuario(int num, int reverso){
  if (num >= 0 && analizarNum(num, reverso) == num)
  {
    printf("\nEs palindromo\n");
  }else{
    printf("\nNo es palindromo\n", reverso);
  }
}

int guardarNumero(){
  int num, reverso = 0;
  printf("\nEscribe el numero entero: \n");
  scanf("%d", &num);
  printf("\nTu numero es %d", num);
  responderUsuario(num, reverso);
  return 0;
}

int main(int argc, char const *argv[])
{
  int c;
  do{
  guardarNumero();
  }while(c != 0);
  return 0;
}