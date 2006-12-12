//
// Register Declarations for Microchip 16C770 Processor
//
//
// This header file was automatically generated by:
//
//	inc2h.pl V1.6
//
//	Copyright (c) 2002, Kevin L. Pauba, All Rights Reserved
//
//	SDCC is licensed under the GNU Public license (GPL) v2.  Note that
//	this license covers the code to the compiler and other executables,
//	but explicitly does not cover any code or objects generated by sdcc.
//	We have not yet decided on a license for the run time libraries, but
//	it will not put any requirements on code linked against it. See:
// 
//	http://www.gnu.org/copyleft/gpl/html
//
//	See http://sdcc.sourceforge.net/ for the latest information on sdcc.
//
// 
#ifndef P16C770_H
#define P16C770_H

//
// Register addresses.
//
#define INDF_ADDR	0x0000
#define TMR0_ADDR	0x0001
#define PCL_ADDR	0x0002
#define STATUS_ADDR	0x0003
#define FSR_ADDR	0x0004
#define PORTA_ADDR	0x0005
#define PORTB_ADDR	0x0006
#define PCLATH_ADDR	0x000A
#define INTCON_ADDR	0x000B
#define PIR1_ADDR	0x000C
#define PIR2_ADDR	0x000D
#define TMR1L_ADDR	0x000E
#define TMR1H_ADDR	0x000F
#define T1CON_ADDR	0x0010
#define TMR2_ADDR	0x0011
#define T2CON_ADDR	0x0012
#define SSPBUF_ADDR	0x0013
#define SSPCON_ADDR	0x0014
#define CCPR1L_ADDR	0x0015
#define CCPR1H_ADDR	0x0016
#define CCP1CON_ADDR	0x0017
#define ADRESH_ADDR	0x001E
#define ADCON0_ADDR	0x001F
#define OPTION_REG_ADDR	0x0081
#define TRISA_ADDR	0x0085
#define TRISB_ADDR	0x0086
#define PIE1_ADDR	0x008C
#define PIE2_ADDR	0x008D
#define PCON_ADDR	0x008E
#define SSPCON2_ADDR	0x0091
#define PR2_ADDR	0x0092
#define SSPADD_ADDR	0x0093
#define SSPSTAT_ADDR	0x0094
#define WPUB_ADDR	0x0095
#define IOCB_ADDR	0x0096
#define P1DEL_ADDR	0x0097
#define REFCON_ADDR	0x009B
#define LVDCON_ADDR	0x009C
#define ANSEL_ADDR	0x009D
#define ADRESL_ADDR	0x009E
#define ADCON1_ADDR	0x009F
#define PMDATL_ADDR	0x010C
#define PMADRL_ADDR	0x010D
#define PMDATH_ADDR	0x010E
#define PMADRH_ADDR	0x010F
#define PMCON1_ADDR	0x018C

//
// Memory organization.
//



//         LIST
// P16C770.INC  Standard Header File, Version 1.00    Microchip Technology, Inc.
//         NOLIST

// This header file defines configurations, registers, and other useful bits of
// information for the PIC16C770 microcontroller.  These names are taken to match 
// the data sheets as closely as possible.  

// Note that the processor must be selected before this file is 
// included.  The processor may be selected the following ways:

//       1. Command line switch:
//               C:\ MPASM MYFILE.ASM /PIC16C770
//       2. LIST directive in the source file
//               LIST   P=PIC16C770
//       3. Processor Type entry in the MPASM full-screen interface

//==========================================================================
//
//       Revision History
//
//==========================================================================

//Rev:   Date:    Reason:

//1.00   14Sep1999 Initial Release

//==========================================================================
//
//       Verify Processor
//
//==========================================================================

//        IFNDEF __16C770
//            MESSG "Processor-header file mismatch.  Verify selected processor."
//         ENDIF

//==========================================================================
//
//       Register Definitions
//
//==========================================================================

#define W                    0x0000
#define F                    0x0001

//----- Register Files------------------------------------------------------

