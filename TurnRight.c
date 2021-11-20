#include <cstdlib>
#include <cstring>
#include <iostream>
using namespace std;

bool check(int a1, int a2)
{
  int v3; // [rsp+8h] [rbp-8h]
  int i; // [rsp+Ch] [rbp-4h]

  v3 = 0;
  for ( i = 0; i <= 28; ++i )
    v3 += (4 * i + a1);
  return v3 == a2;
}

int main(int argc, const char **argv, const char **envp)
{
  unsigned int v4; // [rsp+2Ch] [rbp-A4h] BYREF
  char v5[32]; // [rsp+30h] [rbp-A0h] BYREF
  int v6[31]; // [rsp+50h] [rbp-80h] BYREF
  int i; // [rsp+CCh] [rbp-4h]

  v6[0] = 400;
  v6[1] = 888;
  v6[2] = 440;
  v6[3] = 880;
  v6[4] = 468;
  v6[5] = 536;
  v6[6] = 336;
  v6[7] = 560;
  v6[8] = 492;
  v6[9] = 608;
  v6[10] = 404;
  v6[11] = 816;
  v6[12] = 464;
  v6[13] = 760;
  v6[14] = 328;
  v6[15] = 840;
  v6[16] = 412;
  v6[17] = 832;
  v6[18] = 464;
  v6[19] = 760;
  v6[20] = 340;
  v6[21] = 896;
  v6[22] = 380;
  v6[23] = 544;
  v6[24] = 444;
  v6[25] = 952;
  v6[26] = 440;
  v6[27] = 1000;
  v6[28] = 0;
  // printf("Enter number : ");
  // scanf("%d", &v4);
  for (v4 = 0; v4 < 99999; v4++){
    if ( (unsigned int)check(*v6, v4) == 1 ) {
      break;
    }
  }
  printf("Number: %d\n", v4);
  
  if ( (unsigned int)check(*v6, v4) == 1 )
  {
    for ( i = 0; i <= 29; ++i )
    {
      if ( (i & 1) != 0 )
        v5[i] = v6[i] >> 3;
      else
        v5[i] = v6[i] >> 2;
    }
    printf("Your flag is: %s\n", v5);
  }
  else
  {
    puts("Wrong!");
  }
  return 0;
}