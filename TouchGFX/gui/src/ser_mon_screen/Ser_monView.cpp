#include <gui/ser_mon_screen/Ser_monView.hpp>
#include <string.h>

#define TEMP_SIZE 512

Unicode::UnicodeChar keyboardBuffer[2][20];
Unicode::UnicodeChar TempBuffer[TEMP_SIZE];

uint8_t	temp_layer = 0;
uint8_t keyboardSelection = 0;

uint32_t	tick_1ms = 0;

Ser_monView::Ser_monView()
{

}

void Ser_monView::setupScreen()
{
    Ser_monViewBase::setupScreen();
}

void Ser_monView::tearDownScreen()
{
    Ser_monViewBase::tearDownScreen();
}

void Ser_monView::KeyboardSelected(uint8_t value)
{
	keyboardSelection = value;
}

void Ser_monView::Clear_buffer()
{
	memset(&TempBuffer, 0, TEMP_SIZE);
}

void Ser_monView::InputText()
{
	if (Unicode::strlen(textAreaInputboxBuffer) > 0)
	{
		while ((Unicode::strlen(TempBuffer) + Unicode::strlen(textAreaInputboxBuffer)) >= TEMP_SIZE)
		{
			for (int i = 0; ; i++)
			{
				if (TempBuffer[i] == '\n')
				{
					for (int j = 0; j < Unicode::strlen(TempBuffer) - (i + 1); j++)
						TempBuffer[j] = TempBuffer[j + (i + 1)];
					
					for (int j = Unicode::strlen(TempBuffer) - (i + 1); j < TEMP_SIZE; j++)
						TempBuffer[j] = '\0';

					break;
				}
			}
		}
		
		Unicode::strncpy(TempBuffer + Unicode::strlen(TempBuffer), textAreaInputboxBuffer, Unicode::strlen(textAreaInputboxBuffer) + 1);
		Unicode::strncpy(TempBuffer + Unicode::strlen(TempBuffer), "\n", Unicode::strlen("\n"));
		
//		memset(&textAreaInputboxBuffer, 0, Unicode::strlen(textAreaInputboxBuffer));

		textAreaInputbox.invalidate();
	}
}

void Ser_monView::handleTickEvent()
{
	if (Unicode::strlen(keyboardBuffer[0]) > 0)
	{
		Unicode::strncpy(textAreaInputboxBuffer, keyboardBuffer[0], TEXTAREAINPUTBOX_SIZE - 1);
		textAreaInputboxBuffer[TEXTAREAINPUTBOX_SIZE - 1] = '\0';
		
		memset(&keyboardBuffer[0], 0, Unicode::strlen(keyboardBuffer[0]));

		textAreaInputbox.invalidate();
	}

	if (Unicode::strlen(TempBuffer) > 0)
	{
		memset(&textAreaTerminalBuffer, 0, TEXTAREATERMINAL_SIZE);
		
		Unicode::strncpy(textAreaTerminalBuffer, TempBuffer, Unicode::strlen(TempBuffer));
		
		textAreaTerminal.invalidate();
	}
	
	if ((tick_1ms % 50) == 0)
	{
		if (textAreaTerminalBuffer[Unicode::strlen(textAreaTerminalBuffer) - 1] == '_')			
			textAreaTerminalBuffer[Unicode::strlen(textAreaTerminalBuffer) - 1] = 0;
		else
			Unicode::strncpy(textAreaTerminalBuffer + Unicode::strlen(textAreaTerminalBuffer), "_", Unicode::strlen("_"));
		
		textAreaTerminal.invalidate();
	}

	tick_1ms ++;	
}
