
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
