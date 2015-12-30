
# pps2gpio 

With the ppsgpio module one can create a 1PPS ( one pulse per second ) interrupt in the kernel on a specific PIN of the GPIO. It's not possible to load the original module twice. This project is a clone but with a different name. Therefore a second PIN can be used for interrupts. 


This is the difference between the original source ode and the modification 

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