extern __data __at (INDF_ADDR) volatile char      INDF;
extern __sfr  __at (TMR0_ADDR)                    TMR0;
extern __data __at (PCL_ADDR) volatile char       PCL;
extern __sfr  __at (STATUS_ADDR)                  STATUS;
extern __sfr  __at (FSR_ADDR)                     FSR;
extern __sfr  __at (PORTA_ADDR)                   PORTA;
extern __sfr  __at (PORTB_ADDR)                   PORTB;
extern __sfr  __at (PCLATH_ADDR)                  PCLATH;
extern __sfr  __at (INTCON_ADDR)                  INTCON;
extern __sfr  __at (PIR1_ADDR)                    PIR1;
extern __sfr  __at (PIR2_ADDR)                    PIR2;
extern __sfr  __at (TMR1L_ADDR)                   TMR1L;
extern __sfr  __at (TMR1H_ADDR)                   TMR1H;
extern __sfr  __at (T1CON_ADDR)                   T1CON;
extern __sfr  __at (TMR2_ADDR)                    TMR2;
extern __sfr  __at (T2CON_ADDR)                   T2CON;
extern __sfr  __at (SSPBUF_ADDR)                  SSPBUF;
extern __sfr  __at (SSPCON_ADDR)                  SSPCON;
extern __sfr  __at (CCPR1L_ADDR)                  CCPR1L;
extern __sfr  __at (CCPR1H_ADDR)                  CCPR1H;
extern __sfr  __at (CCP1CON_ADDR)                 CCP1CON;
extern __sfr  __at (ADRESH_ADDR)                  ADRESH;
extern __sfr  __at (ADCON0_ADDR)                  ADCON0;

extern __sfr  __at (OPTION_REG_ADDR)              OPTION_REG;
extern __sfr  __at (TRISA_ADDR)                   TRISA;
extern __sfr  __at (TRISB_ADDR)                   TRISB;
extern __sfr  __at (PIE1_ADDR)                    PIE1;
extern __sfr  __at (PIE2_ADDR)                    PIE2;
extern __sfr  __at (PCON_ADDR)                    PCON;
extern __sfr  __at (SSPCON2_ADDR)                 SSPCON2;
extern __sfr  __at (PR2_ADDR)                     PR2;
extern __sfr  __at (SSPADD_ADDR)                  SSPADD;
extern __sfr  __at (SSPSTAT_ADDR)                 SSPSTAT;
extern __sfr  __at (WPUB_ADDR)                    WPUB;
extern __sfr  __at (IOCB_ADDR)                    IOCB;
extern __sfr  __at (P1DEL_ADDR)                   P1DEL;
extern __sfr  __at (REFCON_ADDR)                  REFCON;
extern __sfr  __at (LVDCON_ADDR)                  LVDCON;
extern __sfr  __at (ANSEL_ADDR)                   ANSEL;
extern __sfr  __at (ADRESL_ADDR)                  ADRESL;
extern __sfr  __at (ADCON1_ADDR)                  ADCON1;

extern __sfr  __at (PMDATL_ADDR)                  PMDATL;
extern __sfr  __at (PMADRL_ADDR)                  PMADRL;
extern __sfr  __at (PMDATH_ADDR)                  PMDATH;
extern __sfr  __at (PMADRH_ADDR)                  PMADRH;

extern __sfr  __at (PMCON1_ADDR)                  PMCON1;

//----- STATUS Bits --------------------------------------------------------


//----- INTCON Bits --------------------------------------------------------


//----- PIR1 Bits ----------------------------------------------------------


//----- PIR2 Bits ----------------------------------------------------------


//----- T1CON Bits ---------------------------------------------------------


//----- T2CON Bits ---------------------------------------------------------


//----- SSPCON Bits --------------------------------------------------------


//----- CCP1CON Bits -------------------------------------------------------


//----- ADCON0 Bits --------------------------------------------------------


//----- OPTION Bits ----------------------------------------------------



//----- PIE1 Bits ----------------------------------------------------------


//----- PIE2 Bits ----------------------------------------------------------


//----- PCON Bits ----------------------------------------------------------


//----- SSPCON2 Bits --------------------------------------------------------


//----- SSPSTAT Bits -------------------------------------------------------


//----- REFCON Bits --------------------------------------------------------


//----- LVDCON Bits --------------------------------------------------------


//----- ADCON1 Bits --------------------------------------------------------


//----- PMCON1 Bits --------------------------------------------------------


//==========================================================================
//
//       RAM Definition
//
//==========================================================================

//         __MAXRAM H'1FF'
// 	__BADRAM H'07'-H'09', H'18'-H'1D'
// 	__BADRAM H'87'-H'89'
//         __BADRAM H'8F'-H'90', H'98'-H'9A'
//         __BADRAM H'105', H'107'-H'109', H'110'-H'11F'
//         __BADRAM H'185', H'187'-H'189', H'18D'-H'1EF'

