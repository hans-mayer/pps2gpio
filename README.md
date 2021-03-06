
# pps2gpio

With the ppsgpio module one can create a 1PPS ( one pulse per second ) interrupt in the kernel on a specific PIN of the GPIO. It's not possible to load the original module twice. This project is a clone but with a different name. Therefore a second PIN can be used for interrupts.


Here you can find the difference between the original source code and the modification  
The the original source code you can find at https://github.com/infinet/bananapi
Probably first you will need the original as first 1PPS module.
Only if you need a second you will take this one.

For questions my e-mail:  pps2gpio@ma.yer.at


<pre>
2c2
<  * pps-gpio.c -- PPS client driver using GPIO
---
>  * pps-2gpio.c -- PPS client driver using GPIO
23c23
< #define PPS_GPIO_NAME "pps-gpio"
---
> #define PPS_GPIO_NAME "pps-2gpio"
109c109
< static int pps_gpio_probe(struct platform_device *pdev)
---
> static int pps_2gpio_probe(struct platform_device *pdev)
185c185
< static int pps_gpio_remove(struct platform_device *pdev)
---
> static int pps_2gpio_remove(struct platform_device *pdev)
200,201c200,201
<       .probe          = pps_gpio_probe,
<       .remove         =  __devexit_p(pps_gpio_remove),
---
>       .probe          = pps_2gpio_probe,
>       .remove         =  __devexit_p(pps_2gpio_remove),
216c216
<       .name = "pps-gpio",
---
>       .name = "pps-2gpio",
221c221
< static int __init pps_gpio_init(void)
---
> static int __init pps_2gpio_init(void)
235c235
< static void __exit pps_gpio_exit(void)
---
> static void __exit pps_2gpio_exit(void)
242,243c242,243
< module_init(pps_gpio_init);
< module_exit(pps_gpio_exit);
---
> module_init(pps_2gpio_init);
> module_exit(pps_2gpio_exit);
255a256
> MODULE_AUTHOR("hans mayer <hans@ma.yer.at>");
258c259
< MODULE_VERSION("1.0.1");
---
> MODULE_VERSION("1.0.1t");
</pre>

Below you can see a BananaPi M1 with two boards on it. The bottom PCB is the M1 board. The GPIO connector has 2 times 13 pins. Sitting on this a GPS module is connected. This board has 26 vias parallel to the connector. I soldered a 2x13 pin row. On this the self designed PCB is plugged in.

![BananaPi M1 with 2 boards on top](/M1with2boards.png)

See also:

* <a href="http://blog.mayer.tv/2017/06/11/stratum-0-server.html" target="_blank">Stratum-1 NTP Server with rubidium source</a>
* <a href="http://blog.mayer.tv/2016/01/08/bananapi-gpio-wiringbp.html" target="_blank">Banana Pi - GPIO - WiringBP</a>
