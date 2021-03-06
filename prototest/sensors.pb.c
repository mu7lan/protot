/* Automatically generated nanopb constant definitions */
/* Generated by nanopb-0.3.8 at Sat Jul 01 22:05:23 2017. */

#include "sensors.pb.h"

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif



const pb_field_t Update_fields[13] = {
    PB_FIELD(  1, UINT32  , SINGULAR, STATIC  , FIRST, Update, version, version, 0),
    PB_FIELD(  2, UINT64  , SINGULAR, STATIC  , OTHER, Update, origin, version, 0),
    PB_FIELD(  3, UINT32  , SINGULAR, STATIC  , OTHER, Update, hwrev, origin, 0),
    PB_ONEOF_FIELD(time_type,   4, INT64   , ONEOF, STATIC  , OTHER, Update, time, hwrev, 0),
    PB_ONEOF_FIELD(time_type,   5, UINT32  , ONEOF, STATIC  , UNION, Update, rel_time, hwrev, 0),
    PB_FIELD( 64, MESSAGE , REPEATED, CALLBACK, OTHER, Update, position, time_type.rel_time, &Position_fields),
    PB_FIELD( 65, MESSAGE , REPEATED, CALLBACK, OTHER, Update, velocity, position, &Velocity_fields),
    PB_FIELD( 66, MESSAGE , REPEATED, CALLBACK, OTHER, Update, acceleration, velocity, &Acceleration_fields),
    PB_FIELD( 67, MESSAGE , REPEATED, CALLBACK, OTHER, Update, orientation, acceleration, &Orientation_fields),
    PB_FIELD( 68, MESSAGE , REPEATED, CALLBACK, OTHER, Update, angular_rate, orientation, &AngularRate_fields),
    PB_FIELD( 70, MESSAGE , REPEATED, CALLBACK, OTHER, Update, air_pressure, angular_rate, &AirPressure_fields),
    PB_FIELD( 71, MESSAGE , REPEATED, CALLBACK, OTHER, Update, illumination, air_pressure, &Illumination_fields),
    PB_LAST_FIELD
};

const pb_field_t Rate_fields[3] = {
    PB_FIELD(  1, FLOAT   , SINGULAR, STATIC  , FIRST, Rate, frequency, frequency, 0),
    PB_FIELD(  2, FLOAT   , SINGULAR, STATIC  , OTHER, Rate, delta_time, frequency, 0),
    PB_LAST_FIELD
};

const pb_field_t Error_fields[3] = {
    PB_FIELD(  1, FLOAT   , SINGULAR, STATIC  , FIRST, Error, bias, bias, 0),
    PB_FIELD(  2, FLOAT   , SINGULAR, STATIC  , OTHER, Error, noise, bias, 0),
    PB_LAST_FIELD
};

const pb_field_t Position_fields[15] = {
    PB_FIELD(  1, MESSAGE , SINGULAR, STATIC  , FIRST, Position, rate, rate, &Rate_fields),
    PB_FIELD(  2, DOUBLE  , SINGULAR, STATIC  , OTHER, Position, latitude, rate, 0),
    PB_FIELD(  3, MESSAGE , SINGULAR, STATIC  , OTHER, Position, latitude_error, latitude, &Error_fields),
    PB_FIELD(  4, DOUBLE  , SINGULAR, STATIC  , OTHER, Position, longitude, latitude_error, 0),
    PB_FIELD(  5, MESSAGE , SINGULAR, STATIC  , OTHER, Position, longitude_error, longitude, &Error_fields),
    PB_FIELD(  6, FLOAT   , SINGULAR, STATIC  , OTHER, Position, altitude, longitude_error, 0),
    PB_FIELD(  7, MESSAGE , SINGULAR, STATIC  , OTHER, Position, altitude_error, altitude, &Error_fields),
    PB_FIELD(  8, DOUBLE  , SINGULAR, STATIC  , OTHER, Position, x, altitude_error, 0),
    PB_FIELD(  9, MESSAGE , SINGULAR, STATIC  , OTHER, Position, x_error, x, &Error_fields),
    PB_FIELD( 10, DOUBLE  , SINGULAR, STATIC  , OTHER, Position, y, x_error, 0),
    PB_FIELD( 11, MESSAGE , SINGULAR, STATIC  , OTHER, Position, y_error, y, &Error_fields),
    PB_FIELD( 12, DOUBLE  , SINGULAR, STATIC  , OTHER, Position, z, y_error, 0),
    PB_FIELD( 13, MESSAGE , SINGULAR, STATIC  , OTHER, Position, z_error, z, &Error_fields),
    PB_FIELD( 14, BOOL    , SINGULAR, STATIC  , OTHER, Position, local_origin, z_error, 0),
    PB_LAST_FIELD
};

