/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "add.h"

int *
add_1_svc(int arg1, int arg2,  struct svc_req *rqstp)
{
	static int  result;

	/*
	 * insert server code here
	 */
    result =arg1 +arg2;
	return &result;
}
