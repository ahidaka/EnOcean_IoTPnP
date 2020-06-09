/************************************************************************************************
 * This code was automatically generated by Digital Twin Code Generator tool 0.6.9.
 * Changes to this file may cause incorrect behavior and will be lost if the code is regenerated.
 *
 * Generated Date: 2020/06/08
 ***********************************************************************************************/

#ifndef DEVICEINFORMATION_5KJ_INTERFACE_H
#define DEVICEINFORMATION_5KJ_INTERFACE_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "digitaltwin_interface_client.h"
#include "azure_c_shared_utility/xlogging.h"
#include "azure_c_shared_utility/threadapi.h"

#include "digitaltwin_client_helper.h"
#include "digitaltwin_serializer.h"
#include "parson.h"
#include "../EnOceanPnPTest2_1yu_impl.h"

#ifdef __cplusplus
extern "C"
{
#endif

typedef enum DEVICEINFORMATION_5KJ_READONLY_PROPERTY_TAG
{
    DeviceInformation_5kj_MANUFACTURER_PROPERTY,
    DeviceInformation_5kj_MODEL_PROPERTY,
    DeviceInformation_5kj_SWVERSION_PROPERTY,
    DeviceInformation_5kj_OSNAME_PROPERTY,
    DeviceInformation_5kj_PROCESSORARCHITECTURE_PROPERTY,
    DeviceInformation_5kj_PROCESSORMANUFACTURER_PROPERTY,
    DeviceInformation_5kj_TOTALSTORAGE_PROPERTY,
    DeviceInformation_5kj_TOTALMEMORY_PROPERTY
} DEVICEINFORMATION_5KJ_PROPERTY;

// DigitalTwin interface name from service perspective.
static const char DeviceInformation_5kjInterfaceId[] = "urn:azureiot:DeviceManagement:DeviceInformation:1";
static const char DeviceInformation_5kjInterfaceInstanceName[] = "DeviceInformation_5kj";

// Telemetry names for this interface.

// Property names for this interface.

#define DeviceInformation_5kjInterface_ManufacturerProperty "manufacturer"

#define DeviceInformation_5kjInterface_ModelProperty "model"

#define DeviceInformation_5kjInterface_SwVersionProperty "swVersion"

#define DeviceInformation_5kjInterface_OsNameProperty "osName"

#define DeviceInformation_5kjInterface_ProcessorArchitectureProperty "processorArchitecture"

#define DeviceInformation_5kjInterface_ProcessorManufacturerProperty "processorManufacturer"

#define DeviceInformation_5kjInterface_TotalStorageProperty "totalStorage"

#define DeviceInformation_5kjInterface_TotalMemoryProperty "totalMemory"

// Command names for this interface

// Methods
DIGITALTWIN_INTERFACE_CLIENT_HANDLE DeviceInformation_5kjInterface_Create();

void DeviceInformation_5kjInterface_Close(DIGITALTWIN_INTERFACE_CLIENT_HANDLE digitalTwinInterfaceClientHandle);

DIGITALTWIN_CLIENT_RESULT DeviceInformation_5kjInterface_Property_ReportAll();

DIGITALTWIN_CLIENT_RESULT DeviceInformation_5kjInterface_Property_ReportManufacturer();

DIGITALTWIN_CLIENT_RESULT DeviceInformation_5kjInterface_Property_ReportModel();

DIGITALTWIN_CLIENT_RESULT DeviceInformation_5kjInterface_Property_ReportSwVersion();

DIGITALTWIN_CLIENT_RESULT DeviceInformation_5kjInterface_Property_ReportOsName();

DIGITALTWIN_CLIENT_RESULT DeviceInformation_5kjInterface_Property_ReportProcessorArchitecture();

DIGITALTWIN_CLIENT_RESULT DeviceInformation_5kjInterface_Property_ReportProcessorManufacturer();

DIGITALTWIN_CLIENT_RESULT DeviceInformation_5kjInterface_Property_ReportTotalStorage();

DIGITALTWIN_CLIENT_RESULT DeviceInformation_5kjInterface_Property_ReportTotalMemory();

#ifdef __cplusplus
}
#endif

#endif  // DEVICEINFORMATION_5KJ_INTERFACE_H
