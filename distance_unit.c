#include <stdio.h>
int main(){
  double speed,time;
  double distance_ km, meters, centimeters, millimeters;
  printf("Enter speed in km/h:");
  scanf("%lf",&speed);
  printf("Enter time in hours:");
  scanf("%lf",&time);
  distance_km=speed*time;
  meters=distance_km*1000.0;
  centimeters=diatance_km*100000.0;
  millimeters=diatance_km*1000000.0;
  printf("\n--- Conversion Results ---n\);
  printf("Distance in meters: %.2f m\n", meters);
  printf("Distance in centimeters: %.2f cm\n", centimeters);
  printf("Distance in millimeters: %.2f mm\n", millimeters);
  return 0;
}