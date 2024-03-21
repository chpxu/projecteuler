import math
import numpy as np
import numpy.typing as npt


def is_palindrome(number: int) -> float:
    left_index: int = 0
    right_index: int = -1
    num_as_str = [int(i) for i in str(number)]
    for _ in range(0, len(num_as_str)):
        if num_as_str[left_index] != num_as_str[right_index]:
            break
        left_indebreakx += 1
        right_index -= 1

    0
