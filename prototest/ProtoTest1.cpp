#include <stdio.h>
#include "pb_encode.h"
#include "pb_decode.h"
#include "sensors.pb.h"

bool Encode(pb_ostream_t *stream, const pb_field_t *field, const void *arg)
{
  uint16_t value = *(uint16_t*)arg;

  return true;
}
void pause()
{
	getchar();
}

bool gpsSensor_callback(pb_ostream_t *stream, const pb_field_t *field, void * const *arg)
{
	Position gpsPosition = Position_init_zero;

	gpsPosition.latitude = 12.3456;  //get from buffer/??
	gpsPosition.longitude = 22.2345;
	gpsPosition.altitude = 9;

	//gpsPosition.rate = 1; //?

	/* This encodes the header for the field, based on the constant info from pb_field_t. */
	if (!pb_encode_tag_for_field(stream, field))
		return false;

	/* This encodes the data for the field, based on our FileInfo structure. */
	if (!pb_encode_submessage(stream, Position_fields, &gpsPosition))
		return false;

	return true;
}

int main(int argc, char* argv[])
{
  bool ret;
 
  api_AppData Data = a;
  Data.hwrev = 1;Update_init_zero
  Data.origin = 100; //uuid

  uint16_t cb_arg = 2;
  //Send some periodic (200ms) UTC+GPS data coordinates here
  Data.time_type.time = 1498914608;
  Data.which_time_type = Update_time_tag; //UTC timestamp here..

  Data.position.funcs.encode = &gpsSensor_callback;
  Data.position.arg = &cb_arg;

  uint8_t encBuf[50];
  size_t size = sizeof(encBuf);
  pb_ostream_t sendStream = pb_ostream_from_buffer(encBuf, size);
  pb_encode(&sendStream, Update_fields, &Data);

  fprintf(stderr, "Writing %d serialized bytes\n", sendStream.bytes_written); // See the length of message
  fwrite(encBuf, size, 1, stdout);            // Write to stdout to allow direct command line piping 

  
 // pause();
	return 0;
}
