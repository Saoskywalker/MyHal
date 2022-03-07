#ifndef _LCD_PARAMETER_H
#define _LCD_PARAMETER_H

/*************************************************
DOTCLK = fframe × (X + HBP + HFP+HSPW) × (Y + VBP + VFP+VSPW)(单位：MHz)
pixclock = 1012/ DOTCLK=1012/ （fframe × (X + HBP + HFP+HSPW) × (Y + VBP + VFP+VSPW)） (单位：皮秒)
fframe表帧率，一般取60
************************************************/

/****************************************
	__u32 pixclock; //像素时钟(皮秒) 
　　__u32 left_margin; //行切换，从同步到绘图之间的延迟 
　　__u32 right_margin; //行切换，从绘图到同步之间的延迟 
　　__u32 upper_margin; //帧切换，从同步到绘图之间的延迟 
　　__u32 lower_margin; //帧切换，从绘图到同步之间的延迟 
　　__u32 hsync_len; //水平同步的长度 
　　__u32 vsync_len; //垂直同步的长度

VBP(vertical back porch)：表示在一帧图像开始时，垂直同步信号以后的无效的行数，对应驱动中的upper_margin；
VFB(vertical front porch)：表示在一帧图像结束后，垂直同步信号以前的无效的行数，对应驱动中的lower_margin；
VSPW(vertical sync pulse width)：表示垂直同步脉冲的宽度，用行数计算，对应驱动中的vsync_len；
HBP(horizontal back porch)：表示从水平同步信号开始到一行的有效数据开始之间的VCLK的个数，对应驱动中的left_margin；
HFP(horizontal front porth)：表示一行的有效数据结束到下一个水平同步信号开始之间的VCLK的个数，对应驱动中的right_margin；
HSPW(horizontal sync pulse width)：表示水平同步信号的宽度，用VCLK计算，对应驱动中的hsync_len；
**************************************/

#define LCD_MODEL_AT070TN94

#ifdef LCD_MODEL_AT070TN94
#define LCD_X_PIXEL 800
#define LCD_Y_PIXEL 480
#define LCD_BACKLIGHT_MAX 100 //0~100
#define LCD_DE_HV_MODE 1 //0: DE_HV 1:DE 2:HV
#define LCD_CLK 33300000 //pixel_clock_hz
#define LCD_HFP 210//h_front_porch
#define LCD_HBP 46 //h_back_porch
#define LCD_HSL 1 //h_sync_len
#define LCD_VFP 22 //v_front_porch
#define LCD_VBP 23 //v_back_porch
#define LCD_VSL 1 //v_sync_len
#endif

#ifdef LCD_MODEL_7_IPS
#define LCD_X_PIXEL 1024
#define LCD_Y_PIXEL 600
#define LCD_BACKLIGHT_MAX 100 //0~100
#define LCD_DE_HV_MODE 1 //0: DE_HV 1:DE 2:HV
#define LCD_CLK 51200000 //pixel_clock_hz
#define LCD_HFP 160//h_front_porch
#define LCD_HBP 140 //h_back_porch
#define LCD_HSL 20 //h_sync_len
#define LCD_VFP 12 //v_front_porch
#define LCD_VBP 20 //v_back_porch
#define LCD_VSL 3 //v_sync_len
#endif

#ifdef LCD_MODEL_M185XTN01 //NOTE: need close layer0 for f1c100s
#define LCD_X_PIXEL 1366
#define LCD_Y_PIXEL 768
#define LCD_BACKLIGHT_MAX 100 //0~100
#define LCD_DE_HV_MODE 1 //0: DE_HV 1:DE 2:HV
#define LCD_CLK 65000000 //pixel_clock_hz
#define LCD_HFP 120//h_front_porch
#define LCD_HBP 120 //h_back_porch
#define LCD_HSL 1 //h_sync_len
#define LCD_VFP 20 //v_front_porch
#define LCD_VBP 20 //v_back_porch
#define LCD_VSL 1 //v_sync_len
#endif

#ifdef LCD_MODEL_HJ080IA_01E
#define LCD_X_PIXEL 1024
#define LCD_Y_PIXEL 768
#define LCD_BACKLIGHT_MAX 100 //0~100
#define LCD_DE_HV_MODE 1 //0: DE_HV 1:DE 2:HV
#define LCD_CLK 65000000 //pixel_clock_hz
#define LCD_HFP 160//h_front_porch
#define LCD_HBP 160 //h_back_porch
#define LCD_HSL 1 //h_sync_len
#define LCD_VFP 15 //v_front_porch
#define LCD_VBP 23 //v_back_porch
#define LCD_VSL 1 //v_sync_len
#endif

#ifdef LCD_MODEL_TM080SDH01
#define LCD_X_PIXEL 800
#define LCD_Y_PIXEL 600
#define LCD_BACKLIGHT_MAX 100 //0~100
#define LCD_DE_HV_MODE 1 //0: DE_HV 1:DE 2:HV
#define LCD_CLK 40000000 //pixel_clock_hz
#define LCD_HFP 112//h_front_porch
#define LCD_HBP 88 //h_back_porch
#define LCD_HSL 1 //h_sync_len
#define LCD_VFP 21 //v_front_porch
#define LCD_VBP 39 //v_back_porch
#define LCD_VSL 3 //v_sync_len
#endif

#ifdef LCD_MODEL_LSA40AT9001
#define LCD_X_PIXEL 800
#define LCD_Y_PIXEL 600
#define LCD_BACKLIGHT_MAX 100 //0~100
#define LCD_DE_HV_MODE 1 //0: DE_HV 1:DE 2:HV
#define LCD_CLK 40000000 //pixel_clock_hz
#define LCD_HFP 210//h_front_porch
#define LCD_HBP 46 //h_back_porch
#define LCD_HSL 1 //h_sync_len
#define LCD_VFP 12 //v_front_porch
#define LCD_VBP 23 //v_back_porch
#define LCD_VSL 1 //v_sync_len
#endif

#ifdef LCD_MODEL_4_3_IPS
#define LCD_X_PIXEL 800
#define LCD_Y_PIXEL 480
#define LCD_BACKLIGHT_MAX 50 //0~100
#define LCD_DE_HV_MODE 1 //0: DE_HV 1:DE 2:HV
#define LCD_CLK 33000000 //pixel_clock_hz
#define LCD_HFP 40//h_front_porch
#define LCD_HBP 87 //h_back_porch
#define LCD_HSL 1 //h_sync_len
#define LCD_VFP 13 //v_front_porch
#define LCD_VBP 31 //v_back_porch
#define LCD_VSL 1 //v_sync_len
#endif

#ifdef LCD_MODEL_AT043TN24
#define LCD_X_PIXEL 480
#define LCD_Y_PIXEL 272
#define LCD_BACKLIGHT_MAX 50 //0~100
#define LCD_DE_HV_MODE 0 //0: DE_HV 1:DE 2:HV
#define LCD_CLK 9000000 //pixel_clock_hz
#define LCD_HFP 40//h_front_porch
#define LCD_HBP 87 //h_back_porch
#define LCD_HSL 1 //h_sync_len
#define LCD_VFP 13 //v_front_porch
#define LCD_VBP 31 //v_back_porch
#define LCD_VSL 1 //v_sync_len
#endif

#endif
