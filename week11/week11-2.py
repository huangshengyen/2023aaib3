# week11-2.py
nums = [1,1,1,2,3]#��J���

from collections import Counter #�i����Ƶ��c Hash Map �Ψӭp��X�{�X��
counter = Counter() #����p�g�A�k��j�g
for num in nums:
  counter[num] += 1
print(counter) #�L�X�έp���G
