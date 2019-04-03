#include "param.h"
#include "types.h"
#include "stat.h"
#include "user.h"
#include "fs.h"
#include "fcntl.h"
#include "syscall.h"
#include "traps.h"
#include "memlayout.h"

int main(void){
  printf(1, "La cantidad de procesor en ejecucion en la CPU es: %i\n", getprocs());
}
