#include <arm_sve.h>

int main()
{
  long left;
  long right;

  svbool_t pg = svwhilelt_b64(left, right);

  return (0);
}
