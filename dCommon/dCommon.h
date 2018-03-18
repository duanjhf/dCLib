/*
 * dCommon.h
 * Description: dCommon.h
 * Author: duan. Created on: Mar 7, 2018
 * copyright(c)2018. LICENSE("GPL/BSD")
 */

#ifndef DCOMMON_H_
#define DCOMMON_H_

#include <stdio.h>

#ifndef uint32
typedef char			int8;
typedef short			int16;
typedef int				int32;
typedef unsigned char	uint8;
typedef unsigned short	uint16;
typedef unsigned int	uint32;
#endif

/*************************************************************************************************/
/*                                   debug                                                       */
/*************************************************************************************************/
#ifndef dDebug
extern char *basenaem(char *path);
#define dDebug(fmt, args...) \
	printf("[dDebug] %s %d %s:"fmt"\r\n", (char *)basename(__FILE__), __LINE__, __func__, ##args)
#define dError(fmt, args...) \
	printf("[!!!! dError] %s %d %s:"fmt"\r\n", (char *)basename(__FILE__), __LINE__, __func__, ##args)
#endif

#endif /* DCOMMON_H_ */
