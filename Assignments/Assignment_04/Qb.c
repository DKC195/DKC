/*WAP to generate the follwing output:
*****
****
***
**
* */
#include <stdio.h>

int main() {
  for (int i=5; i>0; i--) {
    for (int j=6; j>i; j--) printf("*");
    printf("\n");
  }
  return 0;
}