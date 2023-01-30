#include "lib/include.h"

int main(void) //experimento 1
{
    
    int ciclo=50; //DUDA
    int freq_r=50000000;
    int freq=10000;

    Configurar_PLL(_50MHZ);  //Confiuracion de velocidad de reloj 50MHZ
    Configurar_GPIO();
    Configurar_UART0();
    CONFIGURACION_ADC();
    CONFIGURACION_ADC_Seq();
    CONFIGURACION_PWM1(freq, freq_r, ciclo);
    
    while (1){
        
    }
}

int main(void) //experimento 2
{
    uint32_t entrada[1];
    uint32_t ciclo[4]; //este depende del adc
    int freq_r=20000000;
    int freq=50;

    Configurar_PLL(_20MHZ);  //Confiuracion de velocidad de reloj 50MHZ
    Configurar_GPIO();
    Configurar_UART0();
    CONFIGURACION_ADC();
    CONFIGURACION_ADC_Seq();
    CONFIGURACION_PWM2(freq, freq_r, ciclo);
    
    while (1){
        
    }
}