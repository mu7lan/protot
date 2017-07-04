//#include "stdafx.h"
#include <stdio.h>
#include "pb_encode.h"
#include "pb_decode.h"
#include "test.pb.h"

bool Encode(pb_ostream_t *stream, const pb_field_t *field, const void *arg)
{
  uint16_t value = *(uint16_t*)arg;

  return true;
}
void pause()
{
	getchar();// 
}

int main(int argc, char* argv[])
{
  uint8_t buffer[128];
  bool ret;
  uint16_t cb_arg = 5;
    
  Request_Status request;
  request.has_devicesRequest = true;
  request.devicesRequest.device[0].deviceType = 1;
  request.devicesRequest.device[0].deviceSN = 2222;
  request.devicesRequest.device[0].has_online = true;
  request.devicesRequest.device[0].online = true;
//  request.devicesRequest.device[0].hwComponents.funcs.encode = &Encode;
  request.devicesRequest.device[0].hwComponents.arg = &cb_arg;
  request.devicesRequest.device_count = 1;
        
 // pb_ostream_t stream = pb_ostream_from_buffer(buffer, sizeof(buffer));
 // ret = pb_encode(&stream, Request_Status_fields, &request);
  
 // pause();
	return 0;
}
