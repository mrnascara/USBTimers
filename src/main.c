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
    /*disables usb timers*/
    void boot_USBDisableTimers(void)

    /* notify usb timers are off */
    ;os_PutStrFull("usb timers off,want to turn then on? if so press add key .");
    /*checks if the add key is press,if so then enables usb timers*/
if (k_Add)
{
void boot_USBEnableTimers(void);
;os_PutStrFull("usb timers are on");
os_ClrHome();
}
if (k_Sub)
{
     void boot_USBResetTimers(void);
     os_ClrHome();
     os_PutStrFull("usb timers reset");
}

    return 0;
}
