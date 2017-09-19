#pragma once

#ifndef NEO_GPS_STREAM
  #define NEO_GPS_STREAM NeoGPS::Stream
  #ifdef __GNUC__
    #define NEO_GPS_STREAM_DEFAULT_IMPL_WARN \
    __attribute__((deprecated("You are using a function which uses NEO_GPS_STREAM with the default implementation, which does nothing!")))
  #endif

/**
 * This file implements a non working dummy implementation for Stream.
 **/
namespace NeoGPS {
  
  class Stream {
  public:
    bool available() { return false; }
    char read() { return '\0'; }
    void print(char) {}
  };
}
#endif

#ifndef NEO_GPS_STREAM_DEFAULT_IMPL_WARN
  #define NEO_GPS_STREAM_DEFAULT_IMPL_WARN
#endif
