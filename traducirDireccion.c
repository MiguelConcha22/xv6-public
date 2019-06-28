#include "types.h"
#include "stat.h"
#include "user.h"


int main(void){
    int fisica = getPhysical();
    if(fisica == 0){
        printf(1,"La direccion entregada no es válida");
        exit();
    }
    else{
        printf(1,"Direccion virtual traducida a fisica: %x", fisica);
        exit();
    }
}
