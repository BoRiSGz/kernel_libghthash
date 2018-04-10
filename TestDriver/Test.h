#pragma once

#include <ntddk.h>
#include <windef.h>
#include "ght_hash_table.h"

#define POOL_TAG ('thgT')

/*
 *	Run a few tests to sanity check the hash-table
 */
VOID
TEST_RunTests(
	VOID
);
