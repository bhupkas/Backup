/* bhupkas */

#include "bits/stdc++.h"

using namespace std;

#define PI 3.14159265

int main()
{
	double theta,Rw,g,m1,R1,m2,R2;
	cout << "theta :";
	cin >> theta;
	cout << "Rw :";
	cin >> Rw;
	cout << "g :";
	cin >> g;
	cout << "m1 :";
	cin >> m1;
	cout << "R1 :";
	cin >> R1;
	cout << "m2 :";
	cin >> m2;
	cout << "R2 :";
	cin >> R2;
	double num;
	num = Rw * g * sin (theta*PI/180);
	num = num * (m1 + m2);
	num = num * (m1 * R1 - m2 * R2);
	double den;
	den = Rw * (m1 + m2);
	den = den + (m1 * R1 - m2 * R2) * cos (theta*PI/180);
	cout << num/den << endl; 
	return 0;
}
