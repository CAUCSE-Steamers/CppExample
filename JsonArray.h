#pragma once
#include <vector>
#include <utility>
#include "JsonContainer.h"

using namespace std;
using std::rel_ops::operator!=;
using std::rel_ops::operator<=;
using std::rel_ops::operator>;
using std::rel_ops::operator>=;

class JsonArray : public JsonContainer{
	public:
	JsonArray();
	JsonArray(const JsonArray& rsj);
	JsonArray(JsonArray&& rrsj);
	~JsonArray();
	bool operator ==(const JsonArray& rsj);
	bool operator <(const JsonArray& rsj);
	JsonArray& operator =(const JsonArray& rsj);
	JsonArray& operator =(JsonArray&& rsj);
	const int size(){return container.size(); };
	private:
	vector<JsonContainer&> container;
};