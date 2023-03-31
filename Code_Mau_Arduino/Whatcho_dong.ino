#include <avr/wdt.h>

void whatch_dong(){
  wdt_enable(WDTO_15MS);
  wdt_enable(WDTO_250MS);

  wdt_reset(); 
  wdt_disable();
}

