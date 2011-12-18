#include <stdint.h>

/* Hardware definition. Names similar to official manual. */
#ifndef __HW_H__
#define __HW_H__

extern volatile uint32_t regs[];

#define SPIDY_QUARTZ		(12 * 1000 * 1000)

/* uart */
#define REG_U0THR		(0x40008000 / 4)
#define REG_U0RBR		(0x40008000 / 4)
#define REG_U0IER		(0x40008004 / 4)
#define REG_U0IIR		(0x40008008 / 4) /* read */
#define REG_U0FCR		(0x40008008 / 4) /* write */
#define REG_U0LCR		(0x4000800c / 4)
#define REG_U0LSR		(0x40008014 / 4)
#define REG_U0LSR_THRE		0x20
#define REG_8BIT_WORD		0x3
#define REG_FIFO_OFF		0x0
#define REG_FIFO_ON		0x1

#define REG_UARTDLL		(0x40008000 / 4) /* when DLAB=1 */
#define REG_UARTDLM		(0x40008004 / 4) /* when DLAB=1 */
#define REG_UARTFDR		(0x40008028 / 4) /* fractional divider */

/* clock control */
#define REG_AHBCLKCTRL		(0x40048080 / 4)
#define REG_AHBCLKCTRL_CT32B0	(1 << 9)
#define REG_AHBCLKCTRL_CT32B1	(1 << 10)
#define REG_AHBCLKCTRL_GPIO	(1 << 6)
#define REG_AHBCLKCTRL_UART	(1 << 12)
#define REG_AHBCLKCTRL_IOCON	(1 << 16)
#define REG_UARTCLKDIV		(0x40048098 / 4)

/* PIO enabling */
#define REG_PIORX		(0x400440A4 / 4)
#define REG_PIOTX		(0x400440A8 / 4)

/* counter 0 */
#define REG_TMR32B0TCR		(0x40014004 / 4)
#define REG_TMR32B0TC		(0x40014008 / 4)
#define REG_TMR32B0PR		(0x4001400c / 4)
#define REG_TMR32B0MCR		(0x40014014 / 4)
#define REG_TMR32B0MR0		(0x40014018 / 4)
#define REG_TMR32B0MR1		(0x4001401c / 4)
#define REG_TMR32B0MR2		(0x40014020 / 4)
#define REG_TMR32B0MR3		(0x40014024 / 4)
#define REG_TMR32B0PWMC		(0x40014074 / 4)

/* counter 1 */
#define REG_TMR32B1PC		(0x40018010 / 4)
#define REG_TMR32B1TCR		(0x40018004 / 4)
#define REG_TMR32B1TC		(0x40018008 / 4)
#define REG_TMR32B1PR		(0x4001800c / 4)
#define REG_TMR32B1MCR		(0x40018014 / 4)
#define REG_TMR32B1MR0		(0x40018018 / 4)
#define REG_TMR32B1MR1		(0x4001801c / 4)
#define REG_TMR32B1MR2		(0x40018020 / 4)
#define REG_TMR32B1MR3		(0x40018024 / 4)
#define REG_TMR32B1PWMC		(0x40018074 / 4)

/* gpio port 3 */
#define REG_GPIO3DAT		(0x50033ffc / 4)
#define REG_GPIO3DIR		(0x50038000 / 4)

#endif /* __HW_H__ */
