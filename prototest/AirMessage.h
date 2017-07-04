// Copyright © 2017 6FLO
// Use of this source code is governed by the MIT license that can be found in the LICENSE file.

#ifndef _AIRMESSAGE_H_
#define _AIRMESSAGE_H_

#include "pb.h"
#include "pb_encode.h"
#include "pb_decode.h"
//#include "deviceData.pb.h"
#include "appData.pb.h" // APP(CHIP)-->AVR
//#include "sensors.pb.h" //AVR-->APP: deviceData: Update message

//typedef api_DeviceData api_Devicedata_t;
typedef api_AppData appdata_t;

class AirMessage
{
public:
//  static void encodeDeviceData(api_Devicedata_t *data, uint8_t **buffer, size_t *size);
  static bool decodeAppData(appdata_t *receiveData, const uint8_t *payload, size_t size);
};

#endif