const pb_field_t Velocity_fields[10] = {
    PB_FIELD(  1, MESSAGE , SINGULAR, STATIC  , FIRST, Velocity, rate, rate, &Rate_fields),
    PB_FIELD(  2, FLOAT   , SINGULAR, STATIC  , OTHER, Velocity, x, rate, 0),
    PB_FIELD(  3, MESSAGE , SINGULAR, STATIC  , OTHER, Velocity, x_error, x, &Error_fields),
    PB_FIELD(  4, FLOAT   , SINGULAR, STATIC  , OTHER, Velocity, y, x_error, 0),
    PB_FIELD(  5, MESSAGE , SINGULAR, STATIC  , OTHER, Velocity, y_error, y, &Error_fields),
    PB_FIELD(  6, FLOAT   , SINGULAR, STATIC  , OTHER, Velocity, z, y_error, 0),
    PB_FIELD(  7, MESSAGE , SINGULAR, STATIC  , OTHER, Velocity, z_error, z, &Error_fields),
    PB_FIELD(  8, FLOAT   , SINGULAR, STATIC  , OTHER, Velocity, total, z_error, 0),
    PB_FIELD(  9, MESSAGE , SINGULAR, STATIC  , OTHER, Velocity, total_error, total, &Error_fields),
    PB_LAST_FIELD
};

const pb_field_t Acceleration_fields[8] = {
    PB_FIELD(  1, MESSAGE , SINGULAR, STATIC  , FIRST, Acceleration, rate, rate, &Rate_fields),
    PB_FIELD(  2, FLOAT   , SINGULAR, STATIC  , OTHER, Acceleration, x, rate, 0),
    PB_FIELD(  3, MESSAGE , SINGULAR, STATIC  , OTHER, Acceleration, x_error, x, &Error_fields),
    PB_FIELD(  4, FLOAT   , SINGULAR, STATIC  , OTHER, Acceleration, y, x_error, 0),
    PB_FIELD(  5, MESSAGE , SINGULAR, STATIC  , OTHER, Acceleration, y_error, y, &Error_fields),
    PB_FIELD(  6, FLOAT   , SINGULAR, STATIC  , OTHER, Acceleration, z, y_error, 0),
    PB_FIELD(  7, MESSAGE , SINGULAR, STATIC  , OTHER, Acceleration, z_error, z, &Error_fields),
    PB_LAST_FIELD
};

