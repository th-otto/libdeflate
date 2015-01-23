/*
 * crc32.h
 *
 * CRC-32 checksum computation for the gzip format.
 *
 * This file has no copyright assigned and is placed in the Public Domain.
 */

#pragma once

#include "types.h"

extern u32
crc32_gzip(const void *buffer, size_t size);