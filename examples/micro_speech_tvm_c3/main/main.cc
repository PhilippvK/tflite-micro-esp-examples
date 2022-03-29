/* Copyright 2019 The TensorFlow Authors. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/time.h>

#include "esp_log.h"
#include "esp_system.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "main_functions.h"

void tf_main(void) {
  setup();
  while (true) {
    loop();
  }
}

void print_stats(void) {
  while (true) {
    char buffer[50] = {0};
    vTaskGetRunTimeStats(buffer);
    printf("%s\n", buffer);
    vTaskDelay(3000 / portTICK_PERIOD_MS);
  }
}

// #include "driver/gpio.h"
// #include "led_strip.h"
// #include "sdkconfig.h"
// 
// // static const char *TAG = "example";
// 
// /* Use project configuration menu (idf.py menuconfig) to choose the GPIO to blink,
//    or you can edit the following line and set a number here.
// */
// #define CONFIG_BLINK_PERIOD 500
// #define CONFIG_BLINK_LED_RMT_CHANNEL 0
// #define BLINK_GPIO (gpio_num_t)3
// static const char *TAG = "example";
// 
// static uint8_t s_led_state = 0;
// 
// // static led_strip_t *pStrip_a;
// // 
// // static void blink_led(void)
// // {
// //     /* If the addressable LED is enabled */
// //     if (s_led_state) {
// //         /* Set the LED pixel using RGB from 0 (0%) to 255 (100%) for each color */
// //         pStrip_a->set_pixel(pStrip_a, 0, 0, 255, 255);
// //         /* Refresh the strip to send data */
// //         pStrip_a->refresh(pStrip_a, 100);
// //     } else {
// //         /* Set all LED off to clear all pixels */
// //         pStrip_a->clear(pStrip_a, 50);
// //     }
// // }
// // 
// // static void configure_led(void)
// // {
// //     ESP_LOGI(TAG, "Example configured to blink addressable LED!");
// //     /* LED strip initialization with the GPIO and pixels number*/
// //     pStrip_a = led_strip_init(CONFIG_BLINK_LED_RMT_CHANNEL, BLINK_GPIO, 1);
// //     /* Set all LED off to clear all pixels */
// //     pStrip_a->clear(pStrip_a, 50);
// // }
// // static void configure_led(void)
// // {
// //     ESP_LOGI(TAG, "Example configured to blink addressable LED!");
// //     /* LED strip initialization with the GPIO and pixels number*/
// //     pStrip_a = led_strip_init(CONFIG_BLINK_LED_RMT_CHANNEL, BLINK_GPIO, 1);
// //     /* Set all LED off to clear all pixels */
// //     pStrip_a->clear(pStrip_a, 50);
// // }
// // 
// static void blink_led(void)
// {
//     /* Set the GPIO level according to the state (LOW or HIGH)*/
//     gpio_set_level(BLINK_GPIO, s_led_state);
// }
// 
// static void configure_led(void)
// {
//     ESP_LOGI(TAG, "Example configured to blink GPIO LED!");
//     gpio_reset_pin(BLINK_GPIO);
//     /* Set the GPIO as a push/pull output */
//     gpio_set_direction(BLINK_GPIO, GPIO_MODE_OUTPUT);
// }
// 
// void blink(void)
// {
// 
//     /* Configure the peripheral according to the LED type */
//     configure_led();
// 
//     while (1) {
//         ESP_LOGI(TAG, "Turning the LED %s!", s_led_state == true ? "ON" : "OFF");
//         blink_led();
//         /* Toggle the LED state */
//         s_led_state = !s_led_state;
//         vTaskDelay(CONFIG_BLINK_PERIOD / portTICK_PERIOD_MS);
//     }
// }

extern "C" void app_main() {
  xTaskCreate((TaskFunction_t)&tf_main, "tensorflow", 8 * 1024, NULL, 8, NULL);
  //xTaskCreate((TaskFunction_t)&blink, "blink", 8 * 1024, NULL, 8, NULL);
  // xTaskCreate((TaskFunction_t)&print_stats, "print_stats", 8 * 1024, NULL, 8,
  //             NULL);
  vTaskDelete(NULL);
}


// #include <stdio.h>
// #include "driver/ledc.h"
// #include "esp_err.h"
// 
// #define LEDC_TIMER              LEDC_TIMER_0
// #define LEDC_MODE               LEDC_LOW_SPEED_MODE
// #define LEDC_OUTPUT_IO          (5) // Define the output GPIO
// #define LEDC_CHANNEL            LEDC_CHANNEL_0
// #define LEDC_DUTY_RES           LEDC_TIMER_13_BIT // Set duty resolution to 13 bits
// #define LEDC_DUTY               (4095) // Set duty to 50%. ((2 ** 13) - 1) * 50% = 4095
// #define LEDC_FREQUENCY          (5000) // Frequency in Hertz. Set frequency at 5 kHz
// 
// static void example_ledc_init(void)
// {
//     // Prepare and then apply the LEDC PWM timer configuration
//     ledc_timer_config_t ledc_timer = {
//         .speed_mode       = LEDC_MODE,
//         .timer_num        = LEDC_TIMER,
//         .duty_resolution  = LEDC_DUTY_RES,
//         .freq_hz          = LEDC_FREQUENCY,  // Set output frequency at 5 kHz
//         .clk_cfg          = LEDC_AUTO_CLK
//     };
//     ESP_ERROR_CHECK(ledc_timer_config(&ledc_timer));
// 
//     // Prepare and then apply the LEDC PWM channel configuration
//     ledc_channel_config_t ledc_channel = {
//         .gpio_num       = LEDC_OUTPUT_IO,
//         .speed_mode     = LEDC_MODE,
//         .channel        = LEDC_CHANNEL,
//         .intr_type      = LEDC_INTR_DISABLE,
//         .timer_sel      = LEDC_TIMER,
//         .duty           = 0, // Set duty to 0%
//         .hpoint         = 0
//     };
//     ESP_ERROR_CHECK(ledc_channel_config(&ledc_channel));
// }
// 
// void app_main(void)
// {
//     // Set the LEDC peripheral configuration
//     example_ledc_init();
//     // Set duty to 50%
//     ESP_ERROR_CHECK(ledc_set_duty(LEDC_MODE, LEDC_CHANNEL, LEDC_DUTY));
//     // Update duty to apply the new value
//     ESP_ERROR_CHECK(ledc_update_duty(LEDC_MODE, LEDC_CHANNEL));
// }
