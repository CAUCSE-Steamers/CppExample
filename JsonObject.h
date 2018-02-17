#pragma once
#include <map>
#include <string>
#include <utility>
#include "JsonContainer.h"

using namespace std;
using std::rel_ops::operator!=;
using std::rel_ops::operator<=;
using std::rel_ops::operator>;
using std::rel_ops::operator>=;

class JsonObject : public JsonContainer {
	public:
	JsonObject();
	JsonObject(const JsonObject& rsj);
	JsonObject(JsonObject&& rsj);
	~JsonObject();
	bool operator ==(const JsonObject& rsj);
	bool operator <(const JsonObject& rsj);
	JsonObject& operator =(const JsonObject& rsj);
	JsonObject& operator =(JsonObject&& rsj);
	private:
	map<string, JsonContainer> field;
};