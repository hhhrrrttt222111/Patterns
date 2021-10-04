def main() :
  #num = int(input())
  num = 5
  for i in range(num) :
    for j in range(num -1 -i) :
      print(' ', end='')
    for k in range(i +1) :
      print(chr(65+k), end='')
    print()
  
if __name__ == "__main__" :
  main()
