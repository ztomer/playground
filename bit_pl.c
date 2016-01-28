/* Hello World program */

#include <stdint.h>
#include <stdio.h>
#include <string.h>

typedef struct {
    uint64_t initialisationError : 1; /* bit 63 */
    uint64_t calibrationFault : 1;
    uint64_t paOverCurrent : 1;
    uint64_t txOffConfigured : 1;
    uint64_t unknownFreqVariant : 1;
    uint64_t txOffTimingLoss : 1;
    uint64_t antennaMismatch : 1;
    uint64_t freqOutOfRange : 1;
    uint64_t paDisabled : 1;
    uint64_t highGainAlarm : 1;
    uint64_t lowGainAlarm : 1;
    uint64_t imDegradation : 1;
    uint64_t tddSwFail : 1;
    uint64_t rxflrAlarm : 1;
    uint64_t apdWdtTimeOut : 1;
    uint64_t muFpgaPllUnlock : 1;
    uint64_t TooLowTemperature : 1;
    uint64_t TooHighTemperature : 1;
    uint64_t noDprf : 1;
    uint64_t muFpgaConfigurationFail : 1;
    uint64_t vupuBootError : 1;
    uint64_t vupuCodeDownloadTimeOut : 1;
    uint64_t vupuCrcError : 1;
    uint64_t initialDataOnEepromCrcError : 1;
    uint64_t rfPeripheralInitialisationFail : 1;
    uint64_t mufpgaBootTimeOut : 1;
    uint64_t vupuBootTimeOut : 1;
    uint64_t paBiasSetupTimeOut : 1;
    uint64_t vupuVersionError : 1;
    uint64_t internalError : 1;
    uint64_t channelBandwidthOutOfRange : 1;
    uint64_t cyclicPrefixOutOfRange : 1;
    uint64_t frameDuplexOutOfRange : 1;
    uint64_t ttgOutOfRange : 1;
    uint64_t rtgOutOfRange : 1;
    uint64_t rfGainOutOfRange : 1;
    uint64_t dlSubframeSizeOutOfRange : 1;
    uint64_t ulSubframeSizeOutOfRange : 1;
    uint64_t framePeriodOutOfRange : 1;
    uint64_t numAntennasOutOfRange : 1;
    uint64_t alarmThresholdLowGainOutOfRange : 1;
    uint64_t alarmThresholdHighGainOutOfRange : 1;
    uint64_t alarmThresholdVswrOutOfRange : 1;
    uint64_t paOverPower : 1;
    uint64_t txPowerOutOfRange : 1;
    uint64_t asnGwInhibit : 1;
    uint64_t outOfService : 1;
    uint64_t frameUnlocked : 1;
    uint64_t bsResetting : 1;
    uint64_t lowForwardPower : 1;
    uint64_t onePpsInvalid : 1;
    uint64_t lowTxIqPower : 1;
    uint64_t csFccModeUnLicensed : 1;
    uint64_t fccInterferenceDetected : 1;
    uint64_t fccHighInterference : 1;
    uint64_t frequencyNotSet : 1;
    uint64_t scrtIsDeaf : 1;
    uint64_t paOverdriven : 1;
    uint64_t rxFrequencyNotSet : 1;
    uint64_t samplePllNotLocked : 1;
    uint64_t highInternalNoise : 1;
    uint64_t scinteraInitialisationError : 1;
    uint64_t scinteraRfOutDisabled : 1;
    uint64_t calibrationWarning : 1;
} RF_PATH_ALARMS;

#define MASK_0 (1UL << 63)
#define MASK_1 (1UL << 0)

int main()
{
    printf("-=-----------------------------------------------===\n");
    RF_PATH_ALARMS killme = {0};
    killme.initialisationError = 1;

    uint64_t val;
    memcpy(&val,&killme, sizeof(uint64_t));
   
    uint64_t testme = ((val & MASK_1) > 0);
    printf("testme %lu, val:%lu, \n", testme, val);
    printf("-=-----------------------------------------------===\n");
    return 0;
}