const pb_field_t Orientation_fields[13] = {
    PB_FIELD(  1, MESSAGE , SINGULAR, STATIC  , FIRST, Orientation, rate, rate, &Rate_fields),
    PB_FIELD(  2, FLOAT   , SINGULAR, STATIC  , OTHER, Orientation, heading, rate, 0),
    PB_FIELD(  3, MESSAGE , SINGULAR, STATIC  , OTHER, Orientation, heading_error, heading, &Error_fields),
    PB_FIELD(  4, FLOAT   , SINGULAR, STATIC  , OTHER, Orientation, elevation, heading_error, 0),
    PB_FIELD(  5, MESSAGE , SINGULAR, STATIC  , OTHER, Orientation, elevation_error, elevation, &Error_fields),
    PB_FIELD(  6, FLOAT   , SINGULAR, STATIC  , OTHER, Orientation, bank, elevation_error, 0),
    PB_FIELD(  7, MESSAGE , SINGULAR, STATIC  , OTHER, Orientation, bank_error, bank, &Error_fields),
    PB_FIELD( 14, FLOAT   , SINGULAR, STATIC  , OTHER, Orientation, a, bank_error, 0),
    PB_FIELD( 15, FLOAT   , SINGULAR, STATIC  , OTHER, Orientation, b, a, 0),
    PB_FIELD( 16, FLOAT   , SINGULAR, STATIC  , OTHER, Orientation, c, b, 0),
    PB_FIELD( 17, FLOAT   , SINGULAR, STATIC  , OTHER, Orientation, d, c, 0),
    PB_FIELD( 18, MESSAGE , SINGULAR, STATIC  , OTHER, Orientation, quat_error, d, &Error_fields),
    PB_LAST_FIELD
};

const pb_field_t AngularRate_fields[8] = {
    PB_FIELD(  1, MESSAGE , SINGULAR, STATIC  , FIRST, AngularRate, rate, rate, &Rate_fields),
    PB_FIELD(  2, FLOAT   , SINGULAR, STATIC  , OTHER, AngularRate, yaw, rate, 0),
    PB_FIELD(  3, MESSAGE , SINGULAR, STATIC  , OTHER, AngularRate, yaw_error, yaw, &Error_fields),
    PB_FIELD(  4, FLOAT   , SINGULAR, STATIC  , OTHER, AngularRate, pitch, yaw_error, 0),
    PB_FIELD(  5, MESSAGE , SINGULAR, STATIC  , OTHER, AngularRate, pitch_error, pitch, &Error_fields),
    PB_FIELD(  6, FLOAT   , SINGULAR, STATIC  , OTHER, AngularRate, roll, pitch_error, 0),
    PB_FIELD(  7, MESSAGE , SINGULAR, STATIC  , OTHER, AngularRate, roll_error, roll, &Error_fields),
    PB_LAST_FIELD
};

const pb_field_t AirPressure_fields[4] = {
    PB_FIELD(  1, MESSAGE , SINGULAR, STATIC  , FIRST, AirPressure, rate, rate, &Rate_fields),
    PB_FIELD(  2, FLOAT   , SINGULAR, STATIC  , OTHER, AirPressure, air_pressure, rate, 0),
    PB_FIELD(  3, MESSAGE , SINGULAR, STATIC  , OTHER, AirPressure, air_pressure_error, air_pressure, &Error_fields),
    PB_LAST_FIELD
};

const pb_field_t Illumination_fields[4] = {
    PB_FIELD(  1, MESSAGE , SINGULAR, STATIC  , FIRST, Illumination, rate, rate, &Rate_fields),
    PB_FIELD(  2, FLOAT   , SINGULAR, STATIC  , OTHER, Illumination, illumination, rate, 0),
    PB_FIELD(  3, MESSAGE , SINGULAR, STATIC  , OTHER, Illumination, illumination_error, illumination, &Error_fields),
    PB_LAST_FIELD
};


/* Check that field information fits in pb_field_t */
#if !defined(PB_FIELD_32BIT)
/* If you get an error here, it means that you need to define PB_FIELD_32BIT
 * compile-time option. You can do that in pb.h or on compiler command line.
 * 
 * The reason you need to do this is that some of your messages contain tag
 * numbers or field sizes that are larger than what can fit in 8 or 16 bit
 * field descriptors.
 */
