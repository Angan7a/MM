#pragma once
#include "../mesh/PhoneAPI.h"

class NRF52Bluetooth
{
  public:
    void setup();
};
class BluetoothPhoneAPI : public PhoneAPI
{
    /**
     * Subclasses can use this as a hook to provide custom notifications for their transport (i.e. bluetooth notifies)
     */
    virtual void onNowHasData(uint32_t fromRadioNum);
    
};
extern PhoneAPI *bluetoothPhoneAPI;
