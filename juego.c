#include <stdio.h>
int* personaje(int* ubicacion, int sizey, int sizex){
  int movimiento[1];
  scanf("%i", movimiento);
  if (movimiento[0]==6){
    if (ubicacion[0]==sizex-1){
      ubicacion[0]=ubicacion[0];
    } else {
        ubicacion[0]=ubicacion[0]+1;
      }
  } else if (movimiento[0]==4){
    if (ubicacion[0]==0){
      ubicacion[0]=0;
    } else {
      ubicacion[0]=ubicacion[0]-1;
    }
  } else if (movimiento[0]==8){
    if (ubicacion[1]==0){
      ubicacion[1]=0;
    } else {
      ubicacion[1]=ubicacion[1]+1;
    }
  } else if (movimiento[0]==2){
    if (ubicacion[1]==-sizey+1){
      ubicacion[1]=ubicacion[1];
    } else {
      ubicacion[1]=ubicacion[1]-1;
    }
    return ubicacion;
  }
}
int printMapa(int* ubicacion, int sizex, int sizey){
  int y;
  int x;
  for (y = 0; y < sizey; y=y+1) {
    for (x = 0; x < sizex; x=x+1) {
      if (ubicacion[0]==x && ubicacion[1]==-y){
        printf("0 ");
      } else {
        printf("_ ");
      }
    }
    printf("\n");
  }
  return 0;
}
int juego(int sizey, int sizex) {
  int ubicacion[]={0,0};
  printMapa(ubicacion,sizex,sizey);
  int i;
  for (i=0;ubicacion[0]+1!=sizex && ubicacion[1]+1!=-sizey;i=i+1){
    personaje(ubicacion, sizey, sizex);
    printMapa(ubicacion,sizex,sizey);
  }
  printf("Ganaste!!!!\n");
  return 0;
}
int main(){
  juego(9,5);
  return 0;
}