PB_STATIC_ASSERT((pb_membersize(Position, rate) < 65536 && pb_membersize(Position, latitude_error) < 65536 && pb_membersize(Position, longitude_error) < 65536 && pb_membersize(Position, altitude_error) < 65536 && pb_membersize(Position, x_error) < 65536 && pb_membersize(Position, y_error) < 65536 && pb_membersize(Position, z_error) < 65536 && pb_membersize(Velocity, rate) < 65536 && pb_membersize(Velocity, x_error) < 65536 && pb_membersize(Velocity, y_error) < 65536 && pb_membersize(Velocity, z_error) < 65536 && pb_membersize(Velocity, total_error) < 65536 && pb_membersize(Acceleration, rate) < 65536 && pb_membersize(Acceleration, x_error) < 65536 && pb_membersize(Acceleration, y_error) < 65536 && pb_membersize(Acceleration, z_error) < 65536 && pb_membersize(Orientation, rate) < 65536 && pb_membersize(Orientation, heading_error) < 65536 && pb_membersize(Orientation, elevation_error) < 65536 && pb_membersize(Orientation, bank_error) < 65536 && pb_membersize(Orientation, quat_error) < 65536 && pb_membersize(AngularRate, rate) < 65536 && pb_membersize(AngularRate, yaw_error) < 65536 && pb_membersize(AngularRate, pitch_error) < 65536 && pb_membersize(AngularRate, roll_error) < 65536 && pb_membersize(AirPressure, rate) < 65536 && pb_membersize(AirPressure, air_pressure_error) < 65536 && pb_membersize(Illumination, rate) < 65536 && pb_membersize(Illumination, illumination_error) < 65536), YOU_MUST_DEFINE_PB_FIELD_32BIT_FOR_MESSAGES_Update_Rate_Error_Position_Velocity_Acceleration_Orientation_AngularRate_AirPressure_Illumination)
#endif

#if !defined(PB_FIELD_16BIT) && !defined(PB_FIELD_32BIT)
/* If you get an error here, it means that you need to define PB_FIELD_16BIT
 * compile-time option. You can do that in pb.h or on compiler command line.
 * 
 * The reason you need to do this is that some of your messages contain tag
 * numbers or field sizes that are larger than what can fit in the default
 * 8 bit descriptors.
 */
PB_STATIC_ASSERT((pb_membersize(Position, rate) < 256 && pb_membersize(Position, latitude_error) < 256 && pb_membersize(Position, longitude_error) < 256 && pb_membersize(Position, altitude_error) < 256 && pb_membersize(Position, x_error) < 256 && pb_membersize(Position, y_error) < 256 && pb_membersize(Position, z_error) < 256 && pb_membersize(Velocity, rate) < 256 && pb_membersize(Velocity, x_error) < 256 && pb_membersize(Velocity, y_error) < 256 && pb_membersize(Velocity, z_error) < 256 && pb_membersize(Velocity, total_error) < 256 && pb_membersize(Acceleration, rate) < 256 && pb_membersize(Acceleration, x_error) < 256 && pb_membersize(Acceleration, y_error) < 256 && pb_membersize(Acceleration, z_error) < 256 && pb_membersize(Orientation, rate) < 256 && pb_membersize(Orientation, heading_error) < 256 && pb_membersize(Orientation, elevation_error) < 256 && pb_membersize(Orientation, bank_error) < 256 && pb_membersize(Orientation, quat_error) < 256 && pb_membersize(AngularRate, rate) < 256 && pb_membersize(AngularRate, yaw_error) < 256 && pb_membersize(AngularRate, pitch_error) < 256 && pb_membersize(AngularRate, roll_error) < 256 && pb_membersize(AirPressure, rate) < 256 && pb_membersize(AirPressure, air_pressure_error) < 256 && pb_membersize(Illumination, rate) < 256 && pb_membersize(Illumination, illumination_error) < 256), YOU_MUST_DEFINE_PB_FIELD_16BIT_FOR_MESSAGES_Update_Rate_Error_Position_Velocity_Acceleration_Orientation_AngularRate_AirPressure_Illumination)
#endif


/* On some platforms (such as AVR), double is really float.
 * These are not directly supported by nanopb, but see example_avr_double.
 * To get rid of this error, remove any double fields from your .proto.
 */
PB_STATIC_ASSERT(sizeof(double) == 8, DOUBLE_MUST_BE_8_BYTES)

/* @@protoc_insertion_point(eof) */
