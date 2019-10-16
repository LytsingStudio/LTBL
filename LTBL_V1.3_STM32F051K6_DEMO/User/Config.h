
#ifndef __CONFIG_H__
#define __CONFIG_H__

#include "stdint.h"

#define YES				1
#define NO				0

#define ThrottleCtrlType_Duty			0
#define ThrottleCtrlType_Force		1
#define ThrottleCtrlType_Speed		2

#define LowRPMProtect_Startup1Intv1		1000
#define LowRPMProtect_Startup1Intv2		600

/* ���ٱ��� - �����ж���ʼֵ */
#define LowRPMProtect_StartIntv				200
/* ���ٱ��� - �����ж����ֵ */
#define LowRPMProtect_EndIntv					3000
/* ���ٱ��� - �����������ֵ */
#define LowRPMProtect_StartThr				1024
/* ���ٱ��� - ����������Сֵ */
#define LowRPMProtect_EndThr					200
	
/* �Ƿ�����������ģʽ1 */
#define CONFIG_UseStartup1						NO
/* �Ƿ�������ģʽ������ģʽ�����û��������¼��������������´ι���ɨ�� */
#define CONFIG_HighSpeedMode					NO
/* �Ƿ����źŶ�ʧ���У��źŶ�ʧ�󽫻�ÿ 3 ������һ�� */
#define CONFIG_SignalLoseBeep					NO
/* ����У׼ģʽ�ĸ����ų���ʱ�䣺�������������ֵһ���¼������У׼ģʽ */
#define CONFIG_CalibrateHoldMS				3000
/* ָʾ���ڱ������õ� Flash ��ʼ��ַ */
#define CONFIG_FlashStartAddr					(0x08000000+1024*30)
/* ָʾ����У�� Flash ����ı�� */
#define CONFIG_FlashVerifyCode				0xfea2561f
/* ָʾ��ǰ���ſ���ģʽ
 * ThrottleCtrlType_Duty  : ���ſ��� PWM ռ�ձ�
 * ThrottleCtrlType_Force : ���ſ��Ƶ����Ť��
 * ThrottleCtrlType_Speed : ���ſ��Ƶ�����ٶ�
 */
#define CONFIG_ThrottleCtrlType				ThrottleCtrlType_Duty
/* �Ƿ���������ɲ�������ú�У׼�������Զ�ʹ������ɲ�� */
#define CONFIG_EnableLinearBrake			YES

/* ���ſ���Ť��ģʽ���������� ����/ɲ�� Ť�� �൱�ڸ�ֵ��������ȫ��תʱ��Ť�� */
#define CONFIG_ThrottleCtrlType_Force_Forware_MAX			200
#define CONFIG_ThrottleCtrlType_Force_Brake_MAX				140

/* parameter for skateboard 2 */
//#define CONFIG_ThrottleCtrlType_Force_Forware_MAX			200
//#define CONFIG_ThrottleCtrlType_Force_Brake_MAX				300
/* config parameter used for my skateboard */
//#define CONFIG_ThrottleCtrlType_Force_Forware_MAX			200
//#define CONFIG_ThrottleCtrlType_Force_Brake_MAX				140




void Config_RegesterData(void *pData, uint32_t length);
uint8_t Config_LoadData(void);
void Config_SaveData(void);
uint16_t Identification_GetBrakeThrottle(int16_t thr, uint32_t commIntv);
uint16_t Identification_GetCommonThrottle(uint32_t commIntv);
 
#endif

