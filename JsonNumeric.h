#pragma once
#include <array>
#include <stack>
#include <utility>
#include "JsonContainer.h"

using namespace std;
using std::rel_ops::operator!=;
using std::rel_ops::operator<=;
using std::rel_ops::operator>;
using std::rel_ops::operator>=;

class JsonNumeric : public JsonContainer {
	public:
	JsonNumeric();
	JsonNumeric(stack<char>& inputstream);
	JsonNumeric(stack<char>& integerInput, stack<char>& rationalInput);
	JsonNumeric(const JsonNumeric& rsj);
	JsonNumeric(JsonNumeric&& rrsj);
	~JsonNumeric();
	bool operator ==(const JsonNumeric& rsj);
	bool operator < (const JsonNumeric& rsj);
	JsonNumeric& operator +(const JsonNumeric& rsj);
	JsonNumeric& operator -(const JsonNumeric& rsj);
	JsonNumeric& operator *(const JsonNumeric& rsj);
	JsonNumeric& operator /(const JsonNumeric& rsj);
	JsonNumeric& operator %(const JsonNumeric& rsj);
	private:
	array<char, INT_MAX> integer;
	array<char, INT_MAX> rational;
	bool positive;
};
