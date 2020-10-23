#include <stdio.h>
#include <string.h>
int main(void) {
  char npass[20];
  char epass[20];
  int i,j;
  jump: printf("Enter new password (max 10): ");
  gets(npass); 
  while(npass[i] != '\0'){
  i++;
  }
  if(i > 10){
   i=0;
   goto jump;
  }
  for(i=0;i<=3;i++){
    for(j=1;j<=3;j++){
  printf("%d Enter password : ",j);
  gets(epass);
  if(strcmp(epass,npass)==0){
  printf("Password correct!!!\n");
  printf("Please setup new password\n");
  i+=3;
  goto jump;}
  else
  printf("Password not correct!!!\n");
  i++;
  if(i==3){
      printf("Close program.");
  }
  }
  }
  return 0;
}
