/*
 * classtype.h
 *
 *  Created on: 2014-10-15
 *      Author: qianqians
 */
#ifndef _classtype_h
#define _classtype_h

#include <string>
#include <unordered_map>

#include "object.h"
#include "typedef.h"

namespace circle{

class classtype : public object{
public:
	std::string classtypename;
	UUID classtypeuuid;
	std::unordered_map<std::string, call> funclist;
	std::unordered_map<std::string, object*> memberlist;

};

} /* namespace circle */

#endif //_classtype_h
