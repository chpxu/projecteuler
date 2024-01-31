from typing import Literal, Union
import math
import numpy as np
import numpy.typing as npt

target: float = 600851475143


def is_prime(number: float) -> Union[Literal[0, 1], float]:
    """
    Function to check whether a given number is prime
    ---
    """
    if number % 2 == 0 or number % 3 == -0 or number % 5 == 0:
        return 1

    upper_bound = math.floor(math.sqrt(number))
    # This if statement checks if it is even, if not, make it odd, since every
    # prime number except 2 is odd
    # we need only check every odd number later
    if upper_bound % 2 == 0:
        upper_bound -= 1
    for i in range(upper_bound, 2, -2):
        if upper_bound % i == 0:
            return i
    return 0


test = is_prime(target)
while test != 1 and test != 0:
    test = is_prime(test)

print(test)
