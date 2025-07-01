




extern const uint32_t GPIOA_BASE;
extern GPIO_TypeDef* const GPIOA;



/****************************
     Register definition

GPIOA base address: 0x4001 0800
GPIOB base address: 0x4001 0C00
GPIOC base address: 0x4001 1000
GPIOD base address: 0x4001 1400
GPIOE base address: 0x4001 1800
GPIOF base address: 0x4001 1C00
GPIOG base address: 0x4001 2000


AFIO base address: 0x4001 0000

*******************************/


typedef struct
{

  volatile uint32_t CTL0; // Port control register 0 (GPIOx_CTL0, x=A..G)
//Address offset: 0x00
//Reset value: 0x4444 4444
//This register has to be accessed by word (32-bit).


 volatile uint32_t CTL1; // Port control register 1 (GPIOx_CTL1, x=A..G)
//Address offset: 0x04
//Reset value: 0x4444 4444
//This register has to be accessed by word (32-bit)



volatile uint32_t ISTAT;//Port input status register (GPIOx_ISTAT, x=A..G)
//Address offset: 0x08
//Reset value: 0x0000 XXXX
//This register has to be accessed by word (32-bit).



volatile uint32_t OCTL;//  Port output control register (GPIOx_OCTL, x=A..G)
//Address offset: 0x0C
//Reset value: 0x0000 0000
//This register has to be accessed by word(32-bit).


/*
Port bit operate register (GPIOx_BOP, x=A..G)
Address offset: 0x10
Reset value: 0x0000 0000
This register has to be accessed by word(32-bit).



Port bit clear register (GPIOx_BC, x=A..G)
Address offset: 0x14
Reset value: 0x0000 0000
This register has to be accessed by word (32-bit).



Port configuration lock register (GPIOx_LOCK, x=A..G)
Address offset: 0x18
Reset value: 0x0000 0000
This register has to be accessed by word(32-bit).

*/


}GPIO_TypeDef;
