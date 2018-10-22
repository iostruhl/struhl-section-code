from sys import argv
import re
from time import time

'''
The following 3 functions are all of `dictionary.c`
'''
def load(dictfile):
  with open('./%s' % dictfile, 'r') as fp:
    return set(fp.read().strip().split('\n'))

def check(dictionary, word):
  return word.lower() in dictionary

def size(dictionary):
  return len(dictionary)

'''
This function is what `speller.c` was
'''
def main(dictfile, text):
  # Open dictionary and calculate time
  loadtime = time()
  dictionary = load(dictfile)
  loadtime = time() - loadtime

  # Open and read the text
  fp = open('./%s' % text, 'r')
  # Finds all alphabetic words (slightly different from speller.c)
  words = re.findall('(?!\d)\w+', fp.read())
  fp.close()

  misspelled = 0
  checktime = 0
  for word in words:
    t0 = time()
    isword = check(dictionary, word)
    t1 = time()

    if not isword:
      misspelled += 1
      print(word)

    checktime += t1 - t0

  sizetime = time()
  dict_size = size(dictionary)
  sizetime = time() - sizetime
  # Print output
  print("\nWORDS MISSPELLED: \t", misspelled)
  print("WORDS IN DICTIONARY: \t", dict_size)
  print("WORDS IN TEXT: \t\t", len(words))
  print("TIME IN load:\t\t %.2f" % loadtime)
  print("TIME IN check:\t\t %.2f" % checktime)
  print("TIME IN size:\t\t %.2f" % sizetime)
  print("TIME IN unload:\t\t", "0.00")
  print("TIME IN TOTAL:\t\t %.2f\n" % (loadtime + checktime))


if __name__ == "__main__":
  main(argv[1], argv[2])
