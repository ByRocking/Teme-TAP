#pragma once
#ifndef COMPARARENOTA_H
#define COMPARARENOTA_H

class ComparareNota {
public:
	inline bool operator()(Student s1, Student s2) {
		if (s1.exm < s2.exm)
			return true;
		else return false;
	}
};

#endif
