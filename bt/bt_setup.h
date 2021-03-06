/***************************************************************
Authors: Ram Brundavanam & Abdulrahman Kurdi
Class: CSCI-P538 - Computer Networks
Professor: Dr. Apu Kapadia
File: bt_setup.h
Project: BitTorrent Client 
Date Due: October 17th 2014 11:00 pm
****************************************************************/
#ifndef _BT_SETUP_H
#define _BT_SETUP_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#include "bt_setup.h"
#include "bt_lib.h"


/**
 * __parse_peer(peer_t * peer, char peer_st) -> void
 *
 * parse a peer string, peer_st and store the parsed result in peer
 *
 * ERRORS: Will exit on various errors
 **/
void usage(FILE * file);


/**
 * pars_args(bt_args_t * bt_args, int argc, char * argv[]) -> void
 *
 * parse the command line arguments to bt_client using getopt and
 * store the result in bt_args.
 *
 * ERRORS: Will exit on various errors
 *
 **/

void parse_args(bt_args_t * bt_args, int argc,  char ** argv);



#endif
