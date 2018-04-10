#include "Test.h"

VOID
test_Simple(
	VOID
)
{
	ght_hash_table_t * ptTable = NULL;
	PULONG pdwData = NULL;
	PULONG pdwFoundData = NULL;
	ANSI_STRING sKey = RTL_CONSTANT_STRING("blabla");

	ptTable = ght_create(128);
	if (NULL == ptTable)
	{
		// We can't allocate the hash-table, nothing to do here
		return;
	}

	pdwData = (PULONG)ExAllocatePoolWithTag(PagedPool, sizeof(*pdwData), POOL_TAG);
	if (NULL == pdwData)
	{
		// We can't allocate the data, nothing to do here
		return;
	}

	/* Assign the data a value */
	*pdwData = 15;

	/* Insert "blabla" into the hash table */
	NT_ASSERT(0 == ght_insert(
		ptTable,
		pdwData,
		sKey.Length,
		sKey.Buffer));
	
	/* Search for "blabla" */
	pdwFoundData = ght_get(
		ptTable,
		sKey.Length,
		sKey.Buffer);
	NT_ASSERT(NULL != pdwFoundData);

	/* Remove the hash table */
	ght_finalize(ptTable);
}

VOID
TEST_RunTests(
	VOID
)
{
	test_Simple();
}
