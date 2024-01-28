/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * File   : RK.h                                               *
 * Purpode: Declaration of the RK class, which implements the  *
 *          adaptive Runge-Kutta Prince-Dormand 8(7)13M        *
 *          method for the solution of systems of first-order  *
 *          ordinary differential equations.                   *
 *          https://doi.org/10.1016/0771-050X(81)90010-3       *
 *                                                             *
 * Author : Arnold Alonso Alvarez                              *
 * Version: 1.1, 01/28/24                                      *
 * Contact: nutty.blood@gmail.com                              *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#ifndef _Main_RK
#define _Main_RK

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>  
#include <fstream>
#include <vector>
#include <cmath>

class RK{
  double Tolerance = 1.0e-5; // Local error tolerance
  
  int m      = 13;           // Number of stages (modify only if you change the Butcher matrix)
  int number = 4;            // Number of equations

  int n, i, j, k, l;

  std::vector <double> a_ij;
  std::vector <double> c_i;
  std::vector <double> b_ip;
  std::vector <double> b_iq;

  std::vector <double> KR;
  std::vector <double> r_p;
  std::vector <double> r_Aux;

  std::vector <double> S_r;
  std::vector <double> Fip;
  std::vector <double> Fiq;

  std::vector <double> Eta_p;
  std::vector <double> Eta_q;

  double t_Aux;
  
  double delta;

public:
  RK(double R[], double T, double Par[], double H,  double T_Max);
  ~RK();

  void Coefficients();
  void Initialize_vectors();

};

#endif
