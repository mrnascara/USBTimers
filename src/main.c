#include <ti/screen.h>
#include <ti/getcsc.h>
#include <stdlib.h>
#include <sys/basicusb.h>
#include <ti/getkey.h>
/* Main function, called first */
int main(void) 
{
    /* Clear the homescreen */
    os_ClrHome();

    /* Print a string */
    os_PutStrFull("This program will disable the usb timers & controllers.");
    os_ClrHome();
    os_PutStrFull("press any key to continue....");
   uint16_t os_GetKey(void);
    /*disables usb timers*/
    void boot_USBDisableTimers(void);

    /* notify usb timers are off */
    ;os_PutStrFull("usb timers off,want to turn then on? if so press add key .");
    /*checks if the add key is press,if so then enables usb timers*/
    uint16_t os_GetKey(void);

if (k_Add)
{
void boot_USBEnableTimers(void);
;os_PutStrFull("usb timers are on,press any key");
uint16_t os_GetKey(void);
os_ClrHome();
uint16_t os_GetKey(void);
}
if (k_Sub)
{
     void boot_USBResetTimers(void);
     os_ClrHome();
     os_PutStrFull("usb timers reset");
     uint16_t os_GetKey(void);
}

    return 0;
}
