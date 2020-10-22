#include <stdio.h>

int main()
{
    if(STDC VERSION >= 201710L){
        printf("We are using C18!\n");
    }
     elif(STDC VERSION >= 2011102L){
        printf("We are using C11!\n");
    }
    elif(STDC VERSION >= 199901L){
        printf("We are using C99!\n");
    }
    else
      printf("We are using C89/C90!\n");
  return 0;
}
