/*********************************************************************************************
 * This code was automatically generated by Digital Twin Code Generator tool 0.6.9.
 *
 * Generated Date: 2020/06/08
 *********************************************************************************************/

#ifndef PNP_DEVICE
#define PNP_DEVICE

#include "digitaltwin_device_client_ll.h"
#include "digitaltwin_interface_client.h"
#include "azure_c_shared_utility/threadapi.h"
#include "azure_c_shared_utility/tickcounter.h"
#include "utilities/digitaltwin_client_helper.h"

#include "utilities/deviceinformation_5kj_interface.h"

#include "utilities/enoceanpnptest2_sensor_interface.h"

#include "EnOceanPnPTest2_1yu_impl.h"

#ifdef __cplusplus
extern "C"
{
#endif

int pnp_device_initialize(const char* connectionString, const char* trustedCert);

void pnp_device_run();

void pnp_device_close();

#ifdef __cplusplus
}
#endif

#endif // PNP_DEVICE
