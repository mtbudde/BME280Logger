/*
 *
 *   BME280 Logger Software
 *   Author: Matthew Budde - 2018
 *
 *   This program interfaces with the BME280 Logger board developed by
 *   Matthew Budde to provide a user interface to log and monitor temperature,
 *   pressure, and humidity.
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include "ftd2xx.h"

int main( int argc, char **argv ) {
  cout( "Select and option from the list below.\n\n" );
  cout( "1: Single Read\n" );
  cout( "2: Timed Read\n" );
  cout( "3: Log Data\n" );
}
