#ifndef _BOARD_CONFIG_H_
#define _BOARD_CONFIG_H_

#include <driver/gpio.h>

#define AUDIO_INPUT_SAMPLE_RATE 16000
#define AUDIO_OUTPUT_SAMPLE_RATE 24000

#define AUDIO_I2S_MIC_GPIO_WS GPIO_NUM_39
#define AUDIO_I2S_MIC_GPIO_SCK GPIO_NUM_38
#define AUDIO_I2S_MIC_GPIO_DIN GPIO_NUM_7
#define AUDIO_I2S_SPK_GPIO_DOUT GPIO_NUM_40
#define AUDIO_I2S_SPK_GPIO_BCLK GPIO_NUM_42
#define AUDIO_I2S_SPK_GPIO_LRCK GPIO_NUM_2

#define BUILTIN_LED_GPIO GPIO_NUM_48
#define BOOT_BUTTON_GPIO GPIO_NUM_0
#define TOUCH_BUTTON_GPIO GPIO_NUM_NC
#define VOLUME_UP_BUTTON_GPIO GPIO_NUM_NC
#define VOLUME_DOWN_BUTTON_GPIO GPIO_NUM_NC

#define DISPLAY_BACKLIGHT_PIN GPIO_NUM_9
#define DISPLAY_MOSI_PIN GPIO_NUM_18
#define DISPLAY_CLK_PIN GPIO_NUM_17
#define DISPLAY_DC_PIN GPIO_NUM_8
#define DISPLAY_RST_PIN GPIO_NUM_20
#define DISPLAY_CS_PIN GPIO_NUM_16

#define DISPLAY_WIDTH 128
#define DISPLAY_HEIGHT 160
#define DISPLAY_MIRROR_X true
#define DISPLAY_MIRROR_Y true
#define DISPLAY_SWAP_XY false
#define DISPLAY_INVERT_COLOR false
#define DISPLAY_RGB_ORDER LCD_RGB_ELEMENT_ORDER_RGB
#define DISPLAY_OFFSET_X 2
#define DISPLAY_OFFSET_Y 1
#define DISPLAY_BACKLIGHT_OUTPUT_INVERT false

#endif // _BOARD_CONFIG_H_
