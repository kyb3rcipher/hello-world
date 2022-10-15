import time
import tqdm

count = 0

for i in tqdm.tqdm(range(100)):
  count += i
  time.sleep(0.4)

print(f"{count = }")
