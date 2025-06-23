#include "main.h"
#include "i2c.h"
#include "ssd1306.h"
#include "fonts.h"
#include "stdio.h"

#define MLX90614_ADDR      (0x5A << 1)
#define MLX90614_TEMP_REG  0x07

I2C_HandleTypeDef hi2c1; 

float readTemperature() {
    uint8_t tempData[2] = {0};
    HAL_I2C_Mem_Read(&hi2c1, MLX90614_ADDR, MLX90614_TEMP_REG, 1, tempData, 2, HAL_MAX_DELAY);
    uint16_t rawTemp = (tempData[1] << 8) | tempData[0];
    return (rawTemp * 0.02) - 273.15;
}

void SystemClock_Config(void);
static void MX_GPIO_Init(void);
static void MX_I2C1_Init(void);

int main(void) {
    HAL_Init();
    SystemClock_Config();
    MX_GPIO_Init();
    MX_I2C1_Init();
    SSD1306_Init();

    char buffer[32];
    while (1) {
        float temp = readTemperature();
        SSD1306_Clear();
        sprintf(buffer, "Temp: %.2f C", temp);
        SSD1306_GotoXY(10, 25);
        SSD1306_Puts(buffer, &Font_7x10, 1);
        SSD1306_UpdateScreen();
        HAL_Delay(1000);
    }
}

void SystemClock_Config(void) {
}

static void MX_GPIO_Init(void) {
}

static void MX_I2C1_Init(void) {
    hi2c1.Instance = I2C1;
    hi2c1.Init.ClockSpeed = 100000;
    hi2c1.Init.DutyCycle = I2C_DUTYCYCLE_2;
    hi2c1.Init.OwnAddress1 = 0;
    hi2c1.Init.AddressingMode = I2C_ADDRESSINGMODE_7BIT;
    hi2c1.Init.DualAddressMode = I2C_DUALADDRESS_DISABLE;
    hi2c1.Init.OwnAddress2 = 0;
    hi2c1.Init.GeneralCallMode = I2C_GENERALCALL_DISABLE;
    hi2c1.Init.NoStretchMode = I2C_NOSTRETCH_DISABLE;
    HAL_I2C_Init(&hi2c1);
}