//==========================================================================
//
//       Configuration Bits
//
//==========================================================================

#define _BODEN_ON            0x3FFF
#define _BODEN_OFF           0x3FBF
#define _CP_ALL              0x0CFF
#define _CP_OFF              0x3FFF
#define _VBOR_25             0x3FFF
#define _VBOR_27             0x3BFF
#define _VBOR_42             0x37FF
#define _VBOR_45             0x33FF
#define _PWRTE_OFF           0x3FFF
#define _PWRTE_ON            0x3FEF
#define _MCLRE_OFF           0x3FDF
#define _MCLRE_ON            0x3FFF
#define _WDT_ON              0x3FFF
#define _WDT_OFF             0x3FF7
#define _ER_OSC_CLKOUT       0x3FFF
#define _ER_OSC_NOCLKOUT     0x3FFE
#define _INTRC_OSC_CLKOUT    0x3FFD
#define _INTRC_OSC_NOCLKOUT  0x3FFC
#define _EXTCLK_OSC          0x3FFB
#define _HS_OSC              0x3FFA
#define _XT_OSC              0x3FF9
#define _LP_OSC              0x3FF8

//         LIST

// ----- ADCON0 bits --------------------
typedef union {
  struct {
    unsigned char ADON:1;
    unsigned char CHS3:1;
    unsigned char GO:1;
    unsigned char CHS0:1;
    unsigned char CHS1:1;
    unsigned char CHS2:1;
    unsigned char ADCS0:1;
    unsigned char ADCS1:1;
  };
  struct {
    unsigned char :1;
    unsigned char :1;
    unsigned char NOT_DONE:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
  };
  struct {
    unsigned char :1;
    unsigned char :1;
    unsigned char GO_DONE:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
  };
} __ADCON0_bits_t;
extern volatile __ADCON0_bits_t __at(ADCON0_ADDR) ADCON0_bits;

#define ADON                 ADCON0_bits.ADON
#define CHS3                 ADCON0_bits.CHS3
#define GO                   ADCON0_bits.GO
#define NOT_DONE             ADCON0_bits.NOT_DONE
#define GO_DONE              ADCON0_bits.GO_DONE
#define CHS0                 ADCON0_bits.CHS0
#define CHS1                 ADCON0_bits.CHS1
#define CHS2                 ADCON0_bits.CHS2
#define ADCS0                ADCON0_bits.ADCS0
#define ADCS1                ADCON0_bits.ADCS1

// ----- ADCON1 bits --------------------
typedef union {
  struct {
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char VCFG0:1;
    unsigned char VCFG1:1;
    unsigned char VCFG2:1;
    unsigned char ADFM:1;
  };
} __ADCON1_bits_t;
extern volatile __ADCON1_bits_t __at(ADCON1_ADDR) ADCON1_bits;

#define VCFG0                ADCON1_bits.VCFG0
#define VCFG1                ADCON1_bits.VCFG1
#define VCFG2                ADCON1_bits.VCFG2
#define ADFM                 ADCON1_bits.ADFM

// ----- CCP1CON bits --------------------
typedef union {
  struct {
    unsigned char CCP1M0:1;
    unsigned char CCP1M1:1;
    unsigned char CCP1M2:1;
    unsigned char CCP1M3:1;
    unsigned char DC1B0:1;
    unsigned char DC1B1:1;
    unsigned char PWM1M0:1;
    unsigned char PWM1M1:1;
  };
} __CCP1CON_bits_t;
extern volatile __CCP1CON_bits_t __at(CCP1CON_ADDR) CCP1CON_bits;

#define CCP1M0               CCP1CON_bits.CCP1M0
#define CCP1M1               CCP1CON_bits.CCP1M1
#define CCP1M2               CCP1CON_bits.CCP1M2
#define CCP1M3               CCP1CON_bits.CCP1M3
#define DC1B0                CCP1CON_bits.DC1B0
#define DC1B1                CCP1CON_bits.DC1B1
#define PWM1M0               CCP1CON_bits.PWM1M0
#define PWM1M1               CCP1CON_bits.PWM1M1

// ----- INTCON bits --------------------
typedef union {
  struct {
    unsigned char RBIF:1;
    unsigned char INTF:1;
    unsigned char T0IF:1;
    unsigned char RBIE:1;
    unsigned char INTE:1;
    unsigned char T0IE:1;
    unsigned char PEIE:1;
    unsigned char GIE:1;
  };
} __INTCON_bits_t;
extern volatile __INTCON_bits_t __at(INTCON_ADDR) INTCON_bits;

