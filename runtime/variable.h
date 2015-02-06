/*
 * variable.h
 *
 *  Created on: 2015-2-5
 *      Author: qianqians
 */
#ifndef _variable_h
#define _variable_h

#include <string>
#include <unordered_map>

#include "object.h"
#include "typedef.h"

namespace circle{

class variabletable{
public:
	std::unordered_map<std::string, object * > table;

};

} /* namespace circle */

#endif //_call_h
