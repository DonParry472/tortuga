#include "robot.h"
#include "stm32f4xx_hal_gpio.h"

uint16_t t= 0;

void set() 
{
    HAL_GPIO_WritePin(GPIOA, PIN1_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOA, PIN2_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOA, PIN3_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOA, PIN4_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOA, PIN5_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOA, PIN6_Pin, GPIO_PIN_SET);
}

void adelante(uint16_t t) 
{
    HAL_GPIO_WritePin(GPIOA, PIN1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOA, PIN2_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOA, PIN3_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOA, PIN4_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOA, PIN5_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOA, PIN6_Pin, GPIO_PIN_SET);
    HAL_Delay(t);
    set();
}

void atras(uint16_t t) 
{
    HAL_GPIO_WritePin(GPIOA, PIN1_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOA, PIN2_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOA, PIN3_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOA, PIN4_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOA, PIN5_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOA, PIN6_Pin, GPIO_PIN_SET);
    HAL_Delay(t);
    set();
}

void izquierda(uint16_t t) 
{
    HAL_GPIO_WritePin(GPIOA, PIN1_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOA, PIN2_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOA, PIN3_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOA, PIN4_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOA, PIN5_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOA, PIN6_Pin, GPIO_PIN_SET);
    HAL_Delay(t);
    set();
}

void derecha(uint16_t t) 
{
    HAL_GPIO_WritePin(GPIOA, PIN1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOA, PIN2_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOA, PIN3_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOA, PIN4_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOA, PIN5_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOA, PIN6_Pin, GPIO_PIN_SET);
    HAL_Delay(t);
    set();
}

void patron()
{
    set();
    adelante(2000);
    derecha(470);
    adelante(2000);
    izquierda(470);
    atras(2000);
    izquierda(470);
    adelante(2000);
    derecha(470);
}