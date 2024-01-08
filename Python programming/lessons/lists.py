#all types of lists

a = [1, 2, 3, 4, 5]
a.append(6)
print(a)
a.pop()#removes last item
print(a)
a.insert(0, 0)#inserts 0 at index 0
print(a)
a.remove(0)#removes first 0 
print(a)
a.reverse()#reverses list
print(a)
a.sort()#sorts list
print(a)
a.sort(reverse=True)#sorts list in reverse
print(a)
#indexing in lists
a.index(1)#returns index of 1
a.clear()#clears list
#slicing
a = [1, 2, 3, 4, 5]
print(a[0:2])#prints first two items
print(a[0:5:2])#prints every second item
print(a[::2])#prints every second item
print(a[::-1])#prints list in reverse
print(a[1:4:-1])#prints nothing
print(a[4:1:-1])#prints 5, 4, 3
print(a[1::-1])#prints 2, 1
print(a[:1:-1])#prints 5, 4, 3


#dictionary

b = {"name": "John", "surname": "Smith"}
d = {"name": "John", "name": "Jane"}#overwrites John with Jane
print(d)
print(b["name"])#prints John
print(b["surname"])#prints Smith
b.update({"name": "Jane"})#updates name to Jane

print(b.get("name"))#prints John
print(b.pop("name"))#removes John
print(b.values())#prints values
print(b.keys())#prints keys
print(b.items())#prints items
b.clear()#clears dictionary



#tuples
c = (1, 2, 3, 4, 5)
#tuples are immutable
#tuples are faster than lists
#tuples are used to store data that will never change

c.count(1)#counts how many 1s are in tuple
c.index(1)#returns index of 1

#sets
d = {1, 2, 3, 4, 5}
#sets are unordered
#sets cannot contain duplicates
#sets are mutable
d.add(6)#adds 6 to set
d.remove(6)#removes 6 from set
d.discard(6)#removes 6 from set
d.clear()#clears set

d.union({6, 7, 8})#adds 6, 7, 8 to set
d.intersection({6, 7, 8})#returns common items
d.difference({6, 7, 8})#returns uncommon items
d.symmetric_difference({6, 7, 8})#returns uncommon items
d.issubset({1, 2, 3, 4, 5, 6, 7, 8})#returns True