#define RBIF                 INTCON_bits.RBIF
#define INTF                 INTCON_bits.INTF
#define T0IF                 INTCON_bits.T0IF
#define RBIE                 INTCON_bits.RBIE
#define INTE                 INTCON_bits.INTE
#define T0IE                 INTCON_bits.T0IE
#define PEIE                 INTCON_bits.PEIE
#define GIE                  INTCON_bits.GIE

// ----- LVDCON bits --------------------
typedef union {
  struct {
    unsigned char LV0:1;
    unsigned char LV1:1;
    unsigned char LV2:1;
    unsigned char LV3:1;
    unsigned char LVDEN:1;
    unsigned char BGST:1;
    unsigned char :1;
    unsigned char :1;
  };
} __LVDCON_bits_t;
extern volatile __LVDCON_bits_t __at(LVDCON_ADDR) LVDCON_bits;

#define LV0                  LVDCON_bits.LV0
#define LV1                  LVDCON_bits.LV1
#define LV2                  LVDCON_bits.LV2
#define LV3                  LVDCON_bits.LV3
#define LVDEN                LVDCON_bits.LVDEN
#define BGST                 LVDCON_bits.BGST

// ----- OPTION_REG bits --------------------
typedef union {
  struct {
    unsigned char PS0:1;
    unsigned char PS1:1;
    unsigned char PS2:1;
    unsigned char PSA:1;
    unsigned char T0SE:1;
    unsigned char T0CS:1;
    unsigned char INTEDG:1;
    unsigned char NOT_RBPU:1;
  };
} __OPTION_REG_bits_t;
extern volatile __OPTION_REG_bits_t __at(OPTION_REG_ADDR) OPTION_REG_bits;

#define PS0                  OPTION_REG_bits.PS0
#define PS1                  OPTION_REG_bits.PS1
#define PS2                  OPTION_REG_bits.PS2
#define PSA                  OPTION_REG_bits.PSA
#define T0SE                 OPTION_REG_bits.T0SE
#define T0CS                 OPTION_REG_bits.T0CS
#define INTEDG               OPTION_REG_bits.INTEDG
#define NOT_RBPU             OPTION_REG_bits.NOT_RBPU

// ----- PCON bits --------------------
typedef union {
  struct {
    unsigned char NOT_BO:1;
    unsigned char NOT_POR:1;
    unsigned char :1;
    unsigned char OSCF:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
  };
  struct {
    unsigned char NOT_BOR:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
  };
} __PCON_bits_t;
extern volatile __PCON_bits_t __at(PCON_ADDR) PCON_bits;

#define NOT_BO               PCON_bits.NOT_BO
#define NOT_BOR              PCON_bits.NOT_BOR
#define NOT_POR              PCON_bits.NOT_POR
#define OSCF                 PCON_bits.OSCF

// ----- PIE1 bits --------------------
typedef union {
  struct {
    unsigned char TMR1IE:1;
    unsigned char TMR2IE:1;
    unsigned char CCP1IE:1;
    unsigned char SSPIE:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char ADIE:1;
    unsigned char :1;
  };
} __PIE1_bits_t;
extern volatile __PIE1_bits_t __at(PIE1_ADDR) PIE1_bits;

#define TMR1IE               PIE1_bits.TMR1IE
#define TMR2IE               PIE1_bits.TMR2IE
#define CCP1IE               PIE1_bits.CCP1IE
#define SSPIE                PIE1_bits.SSPIE
#define ADIE                 PIE1_bits.ADIE

// ----- PIE2 bits --------------------
typedef union {
  struct {
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char BCLIE:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char LVDIE:1;
  };
} __PIE2_bits_t;
extern volatile __PIE2_bits_t __at(PIE2_ADDR) PIE2_bits;

#define BCLIE                PIE2_bits.BCLIE
#define LVDIE                PIE2_bits.LVDIE

// ----- PIR1 bits --------------------
typedef union {
  struct {
    unsigned char TMR1IF:1;
    unsigned char TMR2IF:1;
    unsigned char CCP1IF:1;
    unsigned char SSPIF:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char ADIF:1;
    unsigned char :1;
  };
} __PIR1_bits_t;
extern volatile __PIR1_bits_t __at(PIR1_ADDR) PIR1_bits;

#define TMR1IF               PIR1_bits.TMR1IF
#define TMR2IF               PIR1_bits.TMR2IF
#define CCP1IF               PIR1_bits.CCP1IF
#define SSPIF                PIR1_bits.SSPIF
#define ADIF                 PIR1_bits.ADIF

