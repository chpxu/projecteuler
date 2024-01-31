#!/bin/bash
num=$1
path="./q$1"
if [ ! -d "$path" ]; then
  mkdir -p "$path"
fi

cd "$path" || exit

cat << EOF > "q$num.py"
import math
import numpy as np
import numpy.typing as npt
EOF


cat << EOF > "q$num.c"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void) {
  return 0;
}
EOF

cat << EOF > "question$num.md"
# [Question $num](https://projecteuler.net/problem=$num)
## Solution
EOF
