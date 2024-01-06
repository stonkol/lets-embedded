# Section 6: tips

## Memory map of the MCU (Micro Controller) (STM32F4xx)

- Processor: ARM Cortex M4
- Width of the system bus is 32 bits, so can produce 2^32 of different addresses. 4G from 0x0000_0000 to 0xffff_ffff.
- When the processor produces 0x4002_0000 on the system bus, it is refereing to GPIOA registers.

- **for STM32F4xx use this doc** - [DM00031020.pdf](https://waijung1.aimagin.com/DM00031020.pdf)**

1. What is the base address of AHB1 BUS peripheral registers?
AHMB1_PERI_START_ADDRESS : 0x4002_0000
AHMB1_PERI_END_ADDRESS : 0X4007_FFFF

1. What is the base address of GPIO registers?
0x4002_0000

1. What is the base address of RCC engine registers of the MCU?
0x4002_3800

1. What is the base address of APB1 peripherals?
0x4000 0000

1. What is the base address of FLASH memory?
0x0800 0000

1. What is the base address of SRAM2?
SRAM1 starts from 0x2000_000 + X
SIZE of SRAM1 = X bytes
base address of SRAM2 = 0x2000_000 + X
BASE_ADDRESS_OF_SRAM2 = BASE_ADDRESS_OF_SRAM2 + SIZE of SRAM1

1. What is the base address of ADC registers?
0x4001_2000

# Section 8: MCU Bus Interfaces

1. If instructions are present in between the memory locations  0x0000_0000 to 0x1FFF_FFFC then the Cortex Processor will fetch the instructions using ICODE interface.

1. If the instruction are presented outside of 0x0000_0000 to 0x1FFF_FFFC, then processor fetches the data over system bus

1. If the data is present in between the memory locations 0x0000_0000 to 0x1FFF_FFFF, then processor fetches the data over D-CODE bus interface.

1. If the data is present in outside the memory locations 0x0000_0000 to 0x1FFF_FFFF, then processor fetches the data over system bus.

### Question

1. Is is true that Flash is no connected to the cortex core? T
1. Processor can fetch instructions from SRAM over i-code bus? F
1. The ARM M$ can run up to 168MHz? T
1. SRAM can connect directly to System Bus? T
1. APB1 bus can oprate at 180MH? F
1. If a peripheral operates at 92MHz via APB2 bus? F
1. Processor can fecth instructions as well as data simultaneosly from SRAM? F
1. Processor can fecth instructions as well as data simultaneosly from FLASH? T. have icode and dcode
1. What is max HCLK(clock) value of your MCU? 168MHz
1. What is max P1LK(clock) value of your MCU? 42MHz
1. What is max P2LK(clock) value of your MCU? 84MHz
1. GPIOs and processor communicate over AHB1 bus? T
1. USB OTG and processor communicate over AHB2 bus? T
1. USB OTG and GPIOs communicate to processor concurrently or simultaneously? F

# Sec 9: Clock

Sources:

1. Crystal Oscillator (External to the MCU)
1. The RC Oscillator (Internal to the MCU)
1. The PLL (Phase Locked Loop)

