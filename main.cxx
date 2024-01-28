#ifndef _Main_
#define _Main_

#define _USE_MATH_DEFINES

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>

#include "include/RK.h"

using namespace std;

int main(){

  double  dt_initial = 0.001;
  double           t = 0.0;
  double     t_final = 250;

  double r[4]   = {0.0};
  double par[4] = {0.0};

  r[0] = 0.0; // P_{rho}
  r[1] = 0.3; // rho
  r[2] = 0.0; // P_{theta}
  r[3] = M_PI/2.0; // theta

  par[0] = 1.0;   // m
  par[1] = 9.81;  // g
  par[2] = 49.05; // k
  par[3] = 0.8;   // l_0 


  RK *b = new RK(r, t, par, dt_initial, t_final);
  delete b;
	
  return 0;
}

#endif
