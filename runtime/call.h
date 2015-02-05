/*
 * call.h
 *
 *  Created on: 2015-2-5
 *      Author: qianqians
 */
#ifndef _call_h
#define _call_h

#include <functional>

namespace Fossilizid{

class object;

typedef std::function<object *(object *) > call;

} /* namespace Fossilizid */

#endif //_call_h
