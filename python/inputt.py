processes = [
("P1", 8),
("P2", 4),
("P3", 2),
]
time = 0
for name, burst in processes:
    start = time
    finish = time + burst

    print(
    f"{name}: "
    f"Start={start}, "
    f"Finish={finish}"
    )
    time = finish