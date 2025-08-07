#include "spi.h"

  SPI::SPI(const uint32_t SPI_BASE):
   SPI_P(reinterpret_cast<SPI_TypeDef*>(SPI_BASE))
{

}
