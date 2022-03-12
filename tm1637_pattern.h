#ifndef _TM1637_PATTERN_H
#define _TM1637_PATTERN_H


/**
 * @file tm1637_pattern.h
 * @author Mobin Byn (mobin.byn@gmail.com)
 * @brief 
 * @version 1.0
 * @date 2022-01-17
 * 
 * @ref http://www.uize.com/examples/seven-segment-display.html
 * @copyright Copyright (c) 2022
 */

#include "tm1637.h"

#define DIGIT_0_INDEX           0
#define DIGIT_1_INDEX           1
#define DIGIT_2_INDEX           2
#define DIGIT_3_INDEX           3
#define DIGIT_4_INDEX           4
#define DIGIT_5_INDEX           5
#define DIGIT_6_INDEX           6
#define DIGIT_7_INDEX           7
#define DIGIT_8_INDEX           8
#define DIGIT_9_INDEX           9
#define CAPITAL_A_INDEX         10
#define CAPITAL_C_INDEX         11
#define CAPITAL_E_INDEX         12
#define CAPITAL_F_INDEX         13
#define CAPITAL_G_INDEX         14
#define CAPITAL_H_INDEX         15
#define CAPITAL_J_INDEX         16
#define CAPITAL_L_INDEX         17
#define CAPITAL_N_INDEX         18
#define CAPITAL_P_INDEX         19
#define CAPITAL_U_INDEX         20
#define CAPITAL_Y_INDEX         21
#define LOWERCASE_a_INDEX       22
#define LOWERCASE_b_INDEX       23
#define LOWERCASE_c_INDEX       24
#define LOWERCASE_d_INDEX       25
#define LOWERCASE_e_INDEX       26
#define LOWERCASE_h_INDEX       27
#define LOWERCASE_i_INDEX       28
#define LOWERCASE_j_INDEX       29
#define LOWERCASE_l_INDEX       30
#define LOWERCASE_n_INDEX       31
#define LOWERCASE_o_INDEX       32
#define LOWERCASE_q_INDEX       33
#define LOWERCASE_r_INDEX       34
#define LOWERCASE_t_INDEX       35
#define LOWERCASE_u_INDEX       36
#define PUNCTUATION_SPACE_INDEX 37
#define PUNCTUATION_MINZ_INDEX  38
#define PUNCTUATION___INDEX     39
#define PUNCTUATION_EQ_INDEX    40
#define PUNCTUATION_BK_SL_INDEX 41
#define PUNCTUATION_SL_INDEX    42
#define PUNCTUATION_CBR_INDEX   43
#define JUST_A_INDEX						44
#define JUST_B_INDEX						45
#define JUST_C_INDEX						46
#define JUST_D_INDEX						47
#define JUST_E_INDEX						48
#define JUST_F_INDEX						49
#define JUST_G_INDEX						50
#define JUST_P_INDEX						51



volatile const uint8_t SEVEN_SEGMENT_LOOKUP_TABLE[52] =
{
  0x3f, // digit: 0       index: 0
  0x30, // digit: 1       index: 1
  0x5b, // digit: 2       index: 2
  0x4f, // digit: 3       index: 3
  0x66, // digit: 4       index: 4
  0x6d, // digit: 5       index: 5
  0x7d, // digit: 6       index: 6
  0x07, // digit: 7       index: 7
  0x7f, // digit: 8       index: 8
  0x6f, // digit: 9       index: 9
  0x77, // capital: A     index: 10
  0x39, // capital: C     index: 11
  0x79, // capital: E     index: 12
  0x71, // capital: F     index: 13
  0x3d, // capital: G     index: 14
  0x76, // capital: H     index: 15
  0x1e, // capital: J     index: 16
  0x38, // capital: L     index: 17
  0x37, // capital: N     index: 18
  0x73, // capital: P     index: 19
  0x3e, // capital: U     index: 20
  0x6e, // capital: Y     index: 21
  0x5f, // lowercase: a   index: 22
  0x7c, // lowercase: b   index: 23
  0x58, // lowercase: c   index: 24
  0x5e, // lowercase: d   index: 25
  0x7b, // lowercase: e   index: 26
  0x74, // lowercase: h   index: 27
  0x10, // lowercase: i   index: 28
  0x0e, // lowercase: j   index: 29
  0x06, // lowercase: l   index: 30
  0x54, // lowercase: n   index: 31
  0x5c, // lowercase: o   index: 32
  0x67, // lowercase: q   index: 33
  0x50, // lowercase: r   index: 34
  0x78, // lowercase: t   index: 35
  0x1c, // lowercase: u   index: 36
  0x00, // punctuation:   index: 37
  0x40, // punctuation: - index: 38
  0x08, // punctuation: _ index: 39
  0x48, // punctuation: = index: 40
  0x64, // punctuation: \ index: 41
  0x52, // punctuation: / index: 42
  0x0f, // punctuation: ] index: 43
	0x01,	// just seg a:		index: 44
	0x02,	// just seg b:    index: 45
	0x04, // just seg c: 		index: 46
	0x08, // just seg d:		index: 47
	0x10, // just seg e:    index: 48
	0x20, // just seg f:		index: 49
	0x40, // just seg g:		index: 50
	0x80, // just seg p: 		index: 51
};


