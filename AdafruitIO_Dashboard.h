//
// Adafruit invests time and resources providing this open source code.
// Please support Adafruit and open source hardware by purchasing
// products from Adafruit!
//
// Copyright (c) 2015-2016 Adafruit Industries
// Authors: Tony DiCola, Todd Treece
// Licensed under the MIT license.
//
// All text above must be included in any redistribution.
//
#ifndef ADAFRUITIO_DASHBOARD_H
#define ADAFRUITIO_DASHBOARD_H

#include "Arduino.h"
#include "AdafruitIO_Definitions.h"

// forward declaration
class AdafruitIO;

class AdafruitIO_Dashboard {

  public:
    AdafruitIO_Dashboard(AdafruitIO *io, const char *key);
    ~AdafruitIO_Dashboard();
    const char *key;

  private:
    AdafruitIO *_io;

};

#endif // ADAFRUITIO_DASHBOARD_H
