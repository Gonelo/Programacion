#include <stdio.h>
int main(){
    int n = 1000000;
    printf("%i segundos\n", seghs(secahs(diasysec(n))));
    return 0;
}
int diasysec(int n){
  int dias = n/86400;
  printf("%i dias - ", dias );
  return n - dias*86400;
}
int secahs(int n){
  int horas = n/3600;
  printf("%i horas - ", horas );
  return n - horas*3600;
}
int seghs(int n){
  int minutos = n/60;
  printf("%i minutos - ", minutos );
  return n - minutos*60;
}
