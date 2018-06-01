#include <stdio.h>
#include <math.h>

float convToRad(float angle){
  float Rad = (angle*(2*3.1415))/360;
  return Rad;
}
float convToDeg(float x){
  float deg = (x*360)/(2*3.1415);
  return deg;
}
void xyspeed (float speed, float angle){
  float voy = speed * sin(convToRad(angle));
  float vox = speed * cos(convToRad(angle));
  printf("The speed on Y is %f m/s\n", voy );
  printf("The speed on X is %f m/s\n", vox );
}
int speedAngle (float voy, float vox){
  float vo = sqrt((voy*voy)+(vox*vox));
  float angle = asin(voy/vo);
  printf("The speed is %f m/s\n", vo );
  printf("The angle is %f\n", convToDeg(angle));
  return 0;
}


int main(){
  xyspeed(100, 45);
  speedAngle(70.7,70.7);
  return 0;
  }
