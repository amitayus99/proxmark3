//-----------------------------------------------------------------------------
// Copyright (C) 2010 iZsh <izsh at fail0verflow.com>
// 2016, 2017 marshmellow, iceman
// This code is licensed to you under the terms of the GNU GPL, version 2 or,
// at your option, any later version. See the LICENSE.txt file for the text of
// the license.
//-----------------------------------------------------------------------------
// Low frequency EM4x commands
//-----------------------------------------------------------------------------

#ifndef CMDLFEM4X_H__
#define CMDLFEM4X_H__

#include <stdio.h>
#include <stdbool.h>    // for bool
#include <string.h>
#include <inttypes.h>
#include "proxmark3.h"
#include "ui.h"
#include "util.h"
#include "graph.h"
#include "cmdparser.h"
#include "cmddata.h"
#include "comms.h"
#include "cmdlf.h"
#include "lfdemod.h"

int CmdLFEM4X(const char *Cmd);

int CmdEM410xDemod(const char *Cmd);
int CmdEM410xRead(const char *Cmd);
int CmdEM410xSim(const char *Cmd);
int CmdEM410xBrute(const char *Cmd);
int CmdEM410xWatch(const char *Cmd);
int CmdEM410xWatchnSpoof(const char *Cmd);
int CmdEM410xWrite(const char *Cmd);
int CmdEM4x05Dump(const char *Cmd);
int CmdEM4x05Info(const char *Cmd);
int CmdEM4x05Read(const char *Cmd);
int CmdEM4x05Write(const char *Cmd);
int CmdEM4x50Read(const char *Cmd);
int CmdEM4x50Write(const char *Cmd);
int CmdEM4x50Dump(const char *Cmd);

int EM4x50Read(const char *Cmd, bool verbose);
bool EM4x05IsBlock0(uint32_t *word);

void printEM410x(uint32_t hi, uint64_t id);
int AskEm410xDecode(bool verbose, uint32_t *hi, uint64_t *lo);
int AskEm410xDemod(const char *Cmd, uint32_t *hi, uint64_t *lo, bool verbose);

#endif
