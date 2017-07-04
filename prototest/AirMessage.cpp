// Copyright © 2017 6Flo
// Use of this source code is governed by the MIT license that can be found in the LICENSE file.

#include "AirMessage.h"

#define BI_BUFFER_SIZE 200

bool AirMessage::decodeAppData(appdata_t *receiveData, const uint8_t *payload, size_t length)
{
  pb_istream_t stream = pb_istream_from_buffer(payload, length);
  if (!pb_decode(&stream, api_AppData_fields, receiveData))
  {
    return false;
  }
#ifdef LED_BUILTIN
  receiveData->light ? digitalWrite(LED_BUILTIN, HIGH) : digitalWrite(LED_BUILTIN, LOW);
#endif
  return true;
}
/*
 void AirMessage::encodeDeviceData(api_Devicedata_t *data, uint8_t **buffer, size_t *size)
{
  uint8_t message[BI_BUFFER_SIZE];

  pb_ostream_t sendStream = pb_ostream_from_buffer(message, sizeof(message));
  pb_encode(&sendStream, Update_fields, data);
  *buffer = message;
  *size = sendStream.bytes_written;
}
*/