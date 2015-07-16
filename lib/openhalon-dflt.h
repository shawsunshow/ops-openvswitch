/*
 * Copyright (C) 2015 Hewlett-Packard Development Company, L.P.
 * All Rights Reserved.
 *
 *    Licensed under the Apache License, Version 2.0 (the "License"); you may
 *    not use this file except in compliance with the License. You may obtain
 *    a copy of the License at
 *
 *         http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 *    WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
 *    License for the specific language governing permissions and limitations
 *    under the License.
 *
 * File:    openhalon-dflt.h
 *
 * Purpose: This file contains default values for various columns in the OVSDB.
 *          The purpose is to avoid hard-coded values inside each module/daemon code.
 *
 */

#ifndef OPENHALON_DFLT_HEADER
#define OPENHALON_DFLT_HEADER 1

/************************* Open vSwitch Table  ***************************/

/* Interface Statistics update interval should
 * always be greater than or equal to 5 seconds. */
#define DFLT_OPEN_VSWITCH_OTHER_CONFIG_STATS_UPDATE_INTERVAL        5000

#endif /* OPENHALON_DFLT_HEADER */