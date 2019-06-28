#include "types.h"
#include "stat.h"
#include "user.h"


int main(void){
  int variable1 = 0;
  int* fisica = (int*)getPhysical(&variable1);  //pasa la direccion virtual y recibe la fisica
  if(fisica != 0){
    printf(1,"Direccion fisica del proceso actual: %p", fisica);
    exit();
  }else{
    printf(1,"Direccion entregada no es válida");
    exit();
  }
}
