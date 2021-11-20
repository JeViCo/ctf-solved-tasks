/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cstring>

using namespace std;

unsigned int sub_1205()
{
  int i; // [rsp+Ch] [rbp-114h]
  int c[32]; // [rsp+10h] [rbp-110h]
  int v3[34]; // [rsp+90h] [rbp-90h]

  v3[0] = 113;
  v3[1] = 46;
  v3[2] = 127;
  v3[3] = 123;
  v3[4] = 123;
  v3[5] = 124;
  v3[6] = 125;
  v3[7] = 113;
  v3[8] = 120;
  v3[9] = 45;
  v3[10] = 126;
  v3[11] = 127;
  v3[12] = 41;
  v3[13] = 43;
  v3[14] = 44;
  v3[15] = 121;
  v3[16] = 46;
  v3[17] = 46;
  v3[18] = 113;
  v3[19] = 42;
  v3[20] = 45;
  v3[21] = 45;
  v3[22] = 127;
  v3[23] = 44;
  v3[24] = 122;
  v3[25] = 42;
  v3[26] = 44;
  v3[27] = 43;
  v3[28] = 45;
  v3[29] = 127;
  v3[30] = 46;
  v3[31] = 126;
  for ( i = 0; i < 32; ++i )
  {
    c[i] = v3[i] ^ 0x48;
    putchar(c[i]);
  }
  return *v3;
}

int main()
{
  char s1[104]; // [rsp+10h] [rbp-70h] BYREF

  printf("What did you want to find here? ");
  scanf("%s", s1);
  // if ( !strcmp(s1, "Flag_of_course!") )
  sub_1205();
  return 0LL;
}
