#include "spi.h"

  SPI::SPI(const uint32_t SPI_BASE):
   SPI_P((SPI_TypeDef*)(SPI_BASE))
{

}



void SPI::setSPIConfig()
{

  SPI_P->CTL0 = SPI_CTL0_RESET_VALUE ;
  SPI_P->CTL0 |=SPI_CTL0_PREDEFINED_VAL ;
  SPI_P->CTL1 |= SPI_CTL1_NSSDRV_SET;
}

void SPI::enableSPI()
{
  SPI_P->CTL0 |=SPI_CTL0_SPI_EN;
}

void SPI::disableSPI()
{

  while ((SPI_P->STAT & (0x01<<7U)) & (SPI_CTL0_SPI_EN &   SPI_P->CTL0 )) {
        // Optional: Add a timeout or error handling if it gets stuck
    }
  SPI_P->CTL0 &=~(SPI_CTL0_SPI_EN );

}

void SPI::transfer8bit(const uint8_t data)
{
  //1 TBE check buffer thats better
  //1 TBE Transmit buffer empty
  //0: Transmit buffer is not empty
  //1: Transmit buffer is empty
    while (!(SPI_P->STAT & (0x01<<1U))) {
          // Optional: Add a timeout or error handling if it gets stuck
      }

SPI_P->DATA = data;
}
