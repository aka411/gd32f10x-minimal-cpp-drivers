#include "spi.h"

  SPI::SPI(const uint32_t SPI_BASE):
   SPI_P((SPI_TypeDef*)(SPI_BASE))
{

}



void SPI::setSPIConfig()
{

  SPI_P->CTL0 &= SPI_CTL0_RESET_VALUE ;
  SPI_P->CTL0 |=SPI_CTL0_PREDEFINED_VAL ;
  SPI_P->CTL1 |= SPI_CTL1_NSSDRV_SET;
}

void SPI::enableSPI()
{
  SPI_P->CTL0 |=SPI_CTL0_SPI_EN ;
}

void SPI::disableSPI()
{

  while ((SPI_P->STAT & (0x01<<7U))) {
        // Optional: Add a timeout or error handling if it gets stuck
    }
  SPI_P->CTL0 &=~(SPI_CTL0_SPI_EN );
  
}

void SPI::transfer16bit(const uint16_t data)
{

while ((SPI_P->STAT & (0x01<<7U))) {
      // Optional: Add a timeout or error handling if it gets stuck
  }

SPI_P->DATA = data;
}
