#pragma once
#include <string>
#include <utility>
#include "JsonContainer.h"

using namespace std;
using std::rel_ops::operator!=;
using std::rel_ops::operator<=;
using std::rel_ops::operator>;
using std::rel_ops::operator>=;

class JsonString : public JsonContainer {
	public:
	JsonString();
	JsonString(string str);
	JsonString(const JsonString& rsj);
	JsonString(JsonString&& rsj);
	~JsonString();
	bool operator ==(const JsonString& rsj);
	bool operator <(const JsonString& rsj);
	JsonString& operator =(const JsonString& rsj);
	JsonString& operator =(JsonString&& rsj);
	private:
	string stringValue;
};