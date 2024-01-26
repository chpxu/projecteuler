import numpy as np
import numpy.typing as npt

numberArrayType = npt.NDArray[np.int32]
numberType = np.int32

# generates array from 1, 1000
domain = np.arange(1, 1000, 1)

multiples_of_3 = domain[domain % 3 == 0]
multiples_of_5 = domain[domain % 5 == 0]
multiples = np.unique(np.concatenate((multiples_of_3, multiples_of_5), axis=0))
sum = np.sum(multiples)

print(sum)
