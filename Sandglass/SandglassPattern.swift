
for i in 1...5
{
  for _ in 1...i
  {
    print(terminator: " ")
  }
  for _ in stride(from: i, to: 6, by: 1)
  {
    print("*",terminator : " ")
  }
  print("")
}
for i in 1...5
{
    for _ in stride(from: 6, to: i, by: -1)
    {
        print(terminator : " ")
    }

    for _ in 1...i
    {
        print("*",terminator : " ")
    }
    print(" ")
}
