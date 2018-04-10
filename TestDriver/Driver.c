#include <fltKernel.h>
#include <windef.h>
#include <InitGuid.h>
#include <devguid.h>
#include <wdmsec.h>

#include "ght_hash_table.h"

#include "Common.h"
#include "Test.h"

NTSTATUS
DriverEntry(
	PDRIVER_OBJECT ptDriverObject,
	PUNICODE_STRING RegistryPath
)
{
	PAGED_CODE();
	UNREFERENCED_PARAMETER(ptDriverObject);
	UNREFERENCED_PARAMETER(RegistryPath);

	TEST_RunTests();

	return STATUS_UNSUCCESSFUL;
}
