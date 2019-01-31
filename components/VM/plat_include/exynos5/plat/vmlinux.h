/*
 * Copyright 2019, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the BSD 2-Clause license. Note that NO WARRANTY is provided.
 * See "LICENSE_BSD2.txt" for details.
 *
 * @TAG(DATA61_BSD)
 */
#ifndef VMLINUX_EXYNOS5_H
#define VMLINUX_EXYNOS5_H

#include <sel4arm-vmm/vm.h>

#define VUSB_ADDRESS         0x33330000
#define VUSB_IRQ             198
#define VUSB_NINDEX          5
#define VUSB_NBADGE          0x123

#define LINUX_RAM_BASE    0x40000000
#define LINUX_RAM_PADDR_BASE LINUX_RAM_BASE
#define LINUX_RAM_SIZE    0x10000000 //0x20000000
#define PLAT_RAM_END      0xc0000000
#define LINUX_RAM_OFFSET  0
#define DTB_ADDR          (LINUX_RAM_BASE + 0x0F000000)

static const int linux_pt_irqs[] = {
    27,
    32,
    33,
    34,
    35,
    36,
    37,
    38,
    39,
    40,
    41,
    42,
    43,
    44,
    45,
    46,
    47,
    48,
    49,
    50,
    51,
    52,
    53,
    54,
    55,
    56,
    57,
    58,
    59,
    60,
    61,
    62,
    63,
    64,
    65,
    66,
    67,
    68, // PWM
    69, // PWM
    70, // PWM
    71, // PWM
    72, // PWM
    74, // WATCHDOG
    75,
    76,
    77,
    78,
    79,
    82,
    83, // UART0
    84, // UART1
    85, // UART2
    86, // UART3
    88, // I2C0
    89, // I2C1
    90, // I2C2
    91, // I2C3
    92, // I2C4
    93, // I2C5
    94, // I2C6
    95, // I2C7
    106,
    107, // SDMMC0
    109, // SDMMC2
    110, // GPIO NEW
    116,
    117,
    118,
    138,
    142,
    144,
    146,
    192,
    193,
    194,
    195,
    201,
    218,
    220,


#ifndef FEATURE_VUSB
    103
#endif
};

void vusb_notify(void);

#endif /* VMLINUX_H */

