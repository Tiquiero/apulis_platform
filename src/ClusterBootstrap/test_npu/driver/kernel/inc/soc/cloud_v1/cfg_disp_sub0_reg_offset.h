// ****************************************************************************** 
// Copyright     :  Copyright (C) 2018, Hisilicon Technologies Co. Ltd.
// File name     :  cfg_disp_sub0_reg_offset.h
// Department    :  CAD Development Department
// Author        :  xxx
// Version       :  1.0
// Date          :  2013/3/10
// Description   :  The description of xxx project
// Others        :  Generated automatically by nManager V4.2 
// History       :  xxx 2018/08/18 16:31:36 Create file
// ******************************************************************************

#ifndef __CFG_DISP_SUB0_REG_OFFSET_H__
#define __CFG_DISP_SUB0_REG_OFFSET_H__

/* cfg_disp_sub0 Base address of Module's Register */
#define xxx_cfg_disp_sub0_BASE                       (0x1000)

/******************************************************************************/
/*                      xxx cfg_disp_sub0 Registers' Definitions                            */
/******************************************************************************/

#define xxx_cfg_disp_sub0_DISP_PCIE_BYPASS_REG             (xxx_cfg_disp_sub0_BASE + 0x0)    /* PCIE�̶�DID��Ϣ���üĴ��� */
#define xxx_cfg_disp_sub0_DISP_DEF_EP_RC0_REG              (xxx_cfg_disp_sub0_BASE + 0x4)    /* ��PBU(ֱ��EP)Default��DID��Ϣ���üĴ��� */
#define xxx_cfg_disp_sub0_DISP_DEF_EP_RC1_REG              (xxx_cfg_disp_sub0_BASE + 0x8)    /* ��PBU(ֱ��EP)Default��DID��Ϣ���üĴ��� */
#define xxx_cfg_disp_sub0_PA_ID_CFG_REG                    (xxx_cfg_disp_sub0_BASE + 0x10)   /* PA ID��̬���� */
#define xxx_cfg_disp_sub0_DISP_RSP_CTRL_REG                (xxx_cfg_disp_sub0_BASE + 0x14)   /* dispatch��ERR��Ӧ���Ϳ��ƼĴ��� */
#define xxx_cfg_disp_sub0_EWA_CTRL_REG                     (xxx_cfg_disp_sub0_BASE + 0x18)   /* EWA���ο��ƼĴ��� */
#define xxx_cfg_disp_sub0_DISP_BAR_PATH_SEL_REG            (xxx_cfg_disp_sub0_BASE + 0x1C)   /* ��̬�������üĴ��� */
#define xxx_cfg_disp_sub0_DISP_AXI0_ORDER_REG              (xxx_cfg_disp_sub0_BASE + 0x20)   /* dispatch��AXI�ӿ�0��д�����ַ��Χ���� */
#define xxx_cfg_disp_sub0_DISP_AXI1_ORDER_REG              (xxx_cfg_disp_sub0_BASE + 0x24)   /* dispatch��AXI�ӿ�1��д�����ַ��Χ���� */
#define xxx_cfg_disp_sub0_DISP_AXI2_ORDER_REG              (xxx_cfg_disp_sub0_BASE + 0x28)   /* dispatch��AXI�ӿ�2��д�����ַ��Χ���� */
#define xxx_cfg_disp_sub0_DISP_AXI3_ORDER_REG              (xxx_cfg_disp_sub0_BASE + 0x2C)   /* dispatch��AXI�ӿ�3��д�����ַ��Χ���� */
#define xxx_cfg_disp_sub0_DISP_AXI4_ORDER_REG              (xxx_cfg_disp_sub0_BASE + 0x30)   /* dispatch��AXI�ӿ�4��д�����ַ��Χ���� */
#define xxx_cfg_disp_sub0_DISP_AXI5_ORDER_REG              (xxx_cfg_disp_sub0_BASE + 0x34)   /* dispatch��AXI�ӿ�5��д�����ַ��Χ���� */
#define xxx_cfg_disp_sub0_DISP_AXI6_ORDER_REG              (xxx_cfg_disp_sub0_BASE + 0x38)   /* dispatch��AXI�ӿ�6��д�����ַ��Χ���� */
#define xxx_cfg_disp_sub0_DISP_AXI7_ORDER_REG              (xxx_cfg_disp_sub0_BASE + 0x3C)   /* dispatch��AXI�ӿ�7��д�����ַ��Χ���� */
#define xxx_cfg_disp_sub0_DISP_DAW_VF_CTRL_REG             (xxx_cfg_disp_sub0_BASE + 0xC0)   /* DAW��VF���ÿ��ƼĴ��� */
#define xxx_cfg_disp_sub0_DISP_DAW_EN_REG                  (xxx_cfg_disp_sub0_BASE + 0xD0)   /* dispatch ƽ̨�豸DAW����ʹ������ */
#define xxx_cfg_disp_sub0_DISP_RC0_BAR_DAW_EN_REG          (xxx_cfg_disp_sub0_BASE + 0xD4)   /* dispatch PCIE���豸��BAR����ʹ������ */
#define xxx_cfg_disp_sub0_DISP_RC1_BAR_DAW_EN_REG          (xxx_cfg_disp_sub0_BASE + 0xD8)   /* dispatch PCIE���豸��BAR����ʹ������ */
#define xxx_cfg_disp_sub0_DISP_ECAM_DAW_EN_REG             (xxx_cfg_disp_sub0_BASE + 0xDC)   /* dispatch ECAM DAW����ʹ������ */
#define xxx_cfg_disp_sub0_DISP_VF_DAW_EN_REG               (xxx_cfg_disp_sub0_BASE + 0xE0)   /* dispatch vf���ƼĴ��� */
#define xxx_cfg_disp_sub0_DISP_VF_BASEADDR_REG             (xxx_cfg_disp_sub0_BASE + 0xF0)   /* VF�ռ����ַ���á� */
#define xxx_cfg_disp_sub0_DISP_ECAM_BASEADDR_REG           (xxx_cfg_disp_sub0_BASE + 0xF4)   /* ECAM�ռ����ַ���á� */
#define xxx_cfg_disp_sub0_DISP_BLOCK_CYCLE_REG             (xxx_cfg_disp_sub0_BASE + 0xF8)   /* DISP���ȿ��� */
#define xxx_cfg_disp_sub0_DISP_DAW0_ADDR_REG               (xxx_cfg_disp_sub0_BASE + 0x100)  /* ����DAW0��ʼ��ַ���� */
#define xxx_cfg_disp_sub0_DISP_DAW0_SIZE_ID_REG            (xxx_cfg_disp_sub0_BASE + 0x104)  /* ����DAW0���ڴ�С��Ŀ������ */
#define xxx_cfg_disp_sub0_DISP_DAW1_ADDR_REG               (xxx_cfg_disp_sub0_BASE + 0x110)  /* ����DAW1��ʼ��ַ���� */
#define xxx_cfg_disp_sub0_DISP_DAW1_SIZE_ID_REG            (xxx_cfg_disp_sub0_BASE + 0x114)  /* ����DAW1���ڴ�С��Ŀ������ */
#define xxx_cfg_disp_sub0_DISP_DAW2_ADDR_REG               (xxx_cfg_disp_sub0_BASE + 0x120)  /* ����DAW2��ʼ��ַ���� */
#define xxx_cfg_disp_sub0_DISP_DAW2_SIZE_ID_REG            (xxx_cfg_disp_sub0_BASE + 0x124)  /* ����DAW2���ڴ�С��Ŀ������ */
#define xxx_cfg_disp_sub0_DISP_DAW3_ADDR_REG               (xxx_cfg_disp_sub0_BASE + 0x130)  /* ����DAW3��ʼ��ַ���� */
#define xxx_cfg_disp_sub0_DISP_DAW3_SIZE_ID_REG            (xxx_cfg_disp_sub0_BASE + 0x134)  /* ����DAW3���ڴ�С��Ŀ������ */
#define xxx_cfg_disp_sub0_DISP_DAW4_ADDR_REG               (xxx_cfg_disp_sub0_BASE + 0x140)  /* ����DAW4��ʼ��ַ���� */
#define xxx_cfg_disp_sub0_DISP_DAW4_SIZE_ID_REG            (xxx_cfg_disp_sub0_BASE + 0x144)  /* ����DAW4���ڴ�С��Ŀ������ */
#define xxx_cfg_disp_sub0_DISP_DAW5_ADDR_REG               (xxx_cfg_disp_sub0_BASE + 0x150)  /* ����DAW5��ʼ��ַ���� */
#define xxx_cfg_disp_sub0_DISP_DAW5_SIZE_ID_REG            (xxx_cfg_disp_sub0_BASE + 0x154)  /* ����DAW5���ڴ�С��Ŀ������ */
#define xxx_cfg_disp_sub0_DISP_DAW6_ADDR_REG               (xxx_cfg_disp_sub0_BASE + 0x160)  /* ����DAW6��ʼ��ַ���� */
#define xxx_cfg_disp_sub0_DISP_DAW6_SIZE_ID_REG            (xxx_cfg_disp_sub0_BASE + 0x164)  /* ����DAW6���ڴ�С��Ŀ������ */
#define xxx_cfg_disp_sub0_DISP_DAW7_ADDR_REG               (xxx_cfg_disp_sub0_BASE + 0x170)  /* ����DAW7��ʼ��ַ���� */
#define xxx_cfg_disp_sub0_DISP_DAW7_SIZE_ID_REG            (xxx_cfg_disp_sub0_BASE + 0x174)  /* ����DAW7���ڴ�С��Ŀ������ */
#define xxx_cfg_disp_sub0_DISP_DAW8_ADDR_REG               (xxx_cfg_disp_sub0_BASE + 0x180)  /* ����DAW8��ʼ��ַ���� */
#define xxx_cfg_disp_sub0_DISP_DAW8_SIZE_ID_REG            (xxx_cfg_disp_sub0_BASE + 0x184)  /* ����DAW8���ڴ�С��Ŀ������ */
#define xxx_cfg_disp_sub0_DISP_DAW9_ADDR_REG               (xxx_cfg_disp_sub0_BASE + 0x190)  /* ����DAW9��ʼ��ַ���� */
#define xxx_cfg_disp_sub0_DISP_DAW9_SIZE_ID_REG            (xxx_cfg_disp_sub0_BASE + 0x194)  /* ����DAW9���ڴ�С��Ŀ������ */
#define xxx_cfg_disp_sub0_DISP_DAW10_ADDR_REG              (xxx_cfg_disp_sub0_BASE + 0x1A0)  /* ����DAW10��ʼ��ַ���� */
#define xxx_cfg_disp_sub0_DISP_DAW10_SIZE_ID_REG           (xxx_cfg_disp_sub0_BASE + 0x1A4)  /* ����DAW10���ڴ�С��Ŀ������ */
#define xxx_cfg_disp_sub0_DISP_DAW11_ADDR_REG              (xxx_cfg_disp_sub0_BASE + 0x1B0)  /* ����DAW11��ʼ��ַ���� */
#define xxx_cfg_disp_sub0_DISP_DAW11_SIZE_ID_REG           (xxx_cfg_disp_sub0_BASE + 0x1B4)  /* ����DAW11���ڴ�С��Ŀ������ */
#define xxx_cfg_disp_sub0_DISP_VF00_ID_REG                 (xxx_cfg_disp_sub0_BASE + 0x300)  /* VF00������ϵͳ��ID���á� */
#define xxx_cfg_disp_sub0_DISP_VF01_ID_REG                 (xxx_cfg_disp_sub0_BASE + 0x304)  /* VF01������ϵͳ��ID���á� */
#define xxx_cfg_disp_sub0_DISP_VF02_ID_REG                 (xxx_cfg_disp_sub0_BASE + 0x308)  /* VF02������ϵͳ��ID���á� */
#define xxx_cfg_disp_sub0_DISP_VF03_ID_REG                 (xxx_cfg_disp_sub0_BASE + 0x30C)  /* VF03������ϵͳ��ID���á� */
#define xxx_cfg_disp_sub0_DISP_VF04_ID_REG                 (xxx_cfg_disp_sub0_BASE + 0x310)  /* VF04������ϵͳ��ID���á� */
#define xxx_cfg_disp_sub0_DISP_VF05_ID_REG                 (xxx_cfg_disp_sub0_BASE + 0x314)  /* VF05������ϵͳ��ID���á� */
#define xxx_cfg_disp_sub0_DISP_VF06_ID_REG                 (xxx_cfg_disp_sub0_BASE + 0x318)  /* VF06������ϵͳ��ID���á� */
#define xxx_cfg_disp_sub0_DISP_VF07_ID_REG                 (xxx_cfg_disp_sub0_BASE + 0x31C)  /* VF07������ϵͳ��ID���á� */
#define xxx_cfg_disp_sub0_DISP_VF08_ID_REG                 (xxx_cfg_disp_sub0_BASE + 0x320)  /* VF08������ϵͳ��ID���á� */
#define xxx_cfg_disp_sub0_DISP_VF09_ID_REG                 (xxx_cfg_disp_sub0_BASE + 0x324)  /* VF09������ϵͳ��ID���á� */
#define xxx_cfg_disp_sub0_DISP_VF10_ID_REG                 (xxx_cfg_disp_sub0_BASE + 0x328)  /* VF10������ϵͳ��ID���á� */
#define xxx_cfg_disp_sub0_DISP_VF11_ID_REG                 (xxx_cfg_disp_sub0_BASE + 0x32C)  /* VF11������ϵͳ��ID���á� */
#define xxx_cfg_disp_sub0_DISP_VF12_ID_REG                 (xxx_cfg_disp_sub0_BASE + 0x330)  /* VF12������ϵͳ��ID���á� */
#define xxx_cfg_disp_sub0_DISP_VF13_ID_REG                 (xxx_cfg_disp_sub0_BASE + 0x334)  /* VF13������ϵͳ��ID���á� */
#define xxx_cfg_disp_sub0_DISP_VF14_ID_REG                 (xxx_cfg_disp_sub0_BASE + 0x338)  /* VF14������ϵͳ��ID���á� */
#define xxx_cfg_disp_sub0_DISP_VF15_ID_REG                 (xxx_cfg_disp_sub0_BASE + 0x33C)  /* VF15������ϵͳ��ID���á� */
#define xxx_cfg_disp_sub0_DISP_VF16_ID_REG                 (xxx_cfg_disp_sub0_BASE + 0x340)  /* VF16������ϵͳ��ID���á� */
#define xxx_cfg_disp_sub0_DISP_VF17_ID_REG                 (xxx_cfg_disp_sub0_BASE + 0x344)  /* VF17������ϵͳ��ID���á� */
#define xxx_cfg_disp_sub0_DISP_VF18_ID_REG                 (xxx_cfg_disp_sub0_BASE + 0x348)  /* VF18������ϵͳ��ID���á� */
#define xxx_cfg_disp_sub0_DISP_VF19_ID_REG                 (xxx_cfg_disp_sub0_BASE + 0x34C)  /* VF19������ϵͳ��ID���á� */
#define xxx_cfg_disp_sub0_DISP_VF20_ID_REG                 (xxx_cfg_disp_sub0_BASE + 0x350)  /* VF20������ϵͳ��ID���á� */
#define xxx_cfg_disp_sub0_DISP_VF21_ID_REG                 (xxx_cfg_disp_sub0_BASE + 0x354)  /* VF21������ϵͳ��ID���á� */
#define xxx_cfg_disp_sub0_DISP_VF22_ID_REG                 (xxx_cfg_disp_sub0_BASE + 0x358)  /* VF22������ϵͳ��ID���á� */
#define xxx_cfg_disp_sub0_DISP_VF23_ID_REG                 (xxx_cfg_disp_sub0_BASE + 0x35C)  /* VF23������ϵͳ��ID���á� */
#define xxx_cfg_disp_sub0_DISP_VF24_ID_REG                 (xxx_cfg_disp_sub0_BASE + 0x360)  /* VF24������ϵͳ��ID���á� */
#define xxx_cfg_disp_sub0_DISP_VF25_ID_REG                 (xxx_cfg_disp_sub0_BASE + 0x364)  /* VF25������ϵͳ��ID���á� */
#define xxx_cfg_disp_sub0_DISP_VF26_ID_REG                 (xxx_cfg_disp_sub0_BASE + 0x368)  /* VF26������ϵͳ��ID���á� */
#define xxx_cfg_disp_sub0_DISP_VF27_ID_REG                 (xxx_cfg_disp_sub0_BASE + 0x36C)  /* VF27������ϵͳ��ID���á� */
#define xxx_cfg_disp_sub0_DISP_VF28_ID_REG                 (xxx_cfg_disp_sub0_BASE + 0x370)  /* VF28������ϵͳ��ID���á� */
#define xxx_cfg_disp_sub0_DISP_VF29_ID_REG                 (xxx_cfg_disp_sub0_BASE + 0x374)  /* VF29������ϵͳ��ID���á� */
#define xxx_cfg_disp_sub0_DISP_VF30_ID_REG                 (xxx_cfg_disp_sub0_BASE + 0x378)  /* VF30������ϵͳ��ID���á� */
#define xxx_cfg_disp_sub0_DISP_VF31_ID_REG                 (xxx_cfg_disp_sub0_BASE + 0x37C)  /* VF31������ϵͳ��ID���á� */
#define xxx_cfg_disp_sub0_DISP_RC0_BASE_ADDR_REG           (xxx_cfg_disp_sub0_BASE + 0x400)  /* PCIE RC0 DAW��ʼ��ַ���� */
#define xxx_cfg_disp_sub0_DISP_RC0_LIMIT_ADDR_REG          (xxx_cfg_disp_sub0_BASE + 0x404)  /* PCIE RC0 DAW ������ַ���� */
#define xxx_cfg_disp_sub0_DISP_RC1_BASE_ADDR_REG           (xxx_cfg_disp_sub0_BASE + 0x408)  /* PCIE RC1 DAW��ʼ��ַ���� */
#define xxx_cfg_disp_sub0_DISP_RC1_LIMIT_ADDR_REG          (xxx_cfg_disp_sub0_BASE + 0x40C)  /* PCIE RC1 DAW ������ַ���� */
#define xxx_cfg_disp_sub0_DISP_RC0_BAR_DAW0_BASE_ADDR_REG  (xxx_cfg_disp_sub0_BASE + 0x410)  /* ����PCIE���豸BAR�ռ�DAW0������ʼ��ַ���� */
#define xxx_cfg_disp_sub0_DISP_RC0_BAR_DAW0_LIMIT_ADDR_REG (xxx_cfg_disp_sub0_BASE + 0x414)  /* ����PCIE���豸BAR�ռ�DAW0���ڽ�����ַ���� */
#define xxx_cfg_disp_sub0_DISP_RC0_BAR_DAW0_DID_REG        (xxx_cfg_disp_sub0_BASE + 0x418)  /* ����PCIE���豸BAR�ռ�DAW0����ID·������ */
#define xxx_cfg_disp_sub0_DISP_RC0_BAR_DAW1_BASE_ADDR_REG  (xxx_cfg_disp_sub0_BASE + 0x420)  /* ����PCIE���豸BAR�ռ�DAW1������ʼ��ַ���� */
#define xxx_cfg_disp_sub0_DISP_RC0_BAR_DAW1_LIMIT_ADDR_REG (xxx_cfg_disp_sub0_BASE + 0x424)  /* ����PCIE���豸BAR�ռ�DAW1���ڽ�����ַ���� */
#define xxx_cfg_disp_sub0_DISP_RC0_BAR_DAW1_DID_REG        (xxx_cfg_disp_sub0_BASE + 0x428)  /* ����PCIE���豸BAR�ռ�DAW1����ID·������ */
#define xxx_cfg_disp_sub0_DISP_RC0_BAR_DAW2_BASE_ADDR_REG  (xxx_cfg_disp_sub0_BASE + 0x430)  /* ����PCIE���豸BAR�ռ�DAW2������ʼ��ַ���� */
#define xxx_cfg_disp_sub0_DISP_RC0_BAR_DAW2_LIMIT_ADDR_REG (xxx_cfg_disp_sub0_BASE + 0x434)  /* ����PCIE���豸BAR�ռ�DAW2���ڽ�����ַ���� */
#define xxx_cfg_disp_sub0_DISP_RC0_BAR_DAW2_DID_REG        (xxx_cfg_disp_sub0_BASE + 0x438)  /* ����PCIE���豸BAR�ռ�DAW2����ID·������ */
#define xxx_cfg_disp_sub0_DISP_RC0_BAR_DAW3_BASE_ADDR_REG  (xxx_cfg_disp_sub0_BASE + 0x440)  /* ����PCIE���豸BAR�ռ�DAW3������ʼ��ַ���� */
#define xxx_cfg_disp_sub0_DISP_RC0_BAR_DAW3_LIMIT_ADDR_REG (xxx_cfg_disp_sub0_BASE + 0x444)  /* ����PCIE���豸BAR�ռ�DAW3���ڽ�����ַ���� */
#define xxx_cfg_disp_sub0_DISP_RC0_BAR_DAW3_DID_REG        (xxx_cfg_disp_sub0_BASE + 0x448)  /* ����PCIE���豸BAR�ռ�DAW3����ID·������ */
#define xxx_cfg_disp_sub0_DISP_RC1_BAR_DAW0_BASE_ADDR_REG  (xxx_cfg_disp_sub0_BASE + 0x480)  /* ����PCIE���豸BAR�ռ�DAW0������ʼ��ַ���� */
#define xxx_cfg_disp_sub0_DISP_RC1_BAR_DAW0_LIMIT_ADDR_REG (xxx_cfg_disp_sub0_BASE + 0x484)  /* ����PCIE���豸BAR�ռ�DAW0���ڽ�����ַ���� */
#define xxx_cfg_disp_sub0_DISP_RC1_BAR_DAW0_DID_REG        (xxx_cfg_disp_sub0_BASE + 0x488)  /* ����PCIE���豸BAR�ռ�DAW0����ID·������ */
#define xxx_cfg_disp_sub0_DISP_RC1_BAR_DAW1_BASE_ADDR_REG  (xxx_cfg_disp_sub0_BASE + 0x490)  /* ����PCIE���豸BAR�ռ�DAW1������ʼ��ַ���� */
#define xxx_cfg_disp_sub0_DISP_RC1_BAR_DAW1_LIMIT_ADDR_REG (xxx_cfg_disp_sub0_BASE + 0x494)  /* ����PCIE���豸BAR�ռ�DAW1���ڽ�����ַ���� */
#define xxx_cfg_disp_sub0_DISP_RC1_BAR_DAW1_DID_REG        (xxx_cfg_disp_sub0_BASE + 0x498)  /* ����PCIE���豸BAR�ռ�DAW1����ID·������ */
#define xxx_cfg_disp_sub0_DISP_RC1_BAR_DAW2_BASE_ADDR_REG  (xxx_cfg_disp_sub0_BASE + 0x4A0)  /* ����PCIE���豸BAR�ռ�DAW2������ʼ��ַ���� */
#define xxx_cfg_disp_sub0_DISP_RC1_BAR_DAW2_LIMIT_ADDR_REG (xxx_cfg_disp_sub0_BASE + 0x4A4)  /* ����PCIE���豸BAR�ռ�DAW2���ڽ�����ַ���� */
#define xxx_cfg_disp_sub0_DISP_RC1_BAR_DAW2_DID_REG        (xxx_cfg_disp_sub0_BASE + 0x4A8)  /* ����PCIE���豸BAR�ռ�DAW2����ID·������ */
#define xxx_cfg_disp_sub0_DISP_RC1_BAR_DAW3_BASE_ADDR_REG  (xxx_cfg_disp_sub0_BASE + 0x4B0)  /* ����PCIE���豸BAR�ռ�DAW3������ʼ��ַ���� */
#define xxx_cfg_disp_sub0_DISP_RC1_BAR_DAW3_LIMIT_ADDR_REG (xxx_cfg_disp_sub0_BASE + 0x4B4)  /* ����PCIE���豸BAR�ռ�DAW3���ڽ�����ַ���� */
#define xxx_cfg_disp_sub0_DISP_RC1_BAR_DAW3_DID_REG        (xxx_cfg_disp_sub0_BASE + 0x4B8)  /* ����PCIE���豸BAR�ռ�DAW3����ID·������ */
#define xxx_cfg_disp_sub0_DISP_ECAM_DAW0_ADDR_REG          (xxx_cfg_disp_sub0_BASE + 0x500)  /* ����PCIE���豸ECAM�ռ�DAW0���ڵ�ַ */
#define xxx_cfg_disp_sub0_DISP_ECAM_DAW0_DID_REG           (xxx_cfg_disp_sub0_BASE + 0x504)  /* ����PCIE���豸ECAM�ռ�DAW0����DID���� */
#define xxx_cfg_disp_sub0_DISP_ECAM_DAW1_ADDR_REG          (xxx_cfg_disp_sub0_BASE + 0x510)  /* ����PCIE���豸ECAM�ռ�DAW1���ڵ�ַ */
#define xxx_cfg_disp_sub0_DISP_ECAM_DAW1_DID_REG           (xxx_cfg_disp_sub0_BASE + 0x514)  /* ����PCIE���豸ECAM�ռ�DAW1����DID���� */
#define xxx_cfg_disp_sub0_DISP_ECAM_DAW2_ADDR_REG          (xxx_cfg_disp_sub0_BASE + 0x520)  /* ����PCIE���豸ECAM�ռ�DAW2���ڵ�ַ */
#define xxx_cfg_disp_sub0_DISP_ECAM_DAW2_DID_REG           (xxx_cfg_disp_sub0_BASE + 0x524)  /* ����PCIE���豸ECAM�ռ�DAW2����DID���� */
#define xxx_cfg_disp_sub0_DISP_ECAM_DAW3_ADDR_REG          (xxx_cfg_disp_sub0_BASE + 0x530)  /* ����PCIE���豸ECAM�ռ�DAW3���ڵ�ַ */
#define xxx_cfg_disp_sub0_DISP_ECAM_DAW3_DID_REG           (xxx_cfg_disp_sub0_BASE + 0x534)  /* ����PCIE���豸ECAM�ռ�DAW3����DID���� */
#define xxx_cfg_disp_sub0_DISP_ECAM_DAW4_ADDR_REG          (xxx_cfg_disp_sub0_BASE + 0x540)  /* ����PCIE���豸ECAM�ռ�DAW4���ڵ�ַ */
#define xxx_cfg_disp_sub0_DISP_ECAM_DAW4_DID_REG           (xxx_cfg_disp_sub0_BASE + 0x544)  /* ����PCIE���豸ECAM�ռ�DAW4����DID���� */
#define xxx_cfg_disp_sub0_DISP_ECAM_DAW5_ADDR_REG          (xxx_cfg_disp_sub0_BASE + 0x550)  /* ����PCIE���豸ECAM�ռ�DAW5���ڵ�ַ */
#define xxx_cfg_disp_sub0_DISP_ECAM_DAW5_DID_REG           (xxx_cfg_disp_sub0_BASE + 0x554)  /* ����PCIE���豸ECAM�ռ�DAW5����DID���� */
#define xxx_cfg_disp_sub0_DISP_ECAM_DAW6_ADDR_REG          (xxx_cfg_disp_sub0_BASE + 0x560)  /* ����PCIE���豸ECAM�ռ�DAW6���ڵ�ַ */
#define xxx_cfg_disp_sub0_DISP_ECAM_DAW6_DID_REG           (xxx_cfg_disp_sub0_BASE + 0x564)  /* ����PCIE���豸ECAM�ռ�DAW6����DID���� */
#define xxx_cfg_disp_sub0_DISP_ECAM_DAW7_ADDR_REG          (xxx_cfg_disp_sub0_BASE + 0x570)  /* ����PCIE���豸ECAM�ռ�DAW7���ڵ�ַ */
#define xxx_cfg_disp_sub0_DISP_ECAM_DAW7_DID_REG           (xxx_cfg_disp_sub0_BASE + 0x574)  /* ����PCIE���豸ECAM�ռ�DAW7����DID���� */
#define xxx_cfg_disp_sub0_DISP_OFFSET_L_ADDR0_REG          (xxx_cfg_disp_sub0_BASE + 0x600)  /* ƫ�õ�ַ��20bit�����üĴ��� */
#define xxx_cfg_disp_sub0_DISP_OFFSET_L_ADDR1_REG          (xxx_cfg_disp_sub0_BASE + 0x604)  /* ƫ�õ�ַ��20bit�����üĴ��� */
#define xxx_cfg_disp_sub0_DISP_OFFSET_L_ADDR2_REG          (xxx_cfg_disp_sub0_BASE + 0x608)  /* ƫ�õ�ַ��20bit�����üĴ��� */
#define xxx_cfg_disp_sub0_DISP_OFFSET_L_ADDR3_REG          (xxx_cfg_disp_sub0_BASE + 0x60C)  /* ƫ�õ�ַ��20bit�����üĴ��� */
#define xxx_cfg_disp_sub0_DISP_OFFSET_L_ADDR4_REG          (xxx_cfg_disp_sub0_BASE + 0x610)  /* ƫ�õ�ַ��20bit�����üĴ��� */
#define xxx_cfg_disp_sub0_DISP_OFFSET_L_ADDR5_REG          (xxx_cfg_disp_sub0_BASE + 0x614)  /* ƫ�õ�ַ��20bit�����üĴ��� */
#define xxx_cfg_disp_sub0_DISP_OFFSET_L_ADDR6_REG          (xxx_cfg_disp_sub0_BASE + 0x618)  /* ƫ�õ�ַ��20bit�����üĴ��� */
#define xxx_cfg_disp_sub0_DISP_OFFSET_L_ADDR7_REG          (xxx_cfg_disp_sub0_BASE + 0x61C)  /* ƫ�õ�ַ��20bit�����üĴ��� */
#define xxx_cfg_disp_sub0_DISP_OFFSET_H_ADDR0_REG          (xxx_cfg_disp_sub0_BASE + 0x620)  /* ƫ�õ�ַ��28bit�����üĴ��� */
#define xxx_cfg_disp_sub0_DISP_OFFSET_H_ADDR1_REG          (xxx_cfg_disp_sub0_BASE + 0x624)  /* ƫ�õ�ַ��28bit�����üĴ��� */
#define xxx_cfg_disp_sub0_DISP_OFFSET_H_ADDR2_REG          (xxx_cfg_disp_sub0_BASE + 0x628)  /* ƫ�õ�ַ��28bit�����üĴ��� */
#define xxx_cfg_disp_sub0_DISP_OFFSET_H_ADDR3_REG          (xxx_cfg_disp_sub0_BASE + 0x62C)  /* ƫ�õ�ַ��28bit�����üĴ��� */
#define xxx_cfg_disp_sub0_DISP_OFFSET_H_ADDR4_REG          (xxx_cfg_disp_sub0_BASE + 0x630)  /* ƫ�õ�ַ��28bit�����üĴ��� */
#define xxx_cfg_disp_sub0_DISP_OFFSET_H_ADDR5_REG          (xxx_cfg_disp_sub0_BASE + 0x634)  /* ƫ�õ�ַ��28bit�����üĴ��� */
#define xxx_cfg_disp_sub0_DISP_OFFSET_H_ADDR6_REG          (xxx_cfg_disp_sub0_BASE + 0x638)  /* ƫ�õ�ַ��28bit�����üĴ��� */
#define xxx_cfg_disp_sub0_DISP_OFFSET_H_ADDR7_REG          (xxx_cfg_disp_sub0_BASE + 0x63C)  /* ƫ�õ�ַ��28bit�����üĴ��� */
#define xxx_cfg_disp_sub0_DISP_MAGIC_WORD_REG              (xxx_cfg_disp_sub0_BASE + 0x7F0)  /* DISP �汾�������Ĵ��� */
#define xxx_cfg_disp_sub0_DISP_INTRAW0_REG                 (xxx_cfg_disp_sub0_BASE + 0x800)  /* dispatch��ԭʼ�ж�״̬�Ĵ��� */
#define xxx_cfg_disp_sub0_DISP_INTMASK0_REG                (xxx_cfg_disp_sub0_BASE + 0x804)  /* dispatch���ж����μĴ��� */
#define xxx_cfg_disp_sub0_DISP_INTSTAT0_REG                (xxx_cfg_disp_sub0_BASE + 0x808)  /* dispatch�����κ���ж�״̬�Ĵ��� */
#define xxx_cfg_disp_sub0_DISP_INTCLR0_REG                 (xxx_cfg_disp_sub0_BASE + 0x80C)  /* dispatch���ж�����Ĵ��� */
#define xxx_cfg_disp_sub0_DISP_INTRAW1_REG                 (xxx_cfg_disp_sub0_BASE + 0x810)  /* dispatch��ԭʼ�ж�״̬�Ĵ��� */
#define xxx_cfg_disp_sub0_DISP_INTMASK1_REG                (xxx_cfg_disp_sub0_BASE + 0x814)  /* dispatch���ж����μĴ��� */
#define xxx_cfg_disp_sub0_DISP_INTSTAT1_REG                (xxx_cfg_disp_sub0_BASE + 0x818)  /* dispatch�����κ���ж�״̬�Ĵ��� */
#define xxx_cfg_disp_sub0_DISP_INTCLR1_REG                 (xxx_cfg_disp_sub0_BASE + 0x81C)  /* dispatch���ж�����Ĵ��� */
#define xxx_cfg_disp_sub0_DISP_ERR_ADDR_L_REG              (xxx_cfg_disp_sub0_BASE + 0x840)  /* dispatch�Ĵ����ַ״̬�Ĵ��� */
#define xxx_cfg_disp_sub0_DISP_ERR_ADDR_H_REG              (xxx_cfg_disp_sub0_BASE + 0x844)  /* dispatch�Ĵ����ַ״̬�Ĵ��� */
#define xxx_cfg_disp_sub0_DISP_ERR_INFO0_REG               (xxx_cfg_disp_sub0_BASE + 0x848)  /* dispatch�Ĵ���״̬�Ĵ���0 */
#define xxx_cfg_disp_sub0_DISP_ERR_INFO1_REG               (xxx_cfg_disp_sub0_BASE + 0x84C)  /* dispatch�Ĵ���״̬�Ĵ���1 */
#define xxx_cfg_disp_sub0_DISP_ERR_ACCESS_RST_PORT_REG     (xxx_cfg_disp_sub0_BASE + 0x850)  /* dispatch���ʸ�λ��AXI�˿�״̬�Ĵ��� */
#define xxx_cfg_disp_sub0_DISP_PORT0_STATE_REG             (xxx_cfg_disp_sub0_BASE + 0x900)  /* dispatch�˿�0״̬�Ĵ��� */
#define xxx_cfg_disp_sub0_DISP_PORT1_STATE_REG             (xxx_cfg_disp_sub0_BASE + 0x904)  /* dispatch�˿�1״̬�Ĵ��� */
#define xxx_cfg_disp_sub0_DISP_PORT2_STATE_REG             (xxx_cfg_disp_sub0_BASE + 0x908)  /* dispatch�˿�2״̬�Ĵ��� */
#define xxx_cfg_disp_sub0_DISP_PORT3_STATE_REG             (xxx_cfg_disp_sub0_BASE + 0x90C)  /* dispatch�˿�3״̬�Ĵ��� */
#define xxx_cfg_disp_sub0_DISP_PORT4_STATE_REG             (xxx_cfg_disp_sub0_BASE + 0x910)  /* dispatch�˿�4״̬�Ĵ��� */
#define xxx_cfg_disp_sub0_DISP_PORT5_STATE_REG             (xxx_cfg_disp_sub0_BASE + 0x914)  /* dispatch�˿�5״̬�Ĵ��� */
#define xxx_cfg_disp_sub0_DISP_PORT6_STATE_REG             (xxx_cfg_disp_sub0_BASE + 0x918)  /* dispatch�˿�6״̬�Ĵ��� */
#define xxx_cfg_disp_sub0_DISP_PORT7_STATE_REG             (xxx_cfg_disp_sub0_BASE + 0x91C)  /* dispatch�˿�7״̬�Ĵ��� */
#define xxx_cfg_disp_sub0_DISP_DEF_PORT_STATE_REG          (xxx_cfg_disp_sub0_BASE + 0x920)  /* dispatch Default Slave�˿�״̬�Ĵ��� */
#define xxx_cfg_disp_sub0_DISP_BARRIER_ST_REG              (xxx_cfg_disp_sub0_BASE + 0xA00)  /* dispatch Barrierͳ��״̬�Ĵ��� */
#define xxx_cfg_disp_sub0_DISP_ECO_CFG0_REG                (xxx_cfg_disp_sub0_BASE + 0xC00)  /* ����ECO���������üĴ���0 */
#define xxx_cfg_disp_sub0_DISP_ECO_CFG1_REG                (xxx_cfg_disp_sub0_BASE + 0xC04)  /* ����ECO���������üĴ���1 */
#define xxx_cfg_disp_sub0_DISP_ECO_CFG2_REG                (xxx_cfg_disp_sub0_BASE + 0xC08)  /* ����ECO���������üĴ���2 */
#define xxx_cfg_disp_sub0_DISP_ECO_CFG3_REG                (xxx_cfg_disp_sub0_BASE + 0xC0C)  /* ����ECO���������üĴ���3 */
#define xxx_cfg_disp_sub0_DISP_VERSION0_REG                (xxx_cfg_disp_sub0_BASE + 0xC10)  /* VERSION�Ĵ���0 */
#define xxx_cfg_disp_sub0_DISP_VERSION1_REG                (xxx_cfg_disp_sub0_BASE + 0xC14)  /* VERSION�Ĵ���1 */
#define xxx_cfg_disp_sub0_DISP_VERSION2_REG                (xxx_cfg_disp_sub0_BASE + 0xC18)  /* VERSION�Ĵ���2 */
#define xxx_cfg_disp_sub0_DISP_VERSION3_REG                (xxx_cfg_disp_sub0_BASE + 0xC1C)  /* VERSION�Ĵ���3 */
#define xxx_cfg_disp_sub0_DISP_BUSY_REG                    (xxx_cfg_disp_sub0_BASE + 0x1000) /* �豸æ״̬�Ĵ��� */
#define xxx_cfg_disp_sub0_DISP_DFX_CTRL_REG                (xxx_cfg_disp_sub0_BASE + 0x1040) /* DFXʱ���ſؿ��ƼĴ��� */
#define xxx_cfg_disp_sub0_DISP_TRAP_SEL_REG                (xxx_cfg_disp_sub0_BASE + 0x1048) /* dispatch Slave�ӿ�TRAPѡ��Ĵ��� */
#define xxx_cfg_disp_sub0_DISP_TRAP_CTRL_REG               (xxx_cfg_disp_sub0_BASE + 0x1050) /* Trap���ܿ��ƼĴ��� */
#define xxx_cfg_disp_sub0_DISP_TRAP_REVERSE_REG            (xxx_cfg_disp_sub0_BASE + 0x1054) /* Trap����ȡ���Ĵ��� */
#define xxx_cfg_disp_sub0_DISP_TRAP_ORDER_REG              (xxx_cfg_disp_sub0_BASE + 0x105C) /* Trapƥ��˳��Ĵ��� */
#define xxx_cfg_disp_sub0_DISP_TRAP_CMD_COMP0_REG          (xxx_cfg_disp_sub0_BASE + 0x1100) /* Slave CMDͨ��TRAP��Ϣ���üĴ���0 */
#define xxx_cfg_disp_sub0_DISP_TRAP_CMD_COMP1_REG          (xxx_cfg_disp_sub0_BASE + 0x1104) /* Slave CMDͨ��TRAP��Ϣ���üĴ���1 */
#define xxx_cfg_disp_sub0_DISP_TRAP_CMD_MASK0_REG          (xxx_cfg_disp_sub0_BASE + 0x1108) /* Slave CMDͨ��TRAP��Ϣ���μĴ���0 */
#define xxx_cfg_disp_sub0_DISP_TRAP_CMD_MASK1_REG          (xxx_cfg_disp_sub0_BASE + 0x110C) /* Slave CMDͨ��TRAP��Ϣ���μĴ���1 */
#define xxx_cfg_disp_sub0_DISP_TRAP_CMD_COMP2_REG          (xxx_cfg_disp_sub0_BASE + 0x1110) /* Slave CMDͨ��TRAP��Ϣ���üĴ���2 */
#define xxx_cfg_disp_sub0_DISP_TRAP_CMD_MASK2_REG          (xxx_cfg_disp_sub0_BASE + 0x1114) /* Slave CMDͨ��TRAP��Ϣ���μĴ���2 */
#define xxx_cfg_disp_sub0_DISP_TRAP_RSP_COMP0_REG          (xxx_cfg_disp_sub0_BASE + 0x1210) /* Slave RSPͨ��TRAP��Ϣ���üĴ���0 */
#define xxx_cfg_disp_sub0_DISP_TRAP_RSP_MASK0_REG          (xxx_cfg_disp_sub0_BASE + 0x1214) /* Slave RSPͨ��TRAP��Ϣ���μĴ���0 */
#define xxx_cfg_disp_sub0_DISP_TRAP_CMD_INFO0_REG          (xxx_cfg_disp_sub0_BASE + 0x1600) /* Slave CMDͨ��TRAP��Ϣ��¼�Ĵ���0 */
#define xxx_cfg_disp_sub0_DISP_TRAP_CMD_INFO1_REG          (xxx_cfg_disp_sub0_BASE + 0x1604) /* Slave CMDͨ��TRAP��Ϣ��¼�Ĵ���1 */
#define xxx_cfg_disp_sub0_DISP_TRAP_CMD_INFO2_REG          (xxx_cfg_disp_sub0_BASE + 0x1608) /* Slave CMDͨ��TRAP��Ϣ��¼�Ĵ���2 */
#define xxx_cfg_disp_sub0_DISP_TRAP_RSP_INFO0_REG          (xxx_cfg_disp_sub0_BASE + 0x1708) /* Slave RSPͨ��TRAP��Ϣ��¼�Ĵ���0 */
#define xxx_cfg_disp_sub0_DISP_PORT0_CUR_ADDR_L_REG        (xxx_cfg_disp_sub0_BASE + 0x2000) /* DISP����FIFO��ǰ������Ϣ */
#define xxx_cfg_disp_sub0_DISP_PORT0_CUR_ADDR_H_REG        (xxx_cfg_disp_sub0_BASE + 0x2004) /* DISP����FIFO��ǰ������Ϣ */
#define xxx_cfg_disp_sub0_DISP_PORT0_CUR_ID_REG            (xxx_cfg_disp_sub0_BASE + 0x2008) /* DISP����FIFO��ǰ������Ϣ */
#define xxx_cfg_disp_sub0_DISP_PORT1_CUR_ADDR_L_REG        (xxx_cfg_disp_sub0_BASE + 0x2010) /* DISP����FIFO��ǰ������Ϣ */
#define xxx_cfg_disp_sub0_DISP_PORT1_CUR_ADDR_H_REG        (xxx_cfg_disp_sub0_BASE + 0x2014) /* DISP����FIFO��ǰ������Ϣ */
#define xxx_cfg_disp_sub0_DISP_PORT1_CUR_ID_REG            (xxx_cfg_disp_sub0_BASE + 0x2018) /* DISP����FIFO��ǰ������Ϣ */
#define xxx_cfg_disp_sub0_DISP_PORT2_CUR_ADDR_L_REG        (xxx_cfg_disp_sub0_BASE + 0x2020) /* DISP����FIFO��ǰ������Ϣ */
#define xxx_cfg_disp_sub0_DISP_PORT2_CUR_ADDR_H_REG        (xxx_cfg_disp_sub0_BASE + 0x2024) /* DISP����FIFO��ǰ������Ϣ */
#define xxx_cfg_disp_sub0_DISP_PORT2_CUR_ID_REG            (xxx_cfg_disp_sub0_BASE + 0x2028) /* DISP����FIFO��ǰ������Ϣ */
#define xxx_cfg_disp_sub0_DISP_PORT3_CUR_ADDR_L_REG        (xxx_cfg_disp_sub0_BASE + 0x2030) /* DISP����FIFO��ǰ������Ϣ */
#define xxx_cfg_disp_sub0_DISP_PORT3_CUR_ADDR_H_REG        (xxx_cfg_disp_sub0_BASE + 0x2034) /* DISP����FIFO��ǰ������Ϣ */
#define xxx_cfg_disp_sub0_DISP_PORT3_CUR_ID_REG            (xxx_cfg_disp_sub0_BASE + 0x2038) /* DISP����FIFO��ǰ������Ϣ */
#define xxx_cfg_disp_sub0_DISP_PORT4_CUR_ADDR_L_REG        (xxx_cfg_disp_sub0_BASE + 0x2040) /* DISP����FIFO��ǰ������Ϣ */
#define xxx_cfg_disp_sub0_DISP_PORT4_CUR_ADDR_H_REG        (xxx_cfg_disp_sub0_BASE + 0x2044) /* DISP����FIFO��ǰ������Ϣ */
#define xxx_cfg_disp_sub0_DISP_PORT4_CUR_ID_REG            (xxx_cfg_disp_sub0_BASE + 0x2048) /* DISP����FIFO��ǰ������Ϣ */
#define xxx_cfg_disp_sub0_DISP_PORT5_CUR_ADDR_L_REG        (xxx_cfg_disp_sub0_BASE + 0x2050) /* DISP����FIFO��ǰ������Ϣ */
#define xxx_cfg_disp_sub0_DISP_PORT5_CUR_ADDR_H_REG        (xxx_cfg_disp_sub0_BASE + 0x2054) /* DISP����FIFO��ǰ������Ϣ */
#define xxx_cfg_disp_sub0_DISP_PORT5_CUR_ID_REG            (xxx_cfg_disp_sub0_BASE + 0x2058) /* DISP����FIFO��ǰ������Ϣ */
#define xxx_cfg_disp_sub0_DISP_PORT6_CUR_ADDR_L_REG        (xxx_cfg_disp_sub0_BASE + 0x2060) /* DISP����FIFO��ǰ������Ϣ */
#define xxx_cfg_disp_sub0_DISP_PORT6_CUR_ADDR_H_REG        (xxx_cfg_disp_sub0_BASE + 0x2064) /* DISP����FIFO��ǰ������Ϣ */
#define xxx_cfg_disp_sub0_DISP_PORT6_CUR_ID_REG            (xxx_cfg_disp_sub0_BASE + 0x2068) /* DISP����FIFO��ǰ������Ϣ */
#define xxx_cfg_disp_sub0_DISP_PORT7_CUR_ADDR_L_REG        (xxx_cfg_disp_sub0_BASE + 0x2070) /* DISP����FIFO��ǰ������Ϣ */
#define xxx_cfg_disp_sub0_DISP_PORT7_CUR_ADDR_H_REG        (xxx_cfg_disp_sub0_BASE + 0x2074) /* DISP����FIFO��ǰ������Ϣ */
#define xxx_cfg_disp_sub0_DISP_PORT7_CUR_ID_REG            (xxx_cfg_disp_sub0_BASE + 0x2078) /* DISP����FIFO��ǰ������Ϣ */

#endif // __CFG_DISP_SUB0_REG_OFFSET_H__