





void TRANSISTOR_VoidON(void)
{
	DIO_VoidSetPinValue(TRANSISTOR_PORT,TRANSISTOR_PIN,DIO_u8PIN_HIGH);
}
void TRANSISTOR_VoidOFF(void)
{
	DIO_VoidSetPinValue(TRANSISTOR_PORT,TRANSISTOR_PIN,DIO_u8PIN_LOW);
}
