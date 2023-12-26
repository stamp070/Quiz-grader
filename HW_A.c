#include <stdio.h>

int main(void){
  int n1,n2,n3,n4;
  printf("insert 4 num: ");
  scanf("%d %d %d %d",&n1,&n2,&n3,&n4);
  
  int max, s_max;
  max = (n1>n2) ? n1:n2;
  max = (max>n3) ? max:n3;
  max = (max>n4) ? max:n4;

  s_max = (n1 != max) ? n1 : s_max;
  s_max = (n2 != max && n2 > s_max) ? n2 : s_max;
  s_max = (n3 != max && n3 > s_max) ? n3 : s_max;
  s_max = (n4 != max && n4 > s_max) ? n4 : s_max;

  printf("%d",s_max);
}