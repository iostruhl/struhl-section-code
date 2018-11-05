def foo(f):
  f + 1
  def newFunction():
    return f() + 1

  print(type(newFunction))
  print(type(f() + 1))

  return newFunction

@foo
def one():
  return 1

a = one()
print(a) # What does this print?
