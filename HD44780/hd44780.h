//downloaded from http://stm32f4-discovery.net
//edited by hossein farzandi
#ifndef HD44780_H
#define HD44780_H 120
//for STM32F0 Series:
#include "stm32f0xx_hal.h"

   
/**
 * @addtogroup TM_STM32F4xx_Libraries
 * @{
 */

/**
 * @defgroup HD44780
 * @brief    HD44780 LCD driver library for STM32 series
 * @{
 *
 *	It also supports all HD44780 compatible LCD drivers.
 *
 *	\par Default pinout
 *	
@verbatim
LCD		STM32    		DESCRIPTION

GND		GND				Ground
VCC		+5V				Power supply for LCD
V0		Potentiometer	Contrast voltage. Connect to potentiometer
RS		PF12			Register select, can be overwritten in your project's defines.h file
RW		GND				Read/write
E		PD15			Enable pin, can be overwritten in your project's defines.h file
D0		-				Data 0 - doesn't care
D1		-				Data 1 - doesn't care
D2		-				Data 2 - doesn't care
D3		-				Data 3 - doesn't  care
D4		PF14			Data 4, can be overwritten in your project's defines.h file
D5		PE11			Data 5, can be overwritten in your project's defines.h file
D6		PE9	     		Data 6, can be overwritten in your project's defines.h file
D7		PF13			Data 7, can be overwritten in your project's defines.h file
A		+3V3			Back light positive power
K		GND				Ground for back light
@endverbatim	
 *	
 * If you want to change pinout, do this in your main.h file 
 *	
 */

/**
 * @defgroup TM_HD44780_Macros
 * @brief    Library defines
 * @{
 */

/**
 * @defgroup LCD_Functions
 * @brief    Library Functions
 * @{
 */

/**
 * @brief  Initializes HD44780 LCD
 * @brief  cols: width of lcd
 * @param  rows: height of lcd
 * @retval None
 */
void LCD_Init(uint8_t cols, uint8_t rows);

/**
 * @brief  Turn display on
 * @param  None
 * @retval None
 */
void LCD_DisplayOn(void);

/**
 * @brief  Turn display off
 * @param  None
 * @retval None
 */
void LCD_DisplayOff(void);

/**
 * @brief  Clears entire LCD
 * @param  None
 * @retval None
 */
void LCD_Clear(void);

/**
 * @brief  Puts string on lcd
 * @param  x location
 * @param  y location
 * @param  *str: pointer to string to display
 * @retval None
 */
void LCD_Puts(uint8_t x, uint8_t y, char* str);

/**
 * @brief  Enables cursor blink
 * @param  None
 * @retval None
 */
void LCD_BlinkOn(void);

/**
 * @brief  Disables cursor blink
 * @param  None
 * @retval None
 */
void LCD_BlinkOff(void);

/**
 * @brief  Shows cursor
 * @param  None
 * @retval None
 */
void LCD_CursorOn(void);

/**
 * @brief  Hides cursor
 * @param  None
 * @retval None
 */
void LCD_CursorOff(void);

/**
 * @brief  Scrolls display to the left
 * @param  None
 * @retval None
 */
void LCD_ScrollLeft(void);

/**
 * @brief  Scrolls display to the right
 * @param  None
 * @retval None
 */
void LCD_ScrollRight(void);

/**
 * @brief  Creates custom character
 * @param  location: Location where to save character on LCD. LCD supports up to 8 custom characters, so locations are 0 - 7
 * @param *data: Pointer to 8-bytes of data for one character
 * @retval None
 */
void LCD_CreateChar(uint8_t location, uint8_t* data);

/**
 * @brief  Puts custom created character on LCD
 * @param  location: Location on LCD where character is stored, 0 - 7
 * @retval None
 */
void LCD_PutCustom(uint8_t x, uint8_t y, uint8_t location);

/**
 * @}
 */
 #endif

