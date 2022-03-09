#include "beep.h"
#include "PWM_port.h"

static pwm_dev_type BeepPwmControl;

#define _ring MTF_pwm_set_duty(&BeepPwmControl, beep.Vol) //禁止VOL:0, 此电路必须有方波才向
#define _unring MTF_pwm_set_duty(&BeepPwmControl, 100)

void beep_init(void)
{
	MTF_pwm_init(&BeepPwmControl); //注意, F1C100S此口和SD口共用
}

/*Bee function*/
static const unsigned int BeeModPeriod[] = {99, 410, 1000, 1010, 3010};
static const unsigned int BeeModCompare[] = {84, 400, 500, 1000, 3000};
beep_dev beep = {0, 0, 70};
//此函数放于定时中, 定时执行
void BeeFunction(void)
{
	static unsigned int BeeTimeCnt = 0;

	if (beep.Time > 0)
	{
		if (++BeeTimeCnt >= BeeModPeriod[beep.Mod])
		{
			BeeTimeCnt = 0;
			beep.Time--;
		}
		else
		{
			if (BeeTimeCnt >= BeeModCompare[beep.Mod])
				_unring; //不响
			else
				_ring; //响
		}
	}
	else
	{
		BeeTimeCnt = 0;
		_unring; //不响
	}
}
