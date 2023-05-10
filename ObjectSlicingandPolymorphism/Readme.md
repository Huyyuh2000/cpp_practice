
- Pass this to main to have a overview about Object Slicing and polymorphism
``` C++
Child c;
Parent &p = c; // this is assign reference to a Child class
p.print();

// derived class object is assigned to a base class object
// this will run copy constructor in base class
// This cause object slicing which mean that the part of drived class will be thrown away
Parent p1 = Child(); 
p1.print();
```
- For more information, refer link in header file