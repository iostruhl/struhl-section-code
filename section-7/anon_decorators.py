def decorator(function):
  return lambda: function() + 1 # Python's hard to understand anonymous function feature!


@decorator
def one():
  return 1

a = one()
print(a) # What does this print?
