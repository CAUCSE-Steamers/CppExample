#include "JsonNumeric.h"

JsonNumeric::JsonNumeric() {
	fill(integer.begin(), integer.end(), 0);
	fill(rational.begin(), rational.end(), 0);
	positive = true;
}
