/*****************************************************************************

  (c) Cambridge Silicon Radio Limited 2010-2012

  Refer to LICENSE.txt included with this source for details
  on the license terms.

 *****************************************************************************/
#include "csr_wifi_sme_sef.h"

const CsrWifiSmeStateHandlerType CsrWifiSmeUpstreamStateHandlers[CSR_WIFI_SME_PRIM_UPSTREAM_COUNT] =
{
    /* 0x8000 */ CsrWifiSmeActivateCfmHandler,
    /* 0x8001 */ CsrWifiSmeAdhocConfigGetCfmHandler,
    /* 0x8002 */ CsrWifiSmeAdhocConfigSetCfmHandler,
    /* 0x8003 */ CsrWifiSmeAssociationCompleteIndHandler,
    /* 0x8004 */ CsrWifiSmeAssociationStartIndHandler,
    /* 0x8005 */ CsrWifiSmeBlacklistCfmHandler,
    /* 0x8006 */ CsrWifiSmeCalibrationDataGetCfmHandler,
    /* 0x8007 */ CsrWifiSmeCalibrationDataSetCfmHandler,
    /* 0x8008 */ 0,
    /* 0x8009 */ 0,    
    /* 0x800A */ CsrWifiSmeCoexConfigGetCfmHandler,
    /* 0x800B */ CsrWifiSmeCoexConfigSetCfmHandler,
    /* 0x800C */ CsrWifiSmeCoexInfoGetCfmHandler,
    /* 0x800D */ CsrWifiSmeConnectCfmHandler,
    /* 0x800E */ CsrWifiSmeConnectionConfigGetCfmHandler,
    /* 0x800F */ CsrWifiSmeConnectionInfoGetCfmHandler,
    /* 0x8010 */ CsrWifiSmeConnectionQualityIndHandler,
    /* 0x8011 */ CsrWifiSmeConnectionStatsGetCfmHandler,
    /* 0x8012 */ CsrWifiSmeDeactivateCfmHandler,
    /* 0x8013 */ CsrWifiSmeDisconnectCfmHandler,
    /* 0x8014 */ CsrWifiSmeEventMaskSetCfmHandler,
    /* 0x8015 */ CsrWifiSmeHostConfigGetCfmHandler,
    /* 0x8016 */ CsrWifiSmeHostConfigSetCfmHandler,
    /* 0x8017 */ CsrWifiSmeIbssStationIndHandler,
    /* 0x8018 */ CsrWifiSmeKeyCfmHandler,
    /* 0x8019 */ CsrWifiSmeLinkQualityGetCfmHandler,
    /* 0x801A */ CsrWifiSmeMediaStatusIndHandler,
    /* 0x801B */ CsrWifiSmeMibConfigGetCfmHandler,
    /* 0x801C */ CsrWifiSmeMibConfigSetCfmHandler,
    /* 0x801D */ CsrWifiSmeMibGetCfmHandler,
    /* 0x801E */ CsrWifiSmeMibGetNextCfmHandler,
    /* 0x801F */ CsrWifiSmeMibSetCfmHandler,
    /* 0x8020 */ CsrWifiSmeMicFailureIndHandler,
    /* 0x8021 */ CsrWifiSmeMulticastAddressCfmHandler,
    /* 0x8022 */ CsrWifiSmePacketFilterSetCfmHandler,
    /* 0x8023 */ CsrWifiSmePermanentMacAddressGetCfmHandler,
    /* 0x8024 */ CsrWifiSmePmkidCandidateListIndHandler,
    /* 0x8025 */ CsrWifiSmePmkidCfmHandler,
    /* 0x8026 */ CsrWifiSmePowerConfigGetCfmHandler,
    /* 0x8027 */ CsrWifiSmePowerConfigSetCfmHandler,
    /* 0x8028 */ CsrWifiSmeRegulatoryDomainInfoGetCfmHandler,
    /* 0x8029 */ CsrWifiSmeRoamCompleteIndHandler,
    /* 0x802A */ CsrWifiSmeRoamStartIndHandler,
    /* 0x802B */ CsrWifiSmeRoamingConfigGetCfmHandler,
    /* 0x802C */ CsrWifiSmeRoamingConfigSetCfmHandler,
    /* 0x802D */ CsrWifiSmeScanConfigGetCfmHandler,
    /* 0x802E */ CsrWifiSmeScanConfigSetCfmHandler,
    /* 0x802F */ CsrWifiSmeScanFullCfmHandler,
    /* 0x8030 */ CsrWifiSmeScanResultIndHandler,
    /* 0x8031 */ CsrWifiSmeScanResultsFlushCfmHandler,
    /* 0x8032 */ CsrWifiSmeScanResultsGetCfmHandler,
    /* 0x8033 */ CsrWifiSmeSmeStaConfigGetCfmHandler,
    /* 0x8034 */ CsrWifiSmeSmeStaConfigSetCfmHandler,
    /* 0x8035 */ CsrWifiSmeStationMacAddressGetCfmHandler,
    /* 0x8036 */ CsrWifiSmeTspecIndHandler,
    /* 0x8037 */ CsrWifiSmeTspecCfmHandler,
    /* 0x8038 */ CsrWifiSmeVersionsGetCfmHandler,
    /* 0x8039 */ CsrWifiSmeWifiFlightmodeCfmHandler,
    /* 0x803A */ CsrWifiSmeWifiOffIndHandler,
    /* 0x803B */ CsrWifiSmeWifiOffCfmHandler,
    /* 0x803C */ CsrWifiSmeWifiOnCfmHandler,
    /* 0x803D */ CsrWifiSmeCloakedSsidsSetCfmHandler,
    /* 0x803E */ CsrWifiSmeCloakedSsidsGetCfmHandler,
    /* 0x803F */ CsrWifiSmeWifiOnIndHandler,
    /* 0x8040 */ CsrWifiSmeSmeCommonConfigGetCfmHandler,
    /* 0x8041 */ CsrWifiSmeSmeCommonConfigSetCfmHandler,
    /* 0x8042 */ CsrWifiSmeGetInterfaceCapabilityCfmHandler,
    /* 0x8043 */ CsrWifiSmeErrorIndHandler,
    /* 0x8044 */ CsrWifiSmeInfoIndHandler,
    /* 0x8045 */ CsrWifiSmeCoreDumpIndHandler,
    /* 0x8046 */ CsrWifiSmeAmpStatusChangeIndHandler,
};
