


/*
Register definition
SPI0 base address: 0x4001 3000
SPI1 / I2S1 base address: 0x4000 3800
SPI2 / I2S2 base address: 0x4000 3C00


18.5.1. Control register 0 (SPI_CTL0)
Address offset: 0x00
Reset value: 0x0000 0000
This register can be accessed by byte (8-bit) or half-word (16-bit) or word (32-bit).
This register has no meaning in I2S mode.
*/

/*
typedef struct
{
Control register 0 (SPI_CTL0)
Address offset: 0x00
Reset value: 0x0000 0000
This register can be accessed by byte (8-bit) or half-word (16-bit) or word (32-bit).
This register has no meaning in I2S mode.


Control register 1 (SPI_CTL1)
Address offset: 0x04
Reset value: 0x0000 0000
This register can be accessed by byte (8-bit) or half-word (16-bit) or word (32-bit).


Status register (SPI_STAT)
Address offset: 0x08
Reset value: 0x0000 0002
This register can be accessed by byte (8-bit) or half-word (16-bit) or word (32-bit).


Data register (SPI_DATA)
Address offset: 0x0C
Reset value: 0x0000 0000
This register can be accessed by byte (8-bit) or half-word (16-bit) or word (32-bit).


CRC polynomial register (SPI_CRCPOLY)
Address offset: 0x10
Reset value: 0x0000 0007
This register can be accessed by byte (8-bit) or half-word (16-bit) or word (32-bit).

RX CRC register (SPI_RCRC)
Address offset: 0x14
Reset value: 0x0000 0000
This register can be accessed by byte (8-bit) or half-word (16-bit) or word (32-bit).

TX CRC register (SPI_TCRC)
Address offset: 0x18
Reset value: 0x0000 0000
This register can be accessed by byte (8-bit) or half-word (16-bit) or word (32-bit).



I2S control register (SPI_I2SCTL)
Address offset: 0x1C
Reset value: 0x0000 0000
This register can be accessed by byte (8-bit) or half-word (16-bit) or word (32-bit).


I2S clock prescaler register (SPI_I2SPSC)
Address offset: 0x20
Reset value: 0x0000 0002
This register can be accessed by byte (8-bit) or half-word (16-bit) or word (32-bit).

} SPI_TypeDef;
*/

// Define a struct to represent the SPI peripheral registers
// This structure maps directly to the memory-mapped registers of an SPI instance.
typedef struct
{
    // Control register 0 (SPI_CTL0)
    // Address offset: 0x00
    // Reset value: 0x0000 0000
    // Note: This register has no meaning in I2S mode.
    volatile uint32_t CTL0;

    // Control register 1 (SPI_CTL1)
    // Address offset: 0x04
    // Reset value: 0x0000 0000
    volatile uint32_t CTL1;

    // Status register (SPI_STAT)
    // Address offset: 0x08
    // Reset value: 0x0000 0002
    volatile uint32_t STAT;

    // Data register (SPI_DATA)
    // Address offset: 0x0C
    // Reset value: 0x0000 0000
    volatile uint32_t DATA;

    // CRC polynomial register (SPI_CRCPOLY)
    // Address offset: 0x10
    // Reset value: 0x0000 0007
    volatile uint32_t CRCPOLY;

    // RX CRC register (SPI_RCRC)
    // Address offset: 0x14
    // Reset value: 0x0000 0000
    volatile uint32_t RCRC;

    // TX CRC register (SPI_TCRC)
    // Address offset: 0x18
    // Reset value: 0x0000 0000
    volatile uint32_t TCRC;

    // I2S control register (SPI_I2SCTL)
    // Address offset: 0x1C
    // Reset value: 0x0000 0000
    volatile uint32_t I2SCTL;

    // I2S clock prescaler register (SPI_I2SPSC)
    // Address offset: 0x20
    // Reset value: 0x0000 0002
    volatile uint32_t I2SPSC;

} SPI_TypeDef;
