/*
 * Copyright (C) 2014 Freie Universität Berlin
 *
 * This file is subject to the terms and conditions of the GNU Lesser General
 * Public License v2.1. See the file LICENSE in the top level directory for more
 * details.
 */

/**
 * @defgroup    boards_pca10005 PCA10005 (nRF51822 Development Kit)
 * @ingroup     boards
 * @brief       Board specific files for the nRF51822 board pca10005
 * @{
 *
 * @file
 * @brief       Board specific definitions for the nRF51822 evaluation board pca10005
 *
 * @author      Christian Kühling <kuehling@zedat.fu-berlin.de>
 * @author      Timo Ziegler <timo.ziegler@fu-berlin.de>
 */

#ifndef BOARD_H_
#define BOARD_H_

#include "cpu.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @name Define the nominal CPU core clock in this board
 */
#define F_CPU               (16000000UL)

/**
 * @brief   Xtimer configuration
 * @{
 */
#define XTIMER                      (0)
#define XTIMER_CHAN                 (0)
#define XTIMER_MASK                 (0xff000000)
#define XTIMER_SHIFT_ON_COMPARE     (2)
#define XTIMER_BACKOFF              (40)
/** @} */

/**
 * @name Define the boards stdio
 * @{
 */
#define STDIO               UART_DEV(0)
#define STDIO_BAUDRATE      (115200U)
#define STDIO_RX_BUFSIZE    (64U)
/** @} */

/**
 * @name Macros for controlling the on-board LEDs.
 * @{
 */
#define LED_RED_PIN         1

#define LED_RED_ON          (NRF_GPIO->OUTSET = (1 << LED_RED_PIN))
#define LED_RED_OFF         (NRF_GPIO->OUTCLR = (1 << LED_RED_PIN))
#define LED_RED_TOGGLE      (NRF_GPIO->OUT ^= (1 << LED_RED_PIN))
#define LED_GREEN_ON        /* not available */
#define LED_GREEN_OFF       /* not available */
#define LED_GREEN_TOGGLE    /* not available */
#define LED_BLUE_ON         /* not available */
#define LED_BLUE_OFF        /* not available */
#define LED_BLUE_TOGGLE     /* not available */
/* @} */

/**
 * @brief Initialize board specific hardware, including clock, LEDs and std-IO
 */
void board_init(void);

#ifdef __cplusplus
}
#endif

#endif /* BOARD_H_ */
/** @} */
