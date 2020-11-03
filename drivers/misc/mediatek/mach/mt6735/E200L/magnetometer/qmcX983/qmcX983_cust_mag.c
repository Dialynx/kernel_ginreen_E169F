//tuwenzan add this file at 20150722 begin
#include <linux/types.h>
#include <mach/mt_pm_ldo.h>
#include <cust_mag.h>


static struct mag_hw cust_mag_hw = {
    .i2c_num = 2,
    .direction = 1,
    .power_id = MT65XX_POWER_NONE,  /*!< LDO is not used */
    .power_vol= VOL_DEFAULT,        /*!< LDO is not used */
    .is_batch_supported = false,
};
struct mag_hw* qmc_get_cust_mag_hw(void) 
{
    return &cust_mag_hw;
}
//tuwenzan add this file at 20150722 end