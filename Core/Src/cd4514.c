#include "cd4514.h"

uint8 CD4514_stOutput;
uint16 CD4514_Timer;

void CD4514_Output(void)
{
	//HAL_GPIO_WritePin(CD4514_INH_GROUP,CD4514_INH_PIN,CD4514_OUTPUT_OFF); //PA3
	//HAL_GPIO_WritePin(CD4514_CH3_GROUP,CD4514_CH3_PIN,CD4514_OUTPUT_ON); // PA2

	switch(CD4514_stOutput)
	{
		case CD4514_OUTPUT_CH0 :
			HAL_GPIO_WritePin(CD4514_CH0_GROUP,CD4514_CH0_PIN,CD4514_OUTPUT_OFF);
			HAL_GPIO_WritePin(CD4514_CH1_GROUP,CD4514_CH1_PIN,CD4514_OUTPUT_OFF);
			HAL_GPIO_WritePin(CD4514_CH2_GROUP,CD4514_CH2_PIN,CD4514_OUTPUT_OFF);
			//HAL_GPIO_WritePin(CD4514_CH3_GROUP,CD4514_CH3_PIN,CD4514_OUTPUT_OFF);
			//HAL_GPIO_WritePin(GPIOA,GPIO_PIN_4,CD4514_OUTPUT_OFF);
		break;
		case CD4514_OUTPUT_CH1 :
			HAL_GPIO_WritePin(CD4514_CH0_GROUP,CD4514_CH0_PIN,CD4514_OUTPUT_ON);
			HAL_GPIO_WritePin(CD4514_CH1_GROUP,CD4514_CH1_PIN,CD4514_OUTPUT_OFF);
			HAL_GPIO_WritePin(CD4514_CH2_GROUP,CD4514_CH2_PIN,CD4514_OUTPUT_OFF);
			//HAL_GPIO_WritePin(CD4514_CH3_GROUP,CD4514_CH3_PIN,CD4514_OUTPUT_OFF);
			//HAL_GPIO_WritePin(GPIOA,GPIO_PIN_4,CD4514_OUTPUT_OFF);
		break;
		case CD4514_OUTPUT_CH2 :
			HAL_GPIO_WritePin(CD4514_CH0_GROUP,CD4514_CH0_PIN,CD4514_OUTPUT_OFF);
			HAL_GPIO_WritePin(CD4514_CH1_GROUP,CD4514_CH1_PIN,CD4514_OUTPUT_ON);
			HAL_GPIO_WritePin(CD4514_CH2_GROUP,CD4514_CH2_PIN,CD4514_OUTPUT_OFF);
			//HAL_GPIO_WritePin(CD4514_CH3_GROUP,CD4514_CH3_PIN,CD4514_OUTPUT_OFF);
			//HAL_GPIO_WritePin(GPIOA,GPIO_PIN_4,CD4514_OUTPUT_OFF);
		break;
		case CD4514_OUTPUT_CH3 :
			HAL_GPIO_WritePin(CD4514_CH0_GROUP,CD4514_CH0_PIN,CD4514_OUTPUT_ON);
			HAL_GPIO_WritePin(CD4514_CH1_GROUP,CD4514_CH1_PIN,CD4514_OUTPUT_ON);
			HAL_GPIO_WritePin(CD4514_CH2_GROUP,CD4514_CH2_PIN,CD4514_OUTPUT_OFF);
			//HAL_GPIO_WritePin(CD4514_CH3_GROUP,CD4514_CH3_PIN,CD4514_OUTPUT_OFF);
			//HAL_GPIO_WritePin(GPIOA,GPIO_PIN_4,CD4514_OUTPUT_OFF);
		break;
		case CD4514_OUTPUT_CH4 :
			HAL_GPIO_WritePin(CD4514_CH0_GROUP,CD4514_CH0_PIN,CD4514_OUTPUT_OFF);
			HAL_GPIO_WritePin(CD4514_CH1_GROUP,CD4514_CH1_PIN,CD4514_OUTPUT_OFF);
			HAL_GPIO_WritePin(CD4514_CH2_GROUP,CD4514_CH2_PIN,CD4514_OUTPUT_ON);
			//HAL_GPIO_WritePin(CD4514_CH3_GROUP,CD4514_CH3_PIN,CD4514_OUTPUT_OFF);
			//HAL_GPIO_WritePin(GPIOA,GPIO_PIN_4,CD4514_OUTPUT_OFF);
		break;
		case CD4514_OUTPUT_CH5 :
			HAL_GPIO_WritePin(CD4514_CH0_GROUP,CD4514_CH0_PIN,CD4514_OUTPUT_ON);
			HAL_GPIO_WritePin(CD4514_CH1_GROUP,CD4514_CH1_PIN,CD4514_OUTPUT_OFF);
			HAL_GPIO_WritePin(CD4514_CH2_GROUP,CD4514_CH2_PIN,CD4514_OUTPUT_ON);
			//HAL_GPIO_WritePin(CD4514_CH3_GROUP,CD4514_CH3_PIN,CD4514_OUTPUT_OFF);
			//HAL_GPIO_WritePin(GPIOA,GPIO_PIN_4,CD4514_OUTPUT_OFF);
		break;
		case CD4514_OUTPUT_CH6 :
			HAL_GPIO_WritePin(CD4514_CH0_GROUP,CD4514_CH0_PIN,CD4514_OUTPUT_OFF);
			HAL_GPIO_WritePin(CD4514_CH1_GROUP,CD4514_CH1_PIN,CD4514_OUTPUT_ON);
			HAL_GPIO_WritePin(CD4514_CH2_GROUP,CD4514_CH2_PIN,CD4514_OUTPUT_ON);
			//HAL_GPIO_WritePin(CD4514_CH3_GROUP,CD4514_CH3_PIN,CD4514_OUTPUT_OFF);
			//HAL_GPIO_WritePin(GPIOA,GPIO_PIN_4,CD4514_OUTPUT_OFF);
		break;
		case CD4514_OUTPUT_CH7 :
			HAL_GPIO_WritePin(CD4514_CH0_GROUP,CD4514_CH0_PIN,CD4514_OUTPUT_ON);
			HAL_GPIO_WritePin(CD4514_CH1_GROUP,CD4514_CH1_PIN,CD4514_OUTPUT_ON);
			HAL_GPIO_WritePin(CD4514_CH2_GROUP,CD4514_CH2_PIN,CD4514_OUTPUT_ON);
			//HAL_GPIO_WritePin(CD4514_CH3_GROUP,CD4514_CH3_PIN,CD4514_OUTPUT_OFF);
			//HAL_GPIO_WritePin(GPIOA,GPIO_PIN_4,CD4514_OUTPUT_OFF);
		break;
		case CD4514_OUTPUT_CH8 :
			HAL_GPIO_WritePin(CD4514_CH0_GROUP,CD4514_CH0_PIN,CD4514_OUTPUT_OFF);
			HAL_GPIO_WritePin(CD4514_CH1_GROUP,CD4514_CH1_PIN,CD4514_OUTPUT_OFF);
			HAL_GPIO_WritePin(CD4514_CH2_GROUP,CD4514_CH2_PIN,CD4514_OUTPUT_OFF);
			//HAL_GPIO_WritePin(CD4514_CH3_GROUP,CD4514_CH3_PIN,CD4514_OUTPUT_ON);
			//HAL_GPIO_WritePin(GPIOA,GPIO_PIN_4,CD4514_OUTPUT_ON);
		break;
		case CD4514_OUTPUT_CH9 :
			HAL_GPIO_WritePin(CD4514_CH0_GROUP,CD4514_CH0_PIN,CD4514_OUTPUT_ON);
			HAL_GPIO_WritePin(CD4514_CH1_GROUP,CD4514_CH1_PIN,CD4514_OUTPUT_OFF);
			HAL_GPIO_WritePin(CD4514_CH2_GROUP,CD4514_CH2_PIN,CD4514_OUTPUT_OFF);
			//HAL_GPIO_WritePin(CD4514_CH3_GROUP,CD4514_CH3_PIN,CD4514_OUTPUT_ON);
			//HAL_GPIO_WritePin(GPIOA,GPIO_PIN_4,CD4514_OUTPUT_ON);
		break;
		case CD4514_OUTPUT_CH10 :
			HAL_GPIO_WritePin(CD4514_CH0_GROUP,CD4514_CH0_PIN,CD4514_OUTPUT_OFF);
			HAL_GPIO_WritePin(CD4514_CH1_GROUP,CD4514_CH1_PIN,CD4514_OUTPUT_ON);
			HAL_GPIO_WritePin(CD4514_CH2_GROUP,CD4514_CH2_PIN,CD4514_OUTPUT_OFF);
			//HAL_GPIO_WritePin(CD4514_CH3_GROUP,CD4514_CH3_PIN,CD4514_OUTPUT_ON);
			//HAL_GPIO_WritePin(GPIOA,GPIO_PIN_4,CD4514_OUTPUT_ON);
		break;
		case CD4514_OUTPUT_CH11 :
			HAL_GPIO_WritePin(CD4514_CH0_GROUP,CD4514_CH0_PIN,CD4514_OUTPUT_ON);
			HAL_GPIO_WritePin(CD4514_CH1_GROUP,CD4514_CH1_PIN,CD4514_OUTPUT_ON);
			HAL_GPIO_WritePin(CD4514_CH2_GROUP,CD4514_CH2_PIN,CD4514_OUTPUT_OFF);
			//HAL_GPIO_WritePin(CD4514_CH3_GROUP,CD4514_CH3_PIN,CD4514_OUTPUT_ON);
			//HAL_GPIO_WritePin(GPIOA,GPIO_PIN_4,CD4514_OUTPUT_ON);
		break;
		case CD4514_OUTPUT_CH12 :
			HAL_GPIO_WritePin(CD4514_CH0_GROUP,CD4514_CH0_PIN,CD4514_OUTPUT_OFF);
			HAL_GPIO_WritePin(CD4514_CH1_GROUP,CD4514_CH1_PIN,CD4514_OUTPUT_OFF);
			HAL_GPIO_WritePin(CD4514_CH2_GROUP,CD4514_CH2_PIN,CD4514_OUTPUT_ON);
			//HAL_GPIO_WritePin(CD4514_CH3_GROUP,CD4514_CH3_PIN,CD4514_OUTPUT_ON);
			//HAL_GPIO_WritePin(GPIOA,GPIO_PIN_4,CD4514_OUTPUT_ON);
		break;
		case CD4514_OUTPUT_CH13 :
			HAL_GPIO_WritePin(CD4514_CH0_GROUP,CD4514_CH0_PIN,CD4514_OUTPUT_ON);
			HAL_GPIO_WritePin(CD4514_CH1_GROUP,CD4514_CH1_PIN,CD4514_OUTPUT_OFF);
			HAL_GPIO_WritePin(CD4514_CH2_GROUP,CD4514_CH2_PIN,CD4514_OUTPUT_ON);
			//HAL_GPIO_WritePin(CD4514_CH3_GROUP,CD4514_CH3_PIN,CD4514_OUTPUT_ON);
			//HAL_GPIO_WritePin(GPIOA,GPIO_PIN_4,CD4514_OUTPUT_ON);
		break;
		case CD4514_OUTPUT_CH14 :
			HAL_GPIO_WritePin(CD4514_CH0_GROUP,CD4514_CH0_PIN,CD4514_OUTPUT_OFF);
			HAL_GPIO_WritePin(CD4514_CH1_GROUP,CD4514_CH1_PIN,CD4514_OUTPUT_ON);
			HAL_GPIO_WritePin(CD4514_CH2_GROUP,CD4514_CH2_PIN,CD4514_OUTPUT_ON);
			//HAL_GPIO_WritePin(CD4514_CH3_GROUP,CD4514_CH3_PIN,CD4514_OUTPUT_ON);
			//HAL_GPIO_WritePin(GPIOA,GPIO_PIN_4,CD4514_OUTPUT_ON);
		break;
		case CD4514_OUTPUT_CH15 :
			HAL_GPIO_WritePin(CD4514_CH0_GROUP,CD4514_CH0_PIN,CD4514_OUTPUT_ON);
			HAL_GPIO_WritePin(CD4514_CH1_GROUP,CD4514_CH1_PIN,CD4514_OUTPUT_ON);
			HAL_GPIO_WritePin(CD4514_CH2_GROUP,CD4514_CH2_PIN,CD4514_OUTPUT_ON);
			//HAL_GPIO_WritePin(CD4514_CH3_GROUP,CD4514_CH3_PIN,CD4514_OUTPUT_ON);
			//HAL_GPIO_WritePin(GPIOA,GPIO_PIN_4,CD4514_OUTPUT_ON);
		break;
	}

	if(CD4514_Timer<5)
	{
		HAL_GPIO_WritePin(CD4514_STB_GROUP,CD4514_STB_PIN,CD4514_OUTPUT_ON); //PA5
		HAL_GPIO_WritePin(CD4514_INH_GROUP,CD4514_INH_PIN,CD4514_OUTPUT_ON); //PA3
		HAL_GPIO_WritePin(CD4514_CH3_GROUP,CD4514_CH3_PIN,CD4514_OUTPUT_ON); // PA2
	}
	else
	{
		HAL_GPIO_WritePin(CD4514_STB_GROUP,CD4514_STB_PIN,CD4514_OUTPUT_OFF);  //PA5
		HAL_GPIO_WritePin(CD4514_INH_GROUP,CD4514_INH_PIN,CD4514_OUTPUT_OFF); //PA3
		HAL_GPIO_WritePin(CD4514_CH3_GROUP,CD4514_CH3_PIN,CD4514_OUTPUT_OFF); // PA2
	}

	CD4514_Timer++;
	if(CD4514_Timer>=10)
	{
		CD4514_stOutput++;
		CD4514_Timer = 0;
	}

	if(CD4514_stOutput>15)
	{
		CD4514_stOutput = 0;
	}

	return;
}
