#pragma once
#include "JsonContainer.h"

class JsonBool : public JsonContainer {
	public:
	JsonBool();
	JsonBool(bool value);
	~JsonBool();
	JsonBool(const JsonBool& rsj);
	operator bool() const;
	private:
	bool value;
};