//#include "hid_ev.h"
//#include "driver/gpio.h"
#include "freertos/FreeRTOS.h"
#include "freertos/queue.h"
#include "touchevent.h"
#define ESP_INTR_FLAG_DEFAULT 0

//#define TOUCH_000DEG  1 // TOUCH1 IO1
//#define TOUCH_120DEG  2 // TOUCH2 IO2
//#define TOUCH_240DEG  3 // TOUCH3 IO3
//#define TOUCH_OK      4 // TOUCH4 IO4
//#define GPIO_INPUT_PIN_SEL  ((1ULL<<TOUCH_000DEG) | (1ULL<<TOUCH_120DEG) |(1ULL<<TOUCH_240DEG)|(1ULL<<TOUCH_OK) )
//static QueueHandle_t gpio_evt_queue;

void input_init();

int input_get_event(ev_t *touchev);
