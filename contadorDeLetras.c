#include <stdio.h>
#include <string.h>

int main(){
  int i,count;
  char String[1000],letra;
  scanf("%s\n",&String);
  //printf("%s\n",String );
  scanf("%c", &letra);
  for(i = strlen(String)-1;i > 0; i--){
    if(String[i] == letra){
      count++;
    }
  }
  printf("Existem %d letras %c na String\n", count, letra );
}
