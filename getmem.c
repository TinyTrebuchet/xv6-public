#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char *argv[])
{
  int mem_usage = getmem();

  printf(1, "Memory usage: %d KB\n", mem_usage/1024);

  exit();
}
