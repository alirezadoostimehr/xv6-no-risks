#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(int argc, char *argv[]) {
  if(argc != 2){
    fprintf(2, "Usage: revrev <string>\n");
    exit(1);
  }
  revrev(argv[1]);
  exit(0);
}
