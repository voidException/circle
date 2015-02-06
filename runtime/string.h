/*
 * string.h
 *
 *  Created on: 2014-10-15
 *      Author: qianqians
 */
#ifndef _string_h
#define _string_h

#include <unordered_map>
#include "object.h"

namespace circle{

class string : public object{
public:


private:
	std::string * str;

};

class stringpool{
public:
	std::unordered_map<std::string *, string * > pool;

};

} /* namespace circle */

#endif //_string_h
