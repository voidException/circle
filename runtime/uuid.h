/*
 * uuid.h
 *
 *  Created on: 2015-2-5
 *      Author: qianqians
 */
#ifndef _uuid_h
#define _uuid_h

namespace circle{

struct UUID{
	char uuid[16];

	bool operator==(UUID & other){
		for (int i = 0; i < 16; i++){
			if (uuid[i] != other.uuid[i]){
				return false;
			}
		}

		return true;
	}
};

} /* namespace circle */

#endif //_uuid_h
