/*-------------------------------------------------------------------------
 *
 * proxy_utils.h
 *
 *
 * Portions Copyright (c) 1996-2010, PostgreSQL Global Development Group
 * Portions Copyright (c) 1994, Regents of the University of California
 * Portions Copyright (c) 2010-2011 Nippon Telegraph and Telephone Corporation
 *
 * src/include/gtm/proxy_utils.h
 *
 *-------------------------------------------------------------------------
 */

#ifndef PROXY_UTILS_H
#define PROXY_UTILS_H

#include "gtm/libpq-int.h"

bool gtm_standby_check_communication_error(int *, GTM_Conn *);

#endif /* PROXY_UTILS_H */

