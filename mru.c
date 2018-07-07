#include <stdio.h>


float speed(float time,float distance){
  float s = distance/time;
  printf("%f m/s\n", s );
  return s;
}

float time(float speed, float distance){
  float t = distance/speed;
  printf("%f s\n", t );
  return t;
}

float distance(float speed, float time){
  float d = speed*time;
  printf("%f m\n", d );
  return d;
}


int main(){
  float speed = 61.5;
  float time = 300;
  distance(speed,time);
  return 0;
}
