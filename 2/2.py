r = []

while True:
  try:
    count = 0
    a = int(input())
    flag = False

    for i in range(a -1):
        line = input()
        l1 = line.split(" ")
        if(int(l1[0]) == a):
            if(int(l1[1]) == 0):
                count +=1
            flag = True
        else:
            if(int(l1[1]) ==1 and flag):
                count +=1
    r.append(count)
  except EOFError:
    break

for i in r:
    print(i)