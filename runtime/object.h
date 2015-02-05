/*
 * object.h
 *
 *  Created on: 2015-2-5
 *      Author: qianqians
 */
#ifndef _object_h
#define _object_h

namespace circle{

class dict;

class object{
public:
	object();
	~object();

private:
	dict * members;

};

} /* namespace circle */

#endif //_object_h
