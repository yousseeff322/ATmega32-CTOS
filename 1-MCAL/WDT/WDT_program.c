
#include "STD_type.h"
#include "BIT_math.h"
#include "WDT_interface.h"
#include "WDT_private.h"
#include "WDT_config.h"

/*========================== Functions Implementation ==========================*/

/**
 * @brief Function to initialize the WatchDog Timer
 * @param void
 * @return void
 */
void WDT_VidInit(void)
{
	if (WDT_INIT_STATE == WDT_ENABLE)
	{
		/* Enable the WatchDog Timer */
		SET_BIT(WDTCR, WDTCR_WDE);
	}

	/* Set the timeout period of the WatchDog Timer */
	WDTCR &= ~(7 << WDTCR_WDP0);
	WDTCR |= (WDT_INIT_PERIOD << WDTCR_WDP0);
}

/**
 * @brief Function to enable the WatchDog Timer
 * @param void
 * @return void
 */
u8 WDT_u8SetTimeout(u8 Copy_u8Period)
{
	/* Local Variable to hold the Error State */
	u8 Local_u8ErrorState = OK;

	if (Copy_u8Period < 8)
	{
		WDTCR &= ~(7 << WDTCR_WDP0);
		WDTCR |= (Copy_u8Period << WDTCR_WDP0);

		Local_u8ErrorState = OK;
	}
	else
	{
		Local_u8ErrorState = NOK;
	}

	/* Return the Error State */
	return Local_u8ErrorState;
}

/**
 * @brief Function to set the timeout period of the WatchDog Timer
 * @param Copy_u8Period: the timeout period of the WatchDog Timer
 * @return Error State of the function
 */
void WDT_VidEnable(void)
{
	SET_BIT(WDTCR, WDTCR_WDE);
}

/**
 * @brief Function to disable the WatchDog Timer
 * @param void
 * @return void
 */
void WDT_VidDisable(void)
{
	/* Writing logical one to WDTOE and WDE */
	WDTCR |= (1 << WDTCR_WDTOE) | (1 << WDTCR_WDE);

	/* Turn off WDT */
	WDTCR = 0x00;
}

/**
 * @brief Function to reset the WatchDog Timer
 * @param void
 * @return void
 */
void WDT_VidResetTimer(void)
{
	/* Assembly instruction to reset the WDT */
	_WDR();
}
