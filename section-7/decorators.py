def decorator(function):
  def newFunction():
    return function() + 1
  return newFunction


@decorator
def one():
  return 1

a = one()
print(a) # What does this print?
