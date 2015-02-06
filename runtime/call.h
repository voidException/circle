/*
 * call.h
 *
 *  Created on: 2015-2-5
 *      Author: qianqians
 */
#ifndef _call_h
#define _call_h

#include <cstdint>
#include <functional>

#include "object.h"
#include "typedef.h"

namespace circle{

class call_return_object : public object{
public:
	object * operator()();
	std::function<object * ()> func;

};

class call_return_string : public object{
public:
	string * operator()();
	std::function<string * ()> func;

};

class call_return_int : public object{
public:
	int64_t operator()();
	std::function<int64_t ()> func;

};

class call_return_double : public object{
public:
	double operator()();
	std::function<double ()> func;

};

class call_return_bool : public object{
public:
	bool operator()();
	std::function<bool ()> func;

};
} /* namespace circle */

#endif //_call_h
