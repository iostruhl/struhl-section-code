def decorator(function):
  return lambda a: function(a) + 1 # Python's hard to understand anonymous function feature!

@decorator
def one(a):
  return a

b = one(4)
print(b) # What does this print?
