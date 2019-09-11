#ifndef Firmware_for_Qmind_Plus
#define Firmware_for_Qmind_Plus
/*
 * Add Header to deal with INO to CPP conversion
 */

void isr_process_encoder1(void);
void isr_process_encoder2(void);

void SendReset(void);
void Power_Check(void);
void SerialCheak_Process(void);
void Button_Process(void);
void SensorType_Update(void);
void UltrCarProcess(uint8_t  style_mode);
void LineFolloweProcess(void);
void Power_Process(void);
void TurnLeft1(void);
void TurnRight1(void);
void BackwardAndTurnLeft(void);
void BackwardAndTurnRight(void);
void Forward(void);
void Backward(void);


#endif
