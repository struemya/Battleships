#include "timers.h"
#include "Gameplay.h"

//Initialise the timers

void timersInit(){
	//Configure the timer
	TIMER0_DATA = TIMER_FREQ_1024(2);
	TIMER0_CR = TIMER_DIV_1024 | TIMER_IRQ_REQ | TIMER_ENABLE;

	//Enable Interrupt for the timer and set the handler
	irqSet(IRQ_TIMER0, &TIMER0_ISR);
	irqEnable(IRQ_TIMER0);
}


void timerDisable() {
	irqDisable(IRQ_TIMER0);
}
void toggle() {
	timeout = timeout==0?1:0; //toggle timeout;

}

//Timer0 ISR (blinking effect of the active ship)
void TIMER0_ISR()
{

	toggle(); //break the while loop of the receiveData function



}
