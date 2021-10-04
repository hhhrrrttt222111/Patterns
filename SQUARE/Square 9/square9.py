def main() :
  #num = input()
  num = 5
  for i in range(num) :
    for j in range(num) :
      print(chr(64+num-j), end='')
    print()
    
if __name__ == "__main__" :
  main()
