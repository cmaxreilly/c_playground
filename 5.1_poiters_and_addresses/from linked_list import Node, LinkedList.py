from linked_list import Node, LinkedList
from blossom_lib import flower_definitions

class HashMap():
  def __init__(self, size):
    self.array_size = size
    self.array = [LinkedList() for item in range(self.array_size)]

  def hash(self, key):
    hash_code = sum(key.encode())
    return hash_code

  def compress(self, hash_code):
    compressed_code = hash_code % self.array_size
    return compressed_code

  def assign(self, key, value):
    array_index = self.compress(self.hash(key))
    payload = Node([key, value])
    list_at_array = self.array[array_index]
    for i in list_at_array:
      if i[0] == key:
        i[1] = value
      else:
        list_at_array.insert(payload)
  def retrieve(self, key):
    array_index = self.compress(self.hash(key))
    list_at_index = self.array[array_index]
    
    if list_at_index != None:
      for item in list_at_index:
        if item[0] == key:
          return item[1]
      else:
        return None
    else: 
      return None

blossom = HashMap(len(flower_definitions))

for element in flower_definitions:
  blossom.assign(element[0], element[1])

print(blossom.retrieve('daisy'))
print(blossom.retrieve('rose'))
 