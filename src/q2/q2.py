def generate_fibonacci(upper_bound: float) -> list[float]:
    first_term: float = 1
    second_term: float = 2
    sequence: list[float] = [first_term, second_term]
    while first_term < upper_bound:
        first_term, second_term = second_term, first_term + second_term
        sequence.append(first_term)
    return sequence


up: float = 4e6
seq = generate_fibonacci(up)
even_terms = [x for x in seq if x % 2 == 0]
sum_terms = 0
for x in even_terms:
    sum_terms += x
print(sum_terms)
