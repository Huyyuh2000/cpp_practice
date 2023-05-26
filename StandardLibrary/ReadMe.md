# STL - Standard Library 
## Common knowledge
### Deque
- Like vector, the differences is Deque is allow push both front and back while vector only have push back
## In embedded system
- If MCU allow compile C++, try to use stl consistently. The reason using stl is that the stl author optimized and tested
- However, for ECU that have limited heap (or small heap) using data structural of standard library might be an issued
    - The reason is that std::vector, std::map dynamically allocating memory on the heap. If the currently allocated memory is full,
      it just allocate a bigger chunk and copy all element to the new one. Therefore, memory can grow unlimited until it overflow.
``` C++
int a;
```
- In Autosar, the safer library is created eg. ```vfc::TFixedVector``` which have to define maximum size beforehand.  Memory is not allocated on the heap and the vector will not grow beyond its defined size or reallocate memory. That makes it much more predictable in terms of runtime and memory consumption, which is required in real-time and safety critical software.
- Example
```C++
#include <vfc_fixedvector.hpp>

vfc::TFixedVector<uint8, 4> a;
a.push_back(0);
a.push_back(1);
a.push_back(2);
a.push_back(3);
```