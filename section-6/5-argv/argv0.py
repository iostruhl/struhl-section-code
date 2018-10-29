import sys
if len(sys.argv) == 2:
    print("hello, {}".format(sys.argv[1]))
    print("hello, %s" % sys.argv[1])
else:
    print("hello, world")
