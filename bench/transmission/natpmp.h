/*
 * This file Copyright (C) 2007-2008 Charles Kerr <charles@rebelbase.com>
 *
 * This file is licensed by the GPL version 2.  Works owned by the
 * Transmission project are granted a special exemption to clause 2(b)
 * so that the bulk of its code can remain under the MIT license.
 * This exemption does not extend to derived works not owned by
 * the Transmission project.
 *
 * $Id: natpmp.h 7175 2008-11-29 16:32:10Z charles $
 */

#ifndef __TRANSMISSION__
#error only libtransmission should #include this header.
#endif

#ifndef TR_NATPMP_H
#define TR_NATPMP_H 1

typedef struct tr_natpmp tr_natpmp;

tr_natpmp * tr_natpmpInit( void );

void        tr_natpmpClose( tr_natpmp * );

int         tr_natpmpPulse(         tr_natpmp *,
                                int port,
                                int isEnabled );

#endif
