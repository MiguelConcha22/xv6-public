#include "types.h"
#include "stat.h"
#include "user.h"


int main(void){
  int variable1 = 0;
  int* virtual = &variable1;
  getPhysical(virtual);  //pasa la direccion virtual y recibe la fisica
  exit();
}
