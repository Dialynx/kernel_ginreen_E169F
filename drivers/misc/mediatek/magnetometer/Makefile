include $(srctree)/drivers/misc/mediatek/Makefile.custom

# In case the platform does NOT support this type of sensors
obj-y   +=  mag.o
obj-y   +=  mag_factory.o

ifeq ($(CONFIG_MTK_AKM8963_NEW),y)
obj-y	+=  akm8963-new/
endif

ifeq ($(CONFIG_MTK_BMM050_NEW),y)
obj-y	+=  bmm050-new/
endif

ifeq ($(CONFIG_MTK_BMM056_NEW),y)
obj-y	+=  bmm056-new/
endif
ifeq ($(CONFIG_MTK_BMM056_NEW),y)
obj-y	+=  bmm056-new/
endif
ifeq ($(CONFIG_MTK_AKM8963),y)
obj-y	+=  akm8963/
endif

ifeq ($(CONFIG_MTK_YAS532),y)
obj-y   +=  yamaha532/
endif

ifeq ($(CONFIG_MTK_YAS532_NEW),y)
obj-y   +=  yamaha532-new/
endif

ifeq ($(CONFIG_MTK_AKM09911),y)
obj-y   +=  akm09911/
endif

ifeq ($(CONFIG_MTK_AKM09911_NEW),y)
obj-y   +=  akm09911-new/
endif
#add magnetometer by liupeng 20150703 begin
ifeq ($(CONFIG_MTK_MMC3524X),y)
obj-y	+=  mmc3524x/
endif
#add magnetometer by liupeng 20150703 end

#tuwenzan add qmc6983 msensor begin
ifeq ($(CONFIG_MTK_QMCX983),y)
obj-y	+=  qmcX983/
endif
#tuwenzan add qmc6983 msensor end
ifeq ($(CONFIG_MTK_S62X),y)
obj-y   +=  s62x/
endif

ifeq ($(CONFIG_MTK_IST8303),y)
obj-y   +=  ist8303-new/
endif

ifeq ($(CONFIG_MTK_ST480),y)
obj-y   +=  st480/
endif

ifeq ($(CONFIG_MTK_MMC3524X),y)
obj-y   +=  mmc3524x/
endif

ifeq ($(CONFIG_MTK_MC6470),y)
obj-y   +=  mc6470/
endif

ifeq ($(CONFIG_MTK_QMCX983),y)
obj-y   +=  qmcX983/
endif

ifeq ($(CONFIG_MTK_AF7133E),y)
obj-y   +=  af7133e/
endif