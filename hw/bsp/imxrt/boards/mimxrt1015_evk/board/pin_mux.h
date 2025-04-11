/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

#ifndef _PIN_MUX_H_
#define _PIN_MUX_H_

/***********************************************************************************************************************
 * Definitions
 **********************************************************************************************************************/

/*! @brief Direction type  */
typedef enum _pin_mux_direction
{
  kPIN_MUX_DirectionInput = 0U,         /* Input direction */
  kPIN_MUX_DirectionOutput = 1U,        /* Output direction */
  kPIN_MUX_DirectionInputOrOutput = 2U  /* Input or output direction */
} pin_mux_direction_t;

/*!
 * @addtogroup pin_mux
 * @{
 */

/***********************************************************************************************************************
 * API
 **********************************************************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif

/*!
 * @brief Calls initialization functions.
 *
 */
void BOARD_InitBootPins(void);

/* GPIO_EMC_09 (number 1), USER_BUTTON/SW4 */
/* Routed pin properties */
#define BOARD_INITPINS_USER_BUTTON_PERIPHERAL                              GPIO2   /*!< Peripheral name */
#define BOARD_INITPINS_USER_BUTTON_SIGNAL                                gpio_io   /*!< Signal name */
#define BOARD_INITPINS_USER_BUTTON_CHANNEL                                    9U   /*!< Signal channel */

/* Symbols to be used with GPIO driver */
#define BOARD_INITPINS_USER_BUTTON_GPIO                                    GPIO2   /*!< GPIO peripheral base pointer */
#define BOARD_INITPINS_USER_BUTTON_GPIO_PIN                                   9U   /*!< GPIO pin number */
#define BOARD_INITPINS_USER_BUTTON_GPIO_PIN_MASK                      (1U << 9U)   /*!< GPIO pin mask */
#define BOARD_INITPINS_USER_BUTTON_PORT                                    GPIO2   /*!< PORT peripheral base pointer */
#define BOARD_INITPINS_USER_BUTTON_PIN                                        9U   /*!< PORT pin number */
#define BOARD_INITPINS_USER_BUTTON_PIN_MASK                           (1U << 9U)   /*!< PORT pin mask */

/* GPIO_SD_B1_01 (number 21), GPIO SD_B1_01 */
/* Routed pin properties */
#define BOARD_INITPINS_USER_LED_PERIPHERAL                                 GPIO3   /*!< Peripheral name */
#define BOARD_INITPINS_USER_LED_SIGNAL                                   gpio_io   /*!< Signal name */
#define BOARD_INITPINS_USER_LED_CHANNEL                                      21U   /*!< Signal channel */

/* Symbols to be used with GPIO driver */
#define BOARD_INITPINS_USER_LED_GPIO                                       GPIO3   /*!< GPIO peripheral base pointer */
#define BOARD_INITPINS_USER_LED_INIT_GPIO_VALUE                               0U   /*!< GPIO output initial state */
#define BOARD_INITPINS_USER_LED_GPIO_PIN                                     21U   /*!< GPIO pin number */
#define BOARD_INITPINS_USER_LED_GPIO_PIN_MASK                        (1U << 21U)   /*!< GPIO pin mask */
#define BOARD_INITPINS_USER_LED_PORT                                       GPIO3   /*!< PORT peripheral base pointer */
#define BOARD_INITPINS_USER_LED_PIN                                          21U   /*!< PORT pin number */
#define BOARD_INITPINS_USER_LED_PIN_MASK                             (1U << 21U)   /*!< PORT pin mask */


/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitPins(void);

/* GPIO_SD_B1_07 (number 12), FlexSPI_CLK_A/U13[6] */
/* Routed pin properties */
#define BOARD_INITQSPIPINS_FlexSPI_CLK_PERIPHERAL                        FLEXSPI   /*!< Peripheral name */
#define BOARD_INITQSPIPINS_FlexSPI_CLK_SIGNAL                     FLEXSPI_A_SCLK   /*!< Signal name */

/* GPIO_SD_B1_08 (number 11), FlexSPI_D0_A/U13[5] */
/* Routed pin properties */
#define BOARD_INITQSPIPINS_FlexSPI_D0_A_PERIPHERAL                       FLEXSPI   /*!< Peripheral name */
#define BOARD_INITQSPIPINS_FlexSPI_D0_A_SIGNAL                   FLEXSPI_A_DATA0   /*!< Signal name */

/* GPIO_SD_B1_10 (number 9), FlexSPI_D1_A/U13[2] */
/* Routed pin properties */
#define BOARD_INITQSPIPINS_FlexSPI_D1_A_PERIPHERAL                       FLEXSPI   /*!< Peripheral name */
#define BOARD_INITQSPIPINS_FlexSPI_D1_A_SIGNAL                   FLEXSPI_A_DATA1   /*!< Signal name */

/* GPIO_SD_B1_09 (number 10), FlexSPI_D2_A/U13[3] */
/* Routed pin properties */
#define BOARD_INITQSPIPINS_FlexSPI_D2_A_PERIPHERAL                       FLEXSPI   /*!< Peripheral name */
#define BOARD_INITQSPIPINS_FlexSPI_D2_A_SIGNAL                   FLEXSPI_A_DATA2   /*!< Signal name */

/* GPIO_SD_B1_06 (number 13), FlexSPI_D3_A/U13[7] */
/* Routed pin properties */
#define BOARD_INITQSPIPINS_FlexSPI_D3_A_PERIPHERAL                       FLEXSPI   /*!< Peripheral name */
#define BOARD_INITQSPIPINS_FlexSPI_D3_A_SIGNAL                   FLEXSPI_A_DATA3   /*!< Signal name */

/* GPIO_SD_B1_11 (number 8), FlexSPI_SS0/U13[1] */
/* Routed pin properties */
#define BOARD_INITQSPIPINS_FlexSPI_SS0_PERIPHERAL                        FLEXSPI   /*!< Peripheral name */
#define BOARD_INITQSPIPINS_FlexSPI_SS0_SIGNAL                    FLEXSPI_A_SS0_B   /*!< Signal name */


/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitQSPIPins(void);

/* GPIO_AD_B0_07 (number 68), LPUART1_RXD */
/* Routed pin properties */
#define BOARD_INITDEBUG_UARTPINS_UART1_RXD_PERIPHERAL                    LPUART1   /*!< Peripheral name */
#define BOARD_INITDEBUG_UARTPINS_UART1_RXD_SIGNAL                             RX   /*!< Signal name */

/* GPIO_AD_B0_06 (number 72), LPUART1_TXD */
/* Routed pin properties */
#define BOARD_INITDEBUG_UARTPINS_UART1_TXD_PERIPHERAL                    LPUART1   /*!< Peripheral name */
#define BOARD_INITDEBUG_UARTPINS_UART1_TXD_SIGNAL                             TX   /*!< Signal name */


/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitDEBUG_UARTPins(void);

#if defined(__cplusplus)
}
#endif

/*!
 * @}
 */
#endif /* _PIN_MUX_H_ */

/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
