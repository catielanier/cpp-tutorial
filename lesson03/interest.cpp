#include <stdio.h>
#include <math.h>

double interestCalculator(int principal, double rate, int time) {
  return principal * rate * time;
}

int main(void) {
  int principal, time;
  double rate;
  principal = 20000;
  rate = .05;
  time = 24;
  printf("The interest incurred for a principal of %d at a rate of %g%% over %d months is %g.", principal, rate * 100, time, interestCalculator(principal, rate, time));
  return 0;
}
