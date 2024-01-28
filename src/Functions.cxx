/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * File   : Functions.cxx                                      *
 * Purpode: Definition of the system of differential equations.*
 *                                                             *
 * Author : Arnold Alonso Alvarez                              *
 * Version: 1.1, 01/28/24                                      *
 * Contact: nutty.blood@gmail.com                              *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

/* Elastic pendulum example
   
   Par[0] = m
   Par[1] = g
   Par[2] = k
   Par[3] = l_0

   R[0]   = P_{rho}
   R[1]   = rho
   R[2]   = P_{theta}
   R[3]   = theta
*/

#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std; 

//=============================================System=============================================
void Dot_F(vector <double> R, double t, double Par[], vector <double> &R_p){
 
  R_p[0] =   R[2]*R[2]/(Par[0]*R[1]*R[1]*R[1]) + Par[0]*Par[1]*cos(R[3]) - Par[2]*(R[1] - Par[3]);
  R_p[1] =   R[0]/Par[0];
  R_p[2] = - Par[0]*Par[1]*R[1]*sin(R[3]);
  R_p[3] =   R[2]/(Par[0]*R[1]*R[1]);
  
}
