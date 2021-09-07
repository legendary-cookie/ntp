#include "../ntp.h"
#include <stdio.h>

int main() {
  time_t cur = get_current_time();
  printf("Time: %s", ctime((const time_t *)&cur));
  return 0;
}
