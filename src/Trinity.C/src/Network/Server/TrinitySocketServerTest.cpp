// Graph Engine
// Copyright (c) Microsoft. All rights reserved.
// Licensed under the MIT license. See LICENSE.md file in the project root for full license information.
//
#if defined(SOCKET_SERVER_TEST)
#include "TrinityServer.h"

int main(int argc, char *argv[])
{
    return Trinity::Network::TrinityServerTestEntry();
}
#endif