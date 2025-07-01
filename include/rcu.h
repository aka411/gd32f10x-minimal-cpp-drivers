

extern const uint32_t RCU_BASE;
extern RCU_TypeDef* const RCU;

typedef struct
{
  volatile uint32_t CTL;      // Control register (RCU_CTL)
   //Address offset: 0x00
  //Reset value: 0x0000 xx83 where x is undefined.



  volatile uint32_t CFG0;     //Clock configuration register 0 (RCU_CFG0)
  //Address offset: 0x04
  //Reset value: 0x0000 0000


  volatile uint32_t INT;      //Clock interrupt register (RCU_INT)
  //  Address offset: 0x08
 //Reset value: 0x0000 0000

  volatile uint32_t APB2RST; //APB2 reset register (RCU_APB2RST)
//Address offset: 0x0C
//Reset value: 0x0000 0000

  volatile uint32_t APB1RST; //APB1 reset register (RCU_APB1RST)
//Address offset: 0x10
//Reset value: 0x0000 0000

  volatile uint32_t AHBEN;  // AHB enable register (RCU_AHBEN)
//Address offset: 0x14
//Reset value: 0x0000 0014

  volatile uint32_t APB2EN ;// APB2 enable register (RCU_APB2EN)
//Address offset: 0x18
//Reset value: 0x0000 0000

  volatile uint32_t APB1EN; //5.3.8. APB1 enable register (RCU_APB1EN)
//Address offset: 0x1C
//Reset value: 0x0000 0000
//This register can be accessed by byte(8-bit), half-word(16-bit) and word(32-bit)

/*
Backup domain control register (RCU_BDCTL)
Address offset: 0x20
Reset value: 0x0000 0000, reset by backup domain reset.
This register can be accessed by byte(8-bit), half-word(16-bit) and word(32-bit)
*/
}  RCU_TypeDef;
