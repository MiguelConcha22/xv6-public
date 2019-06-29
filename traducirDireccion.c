#include "types.h"
#include "stat.h"
#include "user.h"


int main(void){
  int variable1 = 0;
  int* virtual = &variable1;
  int* fisica = (int*)getPhysical(&variable1);  //pasa la direccion virtual y recibe la fisica
  if(fisica != 0){
    printf(1,"Direccion virtual de la variable: %p\n", virtual);
    printf(1,"Direccion fisica de la variable: %p", fisica);
    exit();
  }else{
    printf(1,"Direccion entregada no es válida");
    exit();
  }
}
