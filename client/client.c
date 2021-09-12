#include "../ntp.h"
#include <stdio.h>

int main(int argc, char **argv) {
  time_t cur;
  if (argc < 2) {
    cur = get_current_time(NULL);
  } else {
    cur = get_current_time(argv[1]);
  }
  printf("%s", ctime((const time_t *)&cur));
  return 0;
}
