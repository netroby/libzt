/*
 * ZeroTier SDK - Network Virtualization Everywhere
 * Copyright (C) 2011-2017  ZeroTier, Inc.  https://www.zerotier.com/
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * --
 *
 * You can be released from the requirements of the license by purchasing
 * a commercial license. Buying such a license is mandatory as soon as you
 * develop commercial closed-source software that incorporates or links
 * directly against ZeroTier software without disclosing the source code
 * of your own application.
 */

/**
 * @file
 *
 * Platform-agnostic implementation of a socket-like object
 */

#ifndef LIBZT_VIRTUALSOCKET_H
#define LIBZT_VIRTUALSOCKET_H

#ifdef __cplusplus
extern "C" {
#endif

/**
 * An abstraction of a socket that operates between the application-exposed platform-sockets
 * and the network stack's representation of a protocol control structure. This object is used by
 * the POSIX socket emulation layer and stack drivers.
 */
class VirtualSocket;

#ifdef __cplusplus
}
#endif

#endif // _H
