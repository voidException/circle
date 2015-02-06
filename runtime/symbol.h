/*
 * symbol.h
 *
 *  Created on: 2015-2-5
 *      Author: qianqians
 */
#ifndef _symbol_h
#define _symbol_h

#include <string>
#include <unordered_map>

#include "object.h"
#include "typedef.h"

namespace circle{

class symboltable{
public:
	std::unordered_map<std::string, object * > table;

};

} /* namespace circle */

#endif //_symbol_h
