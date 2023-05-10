
- Pass this to main to have a overview about Abstract Classes
``` C++
// Animal a; -> build error because this is abstract class

// Dog d; -> build error because this is abstract class

Labrador l;
l.run();
l.speak();

// create a pointer of abstract class and point to concrete class
Animal *animal[3];
animal[0] = &l;
animal[0]->run();

AbstractClasses_test(l);
return 0;   
```
- For more information, refer link in header file