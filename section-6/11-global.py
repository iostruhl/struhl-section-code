global_var = "hello"
def main():
  global global_var
  print("global variable: %s" % global_var)

  global_var = "hello2"
  print("global variable: %s" % global_var)

if __name__ == "__main__":
  main()