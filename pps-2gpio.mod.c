#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
 .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x193bf445, "module_layout" },
	{ 0x6d044c26, "param_ops_uint" },
	{ 0x1976aa06, "param_ops_bool" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xf087137d, "__dynamic_pr_debug" },
	{ 0xbee4121e, "platform_driver_unregister" },
	{ 0xffc31cf9, "platform_device_unregister" },
	{ 0xbe021cce, "platform_device_register" },
	{ 0xbd5a856d, "platform_driver_register" },
	{ 0xb973c2e9, "pps_event" },
	{ 0x6c8d5ae8, "__gpio_get_value" },
	{ 0x46608fa0, "getnstimeofday" },
	{ 0x91e8df9f, "kmalloc_caches" },
	{ 0xeeee354a, "_dev_info" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x1dead45b, "pps_register_source" },
	{ 0xb81960ca, "snprintf" },
	{ 0xddb0fc9, "kmem_cache_alloc" },
	{ 0x11f447ce, "__gpio_to_irq" },
	{ 0x65d6d0f0, "gpio_direction_input" },
	{ 0x47229b5c, "gpio_request" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x37a0cba, "kfree" },
	{ 0x27e1a049, "printk" },
	{ 0xd31ddd78, "pps_unregister_source" },
	{ 0xfe990052, "gpio_free" },
	{ 0xf20dabd8, "free_irq" },
	{ 0xa0a33dd6, "dev_set_drvdata" },
	{ 0xc5c4b6ee, "dev_get_drvdata" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=pps_core";


MODULE_INFO(srcversion, "47CC55164B31E1A9E784BA1");
