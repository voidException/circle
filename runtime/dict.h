/*
 * dict.h
 *
 *  Created on: 2015-2-5
 *      Author: qianqians
 */
#ifndef _dict_h
#define _dict_h

#include <unordered_map>
#include <string>

#include "object.h"

namespace circle{

class iterator;

class dict : public object{
public:
	dict();
	~dict();

	object * get(std::string key);

	void add(std::string key, object * e);

	void remove(std::string key);

	iterator * iterator();

private:
	std::unordered_map<std::string, object * > emap;

};

} /* namespace circle */

#endif //_dict_h
