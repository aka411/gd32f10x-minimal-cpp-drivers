#include "gpio.h"


 GPIO::GPIO(const uint32_t GPIO_BASE ):
GPIO_P(reinterpret_cast<GPIO_TypeDef*>(GPIO_BASE))
{

}