/**
 * @brief According to the desired character, the required value will be returned from SEVEN_SEGMENT_LOOKUP_TABLE
 * 
 * @param char Requested character
 * @return uint8_t The value corresponds to the character to be displayed in the 7-segment
 */
uint8_t tm1637_getCharFromLookupTable(char c)
{
  uint8_t temp;
  switch (c)
  {
  case '0':
    temp = DIGIT_0_INDEX;
    break;
  case '1':
    temp = DIGIT_1_INDEX;
    break;
  case '2':
    temp = DIGIT_2_INDEX;
    break;
  case '3':
    temp = DIGIT_3_INDEX;
    break;
  case '4':
    temp = DIGIT_4_INDEX;
    break;
  case '5':
    temp = DIGIT_5_INDEX;
    break;
  case '6':
    temp = DIGIT_6_INDEX;
    break;
  case '7':
    temp = DIGIT_7_INDEX;
    break;
  case '8':
    temp = DIGIT_8_INDEX;
    break;
  case '9':
    temp = DIGIT_9_INDEX;
    break;
  case 'A':
    temp = CAPITAL_A_INDEX;
    break;
  case 'C':
    temp = CAPITAL_C_INDEX;
    break;
  case 'E':
    temp = CAPITAL_E_INDEX;
    break;
  case 'F':
    temp = CAPITAL_F_INDEX;
    break;
  case 'G':
    temp = CAPITAL_G_INDEX;
    break;
  case 'H':
    temp = CAPITAL_H_INDEX;
    break;
  case 'J':
    temp = CAPITAL_J_INDEX;
    break;
  case 'L':
    temp = CAPITAL_L_INDEX;
    break;
  case 'N':
    temp = CAPITAL_N_INDEX;
    break;
  case 'P':
    temp = CAPITAL_P_INDEX;
    break;
  case 'U':
    temp = CAPITAL_U_INDEX;
    break;
  case 'Y':
    temp = CAPITAL_Y_INDEX;
    break;
  case 'a':
    temp = LOWERCASE_a_INDEX;
    break;
  case 'b':
    temp = LOWERCASE_b_INDEX;
    break;
  case 'c':
    temp = LOWERCASE_c_INDEX;
    break;
  case 'd':
    temp = LOWERCASE_d_INDEX;
    break;
  case 'e':
    temp = LOWERCASE_e_INDEX;
    break;
  case 'h':
    temp = LOWERCASE_h_INDEX;
    break;
  case 'i':
    temp = LOWERCASE_i_INDEX;
    break;
  case 'j':
    temp = LOWERCASE_j_INDEX;
    break;
  case 'l':
    temp = LOWERCASE_l_INDEX;
    break;
  case 'n':
    temp = LOWERCASE_n_INDEX;
    break;
  case 'o':
    temp = LOWERCASE_o_INDEX;
    break;
  case 'q':
    temp = LOWERCASE_q_INDEX;
    break;
  case 'r':
    temp = LOWERCASE_r_INDEX;
    break;
  case 't':
    temp = LOWERCASE_t_INDEX;
    break;
  case 'u':
    temp = LOWERCASE_u_INDEX;
    break;
  case '-':
    temp = PUNCTUATION_MINZ_INDEX;
    break;
  case '_':
    temp = PUNCTUATION___INDEX;
    break;
  case '=':
    temp = PUNCTUATION_EQ_INDEX;
    break;
  case '\\':
    temp = PUNCTUATION_BK_SL_INDEX;
    break;
  case '/':
    temp = PUNCTUATION_SL_INDEX;
    break;
  case ']':
    temp = PUNCTUATION_CBR_INDEX;
    break;

  default:
    temp = 0xff; // It means error.
    break;
  }
  return temp;
}




#endif /* _TM1637_PATTERN_H */
