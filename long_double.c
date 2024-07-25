#include <arm_sve.h>

int func_long_double()
{
  long double left;
  long double right;

  svbool_t pg = svwhilelt_b64_s64(left, right);

  return (0);
}
