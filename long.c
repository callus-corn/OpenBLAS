#include <arm_sve.h>

int func_long()
{
  long left;
  long right;

  svbool_t pg = svwhilelt_b64_s64(left, right);

  return (0);
}
