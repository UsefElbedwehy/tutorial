


void STEPPER_VoidStepperOnCW(u8 Copy_u8RevolutionsNumber)
{
		u8 Local_u8Iterrator=0;
		for(Local_u8Iterrator=0;Local_u8Iterrator<100*Copy_u8RevolutionsNumber;Local_u8Iterrator++)
		{
			DIO_VoidSetPinValue(STEPPER_PORT,STEPPER_PIN_BLUE,DIO_u8PIN_LOW);
		DIO_VoidSetPinValue(STEPPER_PORT,STEPPER_PIN_PINK,DIO_u8PIN_HIGH);
		DIO_VoidSetPinValue(STEPPER_PORT,STEPPER_PIN_YELLOW,DIO_u8PIN_HIGH);
		DIO_VoidSetPinValue(STEPPER_PORT,STEPPER_PIN_ORANGE,DIO_u8PIN_HIGH);
		_delay_ms(3);
		DIO_VoidSetPinValue(STEPPER_PORT,STEPPER_PIN_BLUE,DIO_u8PIN_HIGH);
		DIO_VoidSetPinValue(STEPPER_PORT,STEPPER_PIN_PINK,DIO_u8PIN_LOW);
		DIO_VoidSetPinValue(STEPPER_PORT,STEPPER_PIN_YELLOW,DIO_u8PIN_HIGH);
		DIO_VoidSetPinValue(STEPPER_PORT,STEPPER_PIN_ORANGE,DIO_u8PIN_HIGH);
		_delay_ms(3);
		DIO_VoidSetPinValue(STEPPER_PORT,STEPPER_PIN_BLUE,DIO_u8PIN_HIGH);
		DIO_VoidSetPinValue(STEPPER_PORT,STEPPER_PIN_PINK,DIO_u8PIN_HIGH);
		DIO_VoidSetPinValue(STEPPER_PORT,STEPPER_PIN_YELLOW,DIO_u8PIN_LOW);
		DIO_VoidSetPinValue(STEPPER_PORT,STEPPER_PIN_ORANGE,DIO_u8PIN_HIGH);
		_delay_ms(3);
		DIO_VoidSetPinValue(STEPPER_PORT,STEPPER_PIN_BLUE,DIO_u8PIN_HIGH);
		DIO_VoidSetPinValue(STEPPER_PORT,STEPPER_PIN_PINK,DIO_u8PIN_HIGH);
		DIO_VoidSetPinValue(STEPPER_PORT,STEPPER_PIN_YELLOW,DIO_u8PIN_HIGH);
		DIO_VoidSetPinValue(STEPPER_PORT,STEPPER_PIN_ORANGE,DIO_u8PIN_LOW);
		_delay_ms(3);
		}
		
}
void STEPPER_VoidStepperOnCCW(u8 Copy_u8RevolutionsNumber)
{
	u8 Local_u8Iterrator=0;
		for(Local_u8Iterrator=0;Local_u8Iterrator<100*Copy_u8RevolutionsNumber;Local_u8Iterrator++)
		{
	DIO_VoidSetPinValue(STEPPER_PORT,STEPPER_PIN_BLUE,DIO_u8PIN_HIGH);
		DIO_VoidSetPinValue(STEPPER_PORT,STEPPER_PIN_PINK,DIO_u8PIN_HIGH);
		DIO_VoidSetPinValue(STEPPER_PORT,STEPPER_PIN_YELLOW,DIO_u8PIN_HIGH);
		DIO_VoidSetPinValue(STEPPER_PORT,STEPPER_PIN_ORANGE,DIO_u8PIN_LOW);
		_delay_ms(3);
		DIO_VoidSetPinValue(STEPPER_PORT,STEPPER_PIN_BLUE,DIO_u8PIN_HIGH);
		DIO_VoidSetPinValue(STEPPER_PORT,STEPPER_PIN_PINK,DIO_u8PIN_HIGH);
		DIO_VoidSetPinValue(STEPPER_PORT,STEPPER_PIN_YELLOW,DIO_u8PIN_LOW);
		DIO_VoidSetPinValue(STEPPER_PORT,STEPPER_PIN_ORANGE,DIO_u8PIN_HIGH);
		_delay_ms(3);
	DIO_VoidSetPinValue(STEPPER_PORT,STEPPER_PIN_BLUE,DIO_u8PIN_HIGH);
		DIO_VoidSetPinValue(STEPPER_PORT,STEPPER_PIN_PINK,DIO_u8PIN_LOW);
		DIO_VoidSetPinValue(STEPPER_PORT,STEPPER_PIN_YELLOW,DIO_u8PIN_HIGH);
		DIO_VoidSetPinValue(STEPPER_PORT,STEPPER_PIN_ORANGE,DIO_u8PIN_HIGH);
		_delay_ms(3);
		DIO_VoidSetPinValue(STEPPER_PORT,STEPPER_PIN_BLUE,DIO_u8PIN_LOW);
		DIO_VoidSetPinValue(STEPPER_PORT,STEPPER_PIN_PINK,DIO_u8PIN_HIGH);
		DIO_VoidSetPinValue(STEPPER_PORT,STEPPER_PIN_YELLOW,DIO_u8PIN_HIGH);
		DIO_VoidSetPinValue(STEPPER_PORT,STEPPER_PIN_ORANGE,DIO_u8PIN_HIGH);
		_delay_ms(3);
		}
}