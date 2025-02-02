/*
 * Copyright (c) 2018, Arm Limited and affiliates.
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#include "GEMALTO_CINTERION_CellularNetwork.h"

using namespace mbed;

GEMALTO_CINTERION_CellularNetwork::GEMALTO_CINTERION_CellularNetwork(ATHandler &at, AT_CellularDevice &device) : AT_CellularNetwork(at, device)
{
}

GEMALTO_CINTERION_CellularNetwork::~GEMALTO_CINTERION_CellularNetwork()
{
}

nsapi_error_t GEMALTO_CINTERION_CellularNetwork::set_attach()
{
    return NSAPI_ERROR_OK;
}

void GEMALTO_CINTERION_CellularNetwork::get_context_state_command()
{
    _at.cmd_start_stop("^SICA", "?");
    _at.resp_start("^SICA:");
}
 /* namespace mbed */