// ----- PIR2 bits --------------------
typedef union {
  struct {
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char BCLIF:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char LVDIF:1;
  };
} __PIR2_bits_t;
extern volatile __PIR2_bits_t __at(PIR2_ADDR) PIR2_bits;

#define BCLIF                PIR2_bits.BCLIF
#define LVDIF                PIR2_bits.LVDIF

// ----- PMCON1 bits --------------------
typedef union {
  struct {
    unsigned char RD:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
  };
} __PMCON1_bits_t;
extern volatile __PMCON1_bits_t __at(PMCON1_ADDR) PMCON1_bits;

#define RD                   PMCON1_bits.RD

// ----- REFCON bits --------------------
typedef union {
  struct {
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char VRLOEN:1;
    unsigned char VRHOEN:1;
    unsigned char VRLEN:1;
    unsigned char VRHEN:1;
  };
} __REFCON_bits_t;
extern volatile __REFCON_bits_t __at(REFCON_ADDR) REFCON_bits;

#define VRLOEN               REFCON_bits.VRLOEN
#define VRHOEN               REFCON_bits.VRHOEN
#define VRLEN                REFCON_bits.VRLEN
#define VRHEN                REFCON_bits.VRHEN

// ----- SSPCON bits --------------------
typedef union {
  struct {
    unsigned char SSPM0:1;
    unsigned char SSPM1:1;
    unsigned char SSPM2:1;
    unsigned char SSPM3:1;
    unsigned char CKP:1;
    unsigned char SSPEN:1;
    unsigned char SSPOV:1;
    unsigned char WCOL:1;
  };
} __SSPCON_bits_t;
extern volatile __SSPCON_bits_t __at(SSPCON_ADDR) SSPCON_bits;

#define SSPM0                SSPCON_bits.SSPM0
#define SSPM1                SSPCON_bits.SSPM1
#define SSPM2                SSPCON_bits.SSPM2
#define SSPM3                SSPCON_bits.SSPM3
#define CKP                  SSPCON_bits.CKP
#define SSPEN                SSPCON_bits.SSPEN
#define SSPOV                SSPCON_bits.SSPOV
#define WCOL                 SSPCON_bits.WCOL

// ----- SSPCON2 bits --------------------
typedef union {
  struct {
    unsigned char SEN:1;
    unsigned char RSEN:1;
    unsigned char PEN:1;
    unsigned char RCEN:1;
    unsigned char ACKEN:1;
    unsigned char ACKDT:1;
    unsigned char ACKSTAT:1;
    unsigned char GCEN:1;
  };
} __SSPCON2_bits_t;
extern volatile __SSPCON2_bits_t __at(SSPCON2_ADDR) SSPCON2_bits;

#define SEN                  SSPCON2_bits.SEN
#define RSEN                 SSPCON2_bits.RSEN
#define PEN                  SSPCON2_bits.PEN
#define RCEN                 SSPCON2_bits.RCEN
#define ACKEN                SSPCON2_bits.ACKEN
#define ACKDT                SSPCON2_bits.ACKDT
#define ACKSTAT              SSPCON2_bits.ACKSTAT
#define GCEN                 SSPCON2_bits.GCEN

// ----- SSPSTAT bits --------------------
typedef union {
  struct {
    unsigned char BF:1;
    unsigned char UA:1;
    unsigned char R:1;
    unsigned char S:1;
    unsigned char P:1;
    unsigned char D:1;
    unsigned char CKE:1;
    unsigned char SMP:1;
  };
  struct {
    unsigned char :1;
    unsigned char :1;
    unsigned char I2C_READ:1;
    unsigned char I2C_START:1;
    unsigned char I2C_STOP:1;
    unsigned char I2C_DATA:1;
    unsigned char :1;
    unsigned char :1;
  };
  struct {
    unsigned char :1;
    unsigned char :1;
    unsigned char NOT_W:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char NOT_A:1;
    unsigned char :1;
    unsigned char :1;
  };
  struct {
    unsigned char :1;
    unsigned char :1;
    unsigned char NOT_WRITE:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char NOT_ADDRESS:1;
    unsigned char :1;
    unsigned char :1;
  };
  struct {
    unsigned char :1;
    unsigned char :1;
    unsigned char R_W:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char D_A:1;
    unsigned char :1;
    unsigned char :1;
  };
  struct {
    unsigned char :1;
    unsigned char :1;
    unsigned char READ_WRITE:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char DATA_ADDRESS:1;
    unsigned char :1;
    unsigned char :1;
  };
} __SSPSTAT_bits_t;
extern volatile __SSPSTAT_bits_t __at(SSPSTAT_ADDR) SSPSTAT_bits;

