/*
 * ----------------------------------------------------------------------------
 * "THE BEER-WARE LICENSE" (Revision 42):
 * Jeroen Domburg <jeroen@spritesmods.com> wrote this file. As long as you retain 
 * this notice you can do whatever you want with this stuff. If we meet some day, 
 * and you think this stuff is worth it, you can buy me a beer in return. 
 * ----------------------------------------------------------------------------
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/queue.h"
#include "io.h"
#include "esp_system.h"
#include "driver/gpio.h"
#include <stdint.h>
#include "assert.h"
#include "snd_c3.h"
#include "driver/i2s_std.h"
//#include "driver/i2s_pdm.h"
#include "soc/gpio_sig_map.h"
#include "esp_log.h"

//#include "driver/dac_oneshot.h"

const char *TAG="sndc3";

#define BUFSZ 128

static snd_cb_t *snd_cb;
i2s_chan_handle_t i2s_handle;
//dac_oneshot_handle_t chan0_handle;

void snd_task(void *arg) {
	//int16_t buf[BUFSZ];
	//ESP_ERROR_CHECK(i2s_channel_enable(i2s_handle));	
	//while(1) {
	//	snd_cb(buf, BUFSZ);
	//	size_t written=0;
	//	ESP_ERROR_CHECK(i2s_channel_write(i2s_handle, buf, BUFSZ*2, &written, 1000));
	//}
}

void snd_init(int samprate, snd_cb_t *cb) {
	//snd_cb=cb;
	//i2s_chan_config_t i2s_config={
	//	.id=0,
	//	.role=I2S_ROLE_MASTER,
	//	.dma_desc_num=2,
	//	.dma_frame_num=128,
	//	.auto_clear=true
	//};
	////ESP_ERROR_CHECK(i2s_new_channel(&i2s_config, &i2s_handle, NULL));
	//ESP_ERROR_CHECK(i2s_new_channel(&i2s_config, &i2s_handle, NULL));
	////i2s_pdm_tx_config_t i2s_pdm_config={
	////	.clk_cfg=I2S_PDM_TX_CLK_DEFAULT_CONFIG(samprate),
	////	.slot_cfg=I2S_PDM_TX_SLOT_DEFAULT_CONFIG(I2S_DATA_BIT_WIDTH_16BIT, I2S_SLOT_MODE_MONO),
	////	.gpio_cfg={
	////		.clk=GPIO_NUM_NC,
	////		.dout=pin_a,
	////	}
	////};
	//i2s_std_config_t tx_std_cfg = {
	//	.clk_cfg=I2S_STD_CLK_DEFAULT_CONFIG(samprate),
	//	//.slot_cfg = I2S_STD_MSB_SLOT_DEFAULT_CONFIG(I2S_DATA_BIT_WIDTH_16BIT, I2S_SLOT_MODE_MONO),
	//	.slot_cfg = I2S_STD_PHILIPS_SLOT_DEFAULT_CONFIG(I2S_DATA_BIT_WIDTH_32BIT, I2S_SLOT_MODE_MONO),
	//	//.slot_cfg = I2S_STD_PHILIPS_SLOT_DEFAULT_CONFIG2(I2S_DATA_BIT_WIDTH_16BIT, I2S_SLOT_MODE_MONO),
	//	.gpio_cfg = {
	//		.mclk = I2S_GPIO_UNUSED,
	//		.bclk= I2S_BLK,                                                              	//Start task to handle sound stuff
	//		.ws = I2S_LRCLK,  
	//		.dout=I2S_DIN,
	//		.invert_flags={
	//			.mclk_inv = false,
	//			.bclk_inv = false,
	//			.ws_inv = false
	//		},
	//	},
	//};
	//ESP_ERROR_CHECK(i2s_channel_init_std_mode(i2s_handle, &tx_std_cfg));
	//xTaskCreate(snd_task, "snd", 2*1024, NULL, 5, NULL);
	//vTaskDelay(pdMS_TO_TICKS(200));
	////GPIO1 is the inverse of GPIO0
	//dac_oneshot_config_t chan0_cfg = {
        //	.chan_id = DAC_CHAN_0,
    	//};
    	//ESP_ERROR_CHECK(dac_oneshot_new_channel(&chan0_cfg, &chan0_handle));
	//ESP_ERROR_CHECK(dac_oneshot_output_voltage(&chan0_handle, 250));	
	//ESP_ERROR_CHECK(adc_oneshot_config_channel(adc2_handle, ADC_CHANNEL_6, &chan_cfg));
    	
	//gpio_set_drive_capability(pin_a, GPIO_DRIVE_CAP_3);
	//gpio_set_drive_capability(pin_b, GPIO_DRIVE_CAP_3);
}

