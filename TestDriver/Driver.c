#include "Test.h"

NTSTATUS
DriverEntry(
	PDRIVER_OBJECT ptDriverObject,
	PUNICODE_STRING pusRegistryPath
)
{
	PAGED_CODE();
	UNREFERENCED_PARAMETER(ptDriverObject);
	UNREFERENCED_PARAMETER(pusRegistryPath);

	TEST_RunTests();

	return STATUS_UNSUCCESSFUL;
}