#define BF                   SSPSTAT_bits.BF
#define UA                   SSPSTAT_bits.UA
#define R                    SSPSTAT_bits.R
#define I2C_READ             SSPSTAT_bits.I2C_READ
#define NOT_W                SSPSTAT_bits.NOT_W
#define NOT_WRITE            SSPSTAT_bits.NOT_WRITE
#define R_W                  SSPSTAT_bits.R_W
#define READ_WRITE           SSPSTAT_bits.READ_WRITE
#define S                    SSPSTAT_bits.S
#define I2C_START            SSPSTAT_bits.I2C_START
#define P                    SSPSTAT_bits.P
#define I2C_STOP             SSPSTAT_bits.I2C_STOP
#define D                    SSPSTAT_bits.D
#define I2C_DATA             SSPSTAT_bits.I2C_DATA
#define NOT_A                SSPSTAT_bits.NOT_A
#define NOT_ADDRESS          SSPSTAT_bits.NOT_ADDRESS
#define D_A                  SSPSTAT_bits.D_A
#define DATA_ADDRESS         SSPSTAT_bits.DATA_ADDRESS
#define CKE                  SSPSTAT_bits.CKE
#define SMP                  SSPSTAT_bits.SMP

// ----- STATUS bits --------------------
typedef union {
  struct {
    unsigned char C:1;
    unsigned char DC:1;
    unsigned char Z:1;
    unsigned char NOT_PD:1;
    unsigned char NOT_TO:1;
    unsigned char RP0:1;
    unsigned char RP1:1;
    unsigned char IRP:1;
  };
} __STATUS_bits_t;
extern volatile __STATUS_bits_t __at(STATUS_ADDR) STATUS_bits;

#define C                    STATUS_bits.C
#define DC                   STATUS_bits.DC
#define Z                    STATUS_bits.Z
#define NOT_PD               STATUS_bits.NOT_PD
#define NOT_TO               STATUS_bits.NOT_TO
#define RP0                  STATUS_bits.RP0
#define RP1                  STATUS_bits.RP1
#define IRP                  STATUS_bits.IRP

// ----- T1CON bits --------------------
typedef union {
  struct {
    unsigned char TMR1ON:1;
    unsigned char TMR1CS:1;
    unsigned char NOT_T1SYNC:1;
    unsigned char T1OSCEN:1;
    unsigned char T1CKPS0:1;
    unsigned char T1CKPS1:1;
    unsigned char :1;
    unsigned char :1;
  };
  struct {
    unsigned char :1;
    unsigned char :1;
    unsigned char T1INSYNC:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
  };
} __T1CON_bits_t;
extern volatile __T1CON_bits_t __at(T1CON_ADDR) T1CON_bits;

#define TMR1ON               T1CON_bits.TMR1ON
#define TMR1CS               T1CON_bits.TMR1CS
#define NOT_T1SYNC           T1CON_bits.NOT_T1SYNC
#define T1INSYNC             T1CON_bits.T1INSYNC
#define T1OSCEN              T1CON_bits.T1OSCEN
#define T1CKPS0              T1CON_bits.T1CKPS0
#define T1CKPS1              T1CON_bits.T1CKPS1

// ----- T2CON bits --------------------
typedef union {
  struct {
    unsigned char T2CKPS0:1;
    unsigned char T2CKPS1:1;
    unsigned char TMR2ON:1;
    unsigned char TOUTPS0:1;
    unsigned char TOUTPS1:1;
    unsigned char TOUTPS2:1;
    unsigned char TOUTPS3:1;
    unsigned char :1;
  };
} __T2CON_bits_t;
extern volatile __T2CON_bits_t __at(T2CON_ADDR) T2CON_bits;

#define T2CKPS0              T2CON_bits.T2CKPS0
#define T2CKPS1              T2CON_bits.T2CKPS1
#define TMR2ON               T2CON_bits.TMR2ON
#define TOUTPS0              T2CON_bits.TOUTPS0
#define TOUTPS1              T2CON_bits.TOUTPS1
#define TOUTPS2              T2CON_bits.TOUTPS2
#define TOUTPS3              T2CON_bits.TOUTPS3

#endif
