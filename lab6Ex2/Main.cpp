#include "Triunghi.h"
#include <iostream>

int main(void) {
	Dreptunghic tr(7.6, 9.4, 4.1);
	tr.arie();
	tr.perimetru();
	Isoscel is(7.6, 9.4, 4.1);
	is.arie();
	is.perimetru();
	DreptunghicIsoscel driso(7.6, 9.4, 4.1);
	driso.arie();
	driso.perimetru();
	Echilateral echi(7.6, 9.4, 4.1);
	echi.arie();
	echi.perimetru();
}