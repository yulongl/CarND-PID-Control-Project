#include "PID.h"

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}
/*
void PID::Init(double Kp, double Ki, double Kd, bool is_init) {
}
*/
void PID::Init(double Kp, double Ki, double Kd) {
}

void PID::UpdateError(double cte) {
	if (!is_init) {
	    pre_cte = cte;
	    is_init = true;
	}

	d_error = cte - pre_cte;
	pre_cte = cte;
	i_error += cte;
	p_error = cte;
}

double PID::TotalError() {
	return (-Kp * p_error - Kd * d_error - Ki * i_error);
}

